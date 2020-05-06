#include <fcntl.h>
#include <stdio.h>

int	ft_cat(int fd);

int main(int ac, const char **av) {
//	int a = ft_cat(0);
	int b = ft_cat(open(__FILE__, O_RDONLY));
	int c = ft_cat(open(av[0], O_RDONLY));
	int d = ft_cat(-42);
	(void)ac;
	(void)av;
	printf("\nb=%d, c=%d, d=%d",b,c,d);
	return (0);
}
