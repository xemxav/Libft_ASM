
#include "test_header.h"

t_func_couple g_func_tab[] = {
		{&isascii, &ft_isascii, "isascii"},
		{&isalpha, &ft_isalpha, "isalpha"},
		{&isdigit, &ft_isdigit, "isdigit"},
		{&isalnum, &ft_isalnum, "isalnum"},
		{&isprint, &ft_isprint, "isprint"},
		{NULL, NULL, NULL},
};

void		test_range(t_func_couple *couple, int min, int max)
{
	int errors;

	errors = 0;
	printf("testing %s...\n", couple->name);
	while (min <= max)
	{
		if (couple->my_func(min) != couple->off_func(min))
		{
			printf("%s fails for %d\n", couple->name, errors);
			errors++;
		}
		min++;
	}
	if (errors)
		printf("%d errors for %s", errors, couple->name);
	else
		printf("%s works perfectly\n", couple->name);
}

int main()
{
	int i;

	i = 0;
	while (g_func_tab[i].off_func)
	{
		test_range(g_func_tab + i, -5, 128);
		i++;
	}
	return (0);
}