// #include <stdio.h>
// #include <assert.h>
// #include <stdbool.h>

// // Function prototype for ft_atoi_base
int ft_atoi_base(char *str, char *base);

// // Define a custom assert function to print the failed test cases
// bool custom_assert(int result, int expected, const char *test_description) {
//     if (result == expected) {
//         printf("Test Passed: %s\n", test_description);
//         return true;
//     } else {
//         printf("Test Failed: %s (Expected: %d, Actual: %d)\n", test_description, expected, result);
//         return false;
//     }
// }

// int main() {
//     // Test case 1: Valid input, base 10
//     custom_assert(ft_atoi_base("123", "0123456789"), 123, "Valid input, base 10");

//     // Test case 2: Valid input, base 16 (hexadecimal)
//     custom_assert(ft_atoi_base("1A", "0123456789ABCDEF"), 26, "Valid input, base 16 (hexadecimal)");

//     // Test case 3: Valid input, base 2 (binary)
//     custom_assert(ft_atoi_base("1010", "01"), 10, "Valid input, base 2 (binary)");

//     // Test case 4: Invalid input (contains invalid characters for the base)
//     custom_assert(ft_atoi_base("12G", "0123456789"), 0, "Invalid input (contains invalid characters)");

//     // Test case 5: Valid input, base 8 (octal)
//     custom_assert(ft_atoi_base("12", "01234567"), 10, "Valid input, base 8 (octal)");

//     // Test case 6: Valid input, base 36 (alphanumeric)
//     custom_assert(ft_atoi_base("0Z", "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"), 35, "Valid input, base 36 (alphanumeric)");

//     // Test case 7: Empty input
//     custom_assert(ft_atoi_base("", "0123456789"), 0, "Empty input");

//     // Test case 8: Valid input with leading spaces
//     custom_assert(ft_atoi_base("   -++--+42", "0123456789"), -42, "Valid input with leading spaces");

//     // Test case 8: Valid input with leading spaces
//     custom_assert(ft_atoi_base("   -++--+1337tcfv", "0123456789"), -1337, "Valid input with leading spaces");

//     // Test case 9: Valid input with leading '-' sign
//     custom_assert(ft_atoi_base("-123", "0123456789"), -123, "Valid input with leading '-' sign");

//     // Test case 10: Invalid base (base length < 2)
//     custom_assert(ft_atoi_base("123", "0"), 0, "Invalid base (base length < 2)");

//     // Edge Case 1: Minimum input values
//     custom_assert(ft_atoi_base("0", "0123456789"), 0, "Edge Case 1: Minimum input values");

//     // Edge Case 2: Minimum base length
//     custom_assert(ft_atoi_base("123", "1"), 0, "Edge Case 2: Minimum base length");

//     // Add more test cases and edge cases as needed

//     printf("All tests completed.\n");
//     return 0;
// }

#include <stdio.h>
int main(int ac, char **av)
{
	(void)ac;
  printf("%d\n", ft_atoi_base(av[1], av[2]));
  return 0;
}
