#ifndef MAIN_H
#define MAIN_H

char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
void set_string(char **s, char *to);
void print_chessboard(char (*a)[8]);
char *_strstr(char *haystack, char *needle);

#endif
