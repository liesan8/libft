#include "libft.h"
#include <stdio.h>

int main(void)
{
	printf("=== Testing ft_isalpha ===\n");
	printf("ft_isalpha('a') = %d\n", ft_isalpha('a'));
	printf("ft_isalpha('5') = %d\n\n", ft_isalpha('5'));

	printf("=== Testing ft_isdigit ===\n");
	printf("ft_isdigit('5') = %d\n", ft_isdigit('5'));
	printf("ft_isdigit('a') = %d\n\n", ft_isdigit('a'));

	printf("=== Testing ft_toupper ===\n");
	printf("ft_toupper('a') = '%c'\n", ft_toupper('a'));
	printf("ft_toupper('Z') = '%c'\n\n", ft_toupper('Z'));

	printf("=== Testing ft_tolower ===\n");
	printf("ft_tolower('A') = '%c'\n", ft_tolower('A'));
	printf("ft_tolower('z') = '%c'\n\n", ft_tolower('z'));

	printf("✅ Tests abgeschlossen!\n");
	return (0);
}
