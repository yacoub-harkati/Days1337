#include <stdlib.h>
#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int main(void)
{
	char *baseconv = ft_convert_base("15", "0123456789", "01");
	printf("\"%s\"\n", baseconv);
	free(baseconv);

	baseconv = ft_convert_base("10000", "01", "0123456789");
	printf("\"%s\"\n", baseconv);
	free(baseconv);

	baseconv = ft_convert_base("-31", "0123456789", "0123456789abcdef"); // HERE GIVES SEGFAULT
	printf("\"%s\"\n", baseconv);
	free(baseconv);

	baseconv = ft_convert_base("+1f", "0123456789abcdef", "0123456789");
	printf("\"%s\"\n", baseconv);
	free(baseconv);

	baseconv = ft_convert_base("0", "0123456789abcdef", "0123456789");
	printf("\"%s\"\n", baseconv);
	free(baseconv);

	baseconv = ft_convert_base("0.1234567", "0123456789", "0123456789");
	printf("\"%s\"\n", baseconv);
	free(baseconv);

	baseconv = ft_convert_base("2147483647", "0123456789", "0123456789abcdef");
	printf("\"%s\"\n", baseconv);
	free(baseconv);

	baseconv = ft_convert_base("-80000000", "0123456789abcdef", "0123456789");
	printf("\"%s\"\n", baseconv);
	free(baseconv);
}