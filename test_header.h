//
// Created by Xavier-emmanuel Moreau on 2/13/20.
//

#ifndef LIBFT_ASM_TEST_HEADER_H
#define LIBFT_ASM_TEST_HEADER_H

#include <stdio.h>
#include <ctype.h>
#include <string.h>


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
int ft_strlen(const char *s);
int ft_puts(const char *s);

#endif //LIBFT_ASM_TEST_HEADER_H
