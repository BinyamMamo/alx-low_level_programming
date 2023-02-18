#ifndef STR
#define STR

/* str_utils */
void print(char *, int);
int _atoi(char *);
int _strlen(char *);

/* str_manip */
void _strcpy(char *, char *);
char *_strcat(char *, char *);

/* str_cmp */
int _strcmp(char *, char *);
int _strspn(char *, char *);
int _strcspn(char *, char *);
char *_strchr(char *, char);

/* str_parser */
char *_strtok_r(char *, char *, char **);
char **tokenizer(char *, char *);
int parse_command(char *);
void remove_comment(char *);
void remove_newline(char *);

#endif
