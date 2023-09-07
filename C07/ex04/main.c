#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h> // Include the <string.h> header for strcmp

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

bool run_test(const char *test_description, char *nbr, char *base_from, char *base_to, const char *expected_result) {
    char *result = ft_convert_base(nbr, base_from, base_to);
    bool passed = (result != NULL) && (strcmp(result, expected_result) == 0);
    
    printf("Test: %s\n", test_description);
    printf("Input: %s (Base From: %s, Base To: %s)\n", nbr, base_from, base_to);
    
    if (passed) {
        printf("Result: \"%s\" (Passed)\n", result);
    } else {
        printf("Result: \"%s\" (Failed, Expected: \"%s\")\n", result, expected_result);
    }

    free(result);
    printf("\n");
    
    return passed;
}

int main(void) {
    bool all_tests_passed = true;

    // Test 1: Binary to Decimal
    all_tests_passed &= run_test("Binary to Decimal", "101010", "01", "0123456789", "42");

    // Test 2: Decimal to Binary
    all_tests_passed &= run_test("Decimal to Binary", "42", "0123456789", "01", "101010");

    // Test 3: Hexadecimal to Binary
    all_tests_passed &= run_test("Hexadecimal to Binary", "1A", "0123456789ABCDEF", "01", "11010");

    // Test 4: Decimal to Hexadecimal
    all_tests_passed &= run_test("Decimal to Hexadecimal", "255", "0123456789", "0123456789ABCDEF", "FF");

    // Test 5: Negative Decimal to Hexadecimal
    all_tests_passed &= run_test("Negative Decimal to Hexadecimal", "-255", "0123456789", "0123456789ABCDEF", "-FF");

    // Test 6: Empty Input
    all_tests_passed &= run_test("Empty Input", "", "0123456789abcdef", "0123456789", "");

    // Test 7: Base Conversion without Base From
    all_tests_passed &= run_test("Base Conversion without Base From", "1001", "", "01", "");

    // Test 8: Base Conversion without Base To
    all_tests_passed &= run_test("Base Conversion without Base To", "42", "01", "", "");

    if (all_tests_passed) {
        printf("All tests passed!\n");
    } else {
        printf("Some tests failed.\n");
    }

    return 0;
}
