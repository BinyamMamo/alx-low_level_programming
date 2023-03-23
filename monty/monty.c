#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

void pall(stack_t **stack, unsigned int line_number);
void push(stack_t **stack, unsigned int line_number);

instruction_t inst[] = {
		{"push", push},
		{"pall", pall},
};

void parse(char *line);

/**
 * main - Entry point of the program
 * @argc: the number of arguments
 * @argv: list of arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	stack_t *stack = NULL;
	char line[256];
	int line_no = 0;
	void (*func)(stack_t **, unsigned int);
	int found = 0;
	int i = 0;
	FILE *file;
	char *token;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		return 1;
	}
	while (fgets(line, sizeof(line), file))
	{
		line_no++;
		token = strtok(line, " \n\r");

		if (token == NULL)
			continue;
		for (i = 0; i < 2; i++)
		{
			if (!strcmp(inst[i].opcode, token))
			{
				func = inst[i].f;
				(*func)(&stack, line_no);
				found = 1;
			}
		}
		if (!found)
		{
			fprintf(stderr, "L%u: unknown instruction %s\n", line_no, token);
			exit(EXIT_FAILURE);
		}
	}

	fclose(file);
	return (0);
}

void pall(stack_t **stack, unsigned int line_number)
{
	int i = 0;
	stack_t *temp = NULL;
	stack_t *pos = *stack;

	if (pos == NULL)
	{
		fprintf(stderr, "stack underflow");
		exit(0);
	}
	else
	{
		temp = pos;
		while (temp != NULL)
		{
			printf("stack[%d] = %d\n", i, temp->n);
			temp = temp->prev;
			i++;
		}
	}
}

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = malloc(sizeof(stack_t));
	stack_t *pos = *stack;
	char *token = strtok(NULL, " \n");
	int data = 0;
	// *stack = temp;
	// temp->n = data;
	if (token == NULL)
	{
		fprintf(stderr, "L%u: usage: push integer", line_number);
		exit(EXIT_FAILURE);
	}

	data = atoi(token);
	if (temp == NULL)
	{
		fprintf(stderr, "stack overflow");
		exit(0);
	}
	else
	{
		if (pos == NULL)
		{
			temp->prev = NULL;
			temp->n = data;
			temp->next = NULL;
			pos = temp;
		}
		else
		{
			temp->n = data;
			temp->prev = pos;
			temp->next = NULL;
			pos->next = temp;
			pos = temp;
		}
	}
}
