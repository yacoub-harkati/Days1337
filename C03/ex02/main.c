#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int main()
{
    char dest[100] = "Hello";
    char src[] = " World";
    printf("(lib) Before: %s\n", dest);
    printf("(lib) After : %s\n", strcat(dest, src));
    printf("\n");
    char dest2[100] = "Hello";
    printf("(ftl) Before: %s\n", dest2);
    printf("(ftl) After : %s\n", ft_strcat(dest2, src));
}