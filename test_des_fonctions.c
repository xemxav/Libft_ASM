#include <stdio.h>

int ft_isprint(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isalpha(int c);

int main()
{
	printf("== ft_isprint entre 32 et 126 compris ==\n");
	printf("ft_isprint('a') 1 = %d\n", ft_isprint('a'));
	printf("ft_isprint(127) 0 = %d\n", ft_isprint(127));
	printf("ft_isprint(126) 1 = %d\n", ft_isprint(126));
	printf("ft_isprint(32) 1 = %d\n", ft_isprint(32));
	printf("ft_isprint(31) 0 = %d\n", ft_isprint(31));
	printf("ft_isprint(13) 0 = %d\n", ft_isprint(13));

	printf("\n== ft_isascii entre 0 et 127 compris ==\n");
	printf("ft_isascii(-5) 0 = %d\n", ft_isascii(-5));
	printf("ft_isascii(0) 1 = %d\n", ft_isascii(0));
	printf("ft_isascii(95) 1 = %d\n", ft_isascii(95));
	printf("ft_isascii(127) 1 = %d\n", ft_isascii(127));
	printf("ft_isascii(128) 0 = %d\n", ft_isascii(128));
	printf("ft_isascii(95) 1 = %d\n", ft_isascii(95));

	printf("\n== ft_isdigit entre 48 et 57 compris ==\n");
	printf("ft_isdigit('0') 1 = %d\n", ft_isdigit('0'));
	printf("ft_isdigit('9') 1 = %d\n", ft_isdigit('9'));
	printf("ft_isdigit('5') 1 = %d\n", ft_isdigit('5'));
	printf("ft_isdigit(25) 0 = %d\n", ft_isdigit(25));
	printf("ft_isdigit(58) 0 = %d\n", ft_isdigit(58));

	printf("\n== ft_isalpha entre 65 et 90 compris et 97 et 122 compris==\n");
	printf("ft_isalpha(65) 1 = %d\n", ft_isalpha(65));
	printf("ft_isalpha(90) 1 = %d\n", ft_isalpha(90));
	printf("ft_isalpha(97) 1 = %d\n", ft_isalpha(97));
	printf("ft_isalpha(122) 1 = %d\n", ft_isalpha(122));
	printf("ft_isalpha(70) 1 = %d\n", ft_isalpha(70));
	printf("ft_isalpha(100) 1 = %d\n", ft_isalpha(100));
	printf("ft_isalpha(64) 0 = %d\n", ft_isalpha(64));
	printf("ft_isalpha(91) 0 = %d\n", ft_isalpha(91));
	printf("ft_isalpha(96) 0 = %d\n", ft_isalpha(96));
	printf("ft_isalpha(123) 0 = %d\n", ft_isalpha(123));
	return (0);
}