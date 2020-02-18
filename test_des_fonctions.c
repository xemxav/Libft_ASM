
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

//void		test_range(t_func_couple *couple, int min, int max)
//{
//	int errors;
//
//	errors = 0;
//	printf("testing %s...\n", couple->name);
//	while (min <= max)
//	{
//		if (couple->my_func(min) != couple->off_func(min))
//		{
//			printf("%s fails for %d\n", couple->name, min);
//			printf("off value: %d, my value :%d\n", couple->off_func(min), couple->my_func(min));
//			errors++;
//		}
//		min++;
//	}
//	if (errors)
//		printf("%d errors for %s", errors, couple->name);
//	else
//		printf("%s works perfectly\n", couple->name);
//}

void test_strlen()
{
//	int error = 0;
//
//	if (ft_strlen(hello) != strlen(hello))
//	{
//		printf("ft_strlen ne fonctionne pas sur %s\n", "hello");
//		error++;
//	}
//	if (ft_strlen(nul) != strlen(nul))
//	{
//		printf("ft_strlen ne fonctionne pas sur %s\n", "nul");
//		error++;
//	}
//	if (ft_strlen(one) != strlen(one))
//	{
//		printf("ft_strlen ne fonctionne pas sur %s\n", "one");
//		error++;
//	}
//	if (ft_strlen(special) != strlen(special))
//	{
//		printf("ft_strlen ne fonctionne pas sur %s\n", "special");
//		error++;
//	}
//	if (error)
//		printf("il y a %d erreurs sur ft_strlen\n", error);
//	else
//		printf("ft_strlen fonctionne parfaitement\n");
}

void test_puts()
{
//	int error = 0;

//	if (ft_puts(hello) != puts(hello))
//	{
//		printf("ft_puts ne fonctionne pas sur %s\n", "hello");
//		error++;
//	}
//	if (ft_puts(nul) != puts(nul))
//	{
//		printf("ft_puts ne fonctionne pas sur %s\n", "nul");
//		error++;
//	}
//	if (ft_puts(one) != puts(one))
//	{
//		printf("ft_puts ne fonctionne pas sur %s\n", "one");
//		error++;
//	}
//	if (ft_puts(special) != puts(special))
//	{
//		printf("ft_strlen ne fonctionne pas sur %s\n", "special");
//		error++;
//	}
//	if (error)
//		printf("il y a %d erreurs sur ft_puts\n", error);
//	else
//		printf("ft_puts fonctionne parfaitement\n");

	int a = puts(0);
	printf("%d\n", a);
	a = ft_puts(0);
	printf("%d\n", a);
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
//	test_strlen();
	test_puts();
	return (0);
}