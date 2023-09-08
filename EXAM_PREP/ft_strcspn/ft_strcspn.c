/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:28:03 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/07 16:28:03 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

const char *ft_strchr(const char c, const char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return &str[i];
        i++;
    }
    return (0);
}

size_t ft_strcspn(const char *s, const char *reject)
{
    size_t i;
    int j;

    i = 0;
    while (s[i] && !ft_strchr(s[i], reject))
        i++;
    return (i);
}

#include <stdio.h>
#include <assert.h>
#include <string.h>

// Helper function to compare the result of ft_strcspn with the expected value
void test_ft_strcspn(const char *s, const char *reject, size_t expected)
{
    size_t result = ft_strcspn(s, reject);
    assert(result == expected);
    printf("Test passed: ft_strcspn(\"%s\", \"%s\") = %zu\n", s, reject, result);
}

int main()
{
    // Test cases
    test_ft_strcspn("abcdefg", "xyz", strcspn("abcdefg", "xyz"));     // All characters from s are in reject
    test_ft_strcspn("abcdefg", "adef", strcspn("abcdefg", "adef"));    // First character not in reject is 'b'
    test_ft_strcspn("abcdefg", "a", strcspn("abcdefg", "a"));       // First character not in reject is 'b'
    test_ft_strcspn("abcdefg", "aceg", strcspn("abcdefg", "aceg"));    // First non-rejected character is 'b'
    test_ft_strcspn("abcdefg", "abcdefg", strcspn("abcdefg", "abcdefg")); // All characters from s are in reject
    test_ft_strcspn("abcdefg", "gfedcba", strcspn("abcdefg", "gfedcba")); // None of the characters from s are in reject

    printf("All tests passed!\n");
    return 0;
}
