/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   test_des_fonctions.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: xem <xem@student.le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/02/19 17:54:09 by xmoreau      #+#   ##    ##    #+#       */
/*   Updated: 2020/04/29 11:17:10 by xem         ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
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
	printf("\033[0;33mtesting %s...\n\033[0m", couple->name);
	while (min <= max)
	{
		if (couple->my_func(min) != couple->off_func(min))
		{
			printf("\033[0;31m%s fails for %d\n\033[0m", couple->name, min);
			printf("\033[0;31moff value: %d, my value :%d\n\033[0m", couple->off_func(min), couple->my_func(min));
			errors++;
		}
		min++;
	}
	if (errors)
		printf("\033[0;31m%d errors for %s\n\033[0m", errors, couple->name);
	else
		printf("\033[0;32m%s works perfectly\n\033[0m", couple->name);
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
		printf("\033[0;32mft_puts fonctionne parfaitement\n\033[0m");
}

void	test_memset(int size)
{
	char *s;
	char *s2;

	printf("\033[0;33mTest de ft_memset:\033[0m\n");
	s =(char*)malloc(size);
	s2 = (char*)ft_memset((void*)s, 65, size);
	s[size-1] = '\0';
	printf("%s\n",s);
	if (s == s2)
		printf("\033[0;32mft_memset renvoie la bonne adresse\n\033[0m");
	free(s);
}

void test_bzero(int size)
{
	char *ptr;
	
	printf("\033[0;33mTest de ft_bzero\033[0m\n");
	ptr = (char*)malloc(size);
	ft_bzero(ptr, size);
	int i = 0;
	while (i < size)
	{
		printf("%d", *(int*)(ptr+i));
		if (*(int*)(ptr+i) != 0)
		{
			printf("\033[0;31erreur dans ft_bzero\033[0m");
			break ;
		}
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

	printf("\033[0;33mTest de ft_memcpy\033[0m\n");
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
		printf("\033[0;32mft_memcpy renvoie la bonne adresse\n\033[0m");
	free(s1);
	free(s2);
}

void test_strdup()
{
//	char *s = "abc";
	char *s = "abaabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcbcc";

	printf("\033[0;33mTest de ft_strdup\033[0m\n");
	char *s2 = strdup(s);
	printf("%s\n", s2);
	printf("retour de strcmp entre s et s2 == %d\n", strcmp(s,s2));
	printf("%s\nadresse de s2 == %p\n", s2, s2);
	char *s3 = ft_strdup("\t");
	printf("%s <-une tab?, adresse de s3 == %p\n", s3, s3);
	free(s2);
}

void test_strcat()
{
	char *s1;
	char *s2;

	printf("\033[0;33mTest 1 de ft_strcat\033[0m\n");
	s1 = (char*)malloc(20);
	ft_bzero(s1, 20);
	ft_memset(s1, 'A', 10);
	s2 = ft_strcat(s1, "coucou\0");
	printf("%s\n", s1);
	if (s2 == s1)
		printf("\033[0;32mft_strcat renvoie la bonne adresse\n\033[0m");
	else
		printf("\033[0;31mft_strcat ne renvoie pas la bonne adresse\n\033[0m");

	char s3[50] = "1";
	char s4[50] ="abc";
	char s5[50] = "1";
	char s6[50] ="abc";

	printf("\033[0;33m\nTest 2 de ft_strcat\033[0m\n");
	char *sres2 = strcat(s3,s4);
	char *sres3 = ft_strcat(s5,s6);
	printf("strcat donne le resulat :%s\net la chaine dest original :%s\n", sres2, s3);
	printf("strcat donne le resulat :%s\net la chaine dest original :%s\n", sres3, s5);
	if (sres3 != s5)
		printf("\033[0;31mft_strcat ne renvoie pas la bonne adresse\n\033[0m");
	else
		printf("\033[0;32mft_strcat renvoie la bonne adresse\n\033[0m");

}

void test_cat(char *filename)
{
	printf("\033[0;33mTest de ft_cat sur %s:\n\033[0m\n", filename);
	int fd = open(filename, O_RDONLY);
	if (fd <= 0)
	{
		printf("\033[0;31erreur d'ouverture de %s\n\033[0m", filename);
		return ;
	}
	ft_cat(fd);
	close(fd);
	printf("\n\033[0;33mTest de ft_cat sur stdin : \033[0m\n");
	ft_cat(STDIN_FILENO);
}

int main()
{
	// int i;

	// i = 0;
	// while (g_func_tab[i].off_func)
	// {
	// 	test_range(g_func_tab + i, -5, 128);
	// 	i++;
	// }
	// printf("\n");
	// test_strlen();
	// printf("\n");
	test_puts();
	printf("\n");
	test_memset(20);
	printf("\n");
	test_bzero(20);
	printf("\n");
	test_memcpy();
	printf("\n");
	test_strdup();
	printf("\n");
	test_strcat();
	printf("\n");
	test_cat("Makefile");
	return (0);
}