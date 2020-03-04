/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_des_fonctions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmoreau <xmoreau@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 17:54:09 by xmoreau           #+#    #+#             */
/*   Updated: 2020/03/04 15:10:23 by xmoreau          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "test_header.h"

t_func_couple g_func_tab[] = {
		{&isascii, &ft_isascii, "isascii"},
		{&isalpha, &ft_isalpha, "isalpha"},
		{&isdigit, &ft_isdigit, "isdigit"},
		{&isalnum, &ft_isalnum, "isalnum"},
		{&isprint, &ft_isprint, "isprint"},
		{&toupper, &ft_toupper, "toupper"},
		{&tolower, &ft_tolower, "tolower"},
		{NULL, NULL, NULL},
};

char *hello = "hello world\0";
char *nul = "\0";
char *one = "S\0";
char *special = "\n\t\0";

void		test_range(t_func_couple *couple, int min, int max)
{
	int errors;

	errors = 0;
	printf("testing %s...\n", couple->name);
	while (min <= max)
	{
		if (couple->my_func(min) != couple->off_func(min))
		{
			printf("%s fails for %d\n", couple->name, min);
			printf("off value: %d, my value :%d\n", couple->off_func(min), couple->my_func(min));
			errors++;
		}
		min++;
	}
	if (errors)
		printf("%d errors for %s", errors, couple->name);
	else
		printf("%s works perfectly\n", couple->name);
}

void test_strlen()
{
	int error = 0;

	if (ft_strlen(hello) != strlen(hello))
	{
		printf("ft_strlen ne fonctionne pas sur %s\n", "hello");
		error++;
	}
	if (ft_strlen(nul) != strlen(nul))
	{
		printf("ft_strlen ne fonctionne pas sur %s\n", "nul");
		error++;
	}
	if (ft_strlen(one) != strlen(one))
	{
		printf("ft_strlen ne fonctionne pas sur %s\n", "one");
		error++;
	}
	if (ft_strlen(special) != strlen(special))
	{
		printf("ft_strlen ne fonctionne pas sur %s\n", "special");
		error++;
	}
	if (error)
		printf("il y a %d erreurs sur ft_strlen\n", error);
	else
		printf("ft_strlen fonctionne parfaitement\n");
}

void test_puts()
{
	int error = 0;

	if (ft_puts(hello) != puts(hello))
	{
		printf("ft_puts ne fonctionne pas sur %s\n", "hello");
		error++;
	}
	if (ft_puts(nul) != puts(nul))
	{
		printf("ft_puts ne fonctionne pas sur %s\n", "nul");
		error++;
	}
	if (ft_puts(one) != puts(one))
	{
		printf("ft_puts ne fonctionne pas sur %s\n", "one");
		error++;
	}
	if (ft_puts(special) != puts(special))
	{
		printf("ft_strlen ne fonctionne pas sur %s\n", "special");
		error++;
	}
	if (error)
		printf("il y a %d erreurs sur ft_puts\n", error);
	else
		printf("ft_puts fonctionne parfaitement\n");
}

void	test_memset(int size)
{
	char *s;
	char *s2;

	s =(char*)malloc(size);
	s2 = (char*)ft_memset((void*)s, 65, size);
	s[size-1] = '\0';
	printf("%s\n",s);
	if (s == s2)
		printf("renvoie la bonne adresse\n");
	free(s);
}

void test_bzero(int size)
{
	char *ptr;
	ptr = (char*)malloc(size);
	ft_bzero(ptr, size);
	int i = 0;
	while (i < size)
	{
		printf("%d", *(int*)(ptr+i));
		i++;
	}
	printf("\n");
	free(ptr);
}

void test_memcpy()
{
	char *s1;
	char *s2;
	char *s3;

	s1 = (char*)malloc(20);
	memset(s1, 'A', 19);
	s1[19] = '\0';
	s2 = (char*)malloc(20);
	memset(s2, 'B', 19);
	s2[19] = '\0';
	printf("s1 = %s\n", s1);
	printf("s2 = %s\n", s2);
	s3 = ft_memcpy(s1, s2, 19);
	printf("s1 = %s\n", s1);
	printf("s2 = %s\n", s2);
	if (s3 == s1)
		printf("renvoie la bonne adresse\n");
	free(s1);
	free(s2);
}

void test_strdup()
{
//	char *s = "hello world\0";

	char *s2 = strdup("coucou");
	printf("%s %p\n", s2, s2);
	char *s = ft_strdup("\t");
	printf("%s %p\n", s, s);
	free(s2);
}

void test_strcat()
{
	char *s;
	char *s2;

	s = (char*)malloc(20);
	ft_bzero(s, 20);
	ft_memset(s, 'a', 10);
	s2 = ft_strcat(s, "coucou\0");
	printf("%s\n", s);
	if (s2 == s)
		printf("renvoie la bonne adresse\n");
}

void test_cat()
{
	int fd = open("Makefile", O_RDWR);

	ft_cat(fd);
	close(fd);
}

int main()
{
//	int i;
//
//	i = 0;
//	while (g_func_tab[i].off_func)
//	{
//		test_range(g_func_tab + i, -5, 128);
//		i++;
//	}
	test_strlen();
//	test_puts();
//	test_memset(20);
//	test_bzero(20);
//	test_memcpy();
//	test_strdup();
//	test_strcat();
//	test_cat();
	return (0);
}