#include <stdio.h>
#include <string.h>

// Your ft_strlcat function
unsigned int length_cal(char *str);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main() {
    char dest[50] = "Hello, ";
    char src[] = "world!";
    unsigned int result_ft = ft_strlcat(dest, src, 13);
	char dest1[50] = "Hello, ";
    unsigned int result_orig = strlcat(dest1, src, 13);

    printf("(lib) %d, (flb) %d, %s\n", result_ft, result_orig, result_ft == result_orig ? "Yes" : "No");
    printf("(dest) %s\n", dest);
    printf("(dest1) %s\n", dest1);
    return 0;
}