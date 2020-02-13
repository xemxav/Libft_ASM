#include <stdio.h>

int ft_isprint(int c);
int ft_isascii(int c);

int main()
{
	printf("ft_isprint('a') = %d\n", ft_isprint('a'));
	printf("ft_isprint(13) = %d\n", ft_isprint(13));
	printf("ft_isascii(-5) = %d\n", ft_isprint(-5));
	printf("ft_isascii(128) = %d\n", ft_isprint(128));
	printf("ft_isascii(95) = %d\n", ft_isprint(95));
	return (0);
}