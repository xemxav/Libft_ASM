//
// Created by Xavier-emmanuel Moreau on 2/13/20.
//

#ifndef LIBFT_ASM_TEST_HEADER_H
#define LIBFT_ASM_TEST_HEADER_H

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>




typedef struct s_func_couple
{
	int			(*off_func)(int);
	int			(*my_func)(int);
	char		*name;
}				t_func_couple;

t_func_couple	g_func_tab[];

int ft_isprint(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isalpha(int c);
int ft_isalnum(int c);
int ft_toupper(int c);
int ft_tolower(int c);
size_t ft_strlen(const char *s);
int ft_puts(const char *s);
void *ft_memset (void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
char *ft_strdup(const char *s);
char *ft_strcat(char *dest, const char *src);
void ft_cat(int fd);

#endif //LIBFT_ASM_TEST_HEADER_H
