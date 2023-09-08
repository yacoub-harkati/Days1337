/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:13:38 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/07 17:13:38 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

const char *ft_strchr(const char c, const char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == c)
        {
            return &str[i];
        }
        i++;
    }
    return 0;
}

char *ft_strpbrk(char *s1, char *s2)
{
    int i;
    int len;

    i = 0;
    len = 0;
    while (s1[len])
        len++;
    while (s1[i] && !ft_strchr(s1[i], s2))
        i++;
    if (len == i)
        return 0;
    return (&s1[i]);
}

#include <stdio.h>
#include <assert.h>
#include <string.h>

// Helper function to compare the result of ft_strpbrk with the expected value
void test_ft_strpbrk(char *s1, char *s2, char *expected)
{
    char *result = ft_strpbrk(s1, s2);
    assert((result == NULL && expected == NULL) || (result != NULL && expected != NULL && strcmp(result, expected) == 0));
    if (result == NULL && expected == NULL)
    {
        printf("Test passed: ft_strpbrk(\"%s\", \"%s\") = NULL\n", s1, s2);
    }
    else if (result != NULL && expected != NULL)
    {
        printf("Test passed: ft_strpbrk(\"%s\", \"%s\") = \"%s\"\n", s1, s2, result);
    }
    else
    {
        printf("Test failed: ft_strpbrk(\"%s\", \"%s\") expected \"%s\", but got \"%s\"\n", s1, s2, expected, result);
    }
}

int main()
{
    // Test cases for ft_strpbrk
    test_ft_strpbrk("abcdefg", "xyz", NULL);           // No matching characters between s1 and s2
    test_ft_strpbrk("abcdefg", "adef", "abcdefg");     // First matching character is 'a'
    test_ft_strpbrk("abcdefg", "a", "abcdefg");        // First matching character is 'a'
    test_ft_strpbrk("abcdefg", "aceg", "abcdefg");     // First matching character is 'a'
    test_ft_strpbrk("abcdefg", "abcdefg", "abcdefg");  // First matching character is 'a'
    test_ft_strpbrk("abcdefg", "gfedcba", "abcdefg");  // First matching character is 'a'
    test_ft_strpbrk("abcdefg", "zgfedcba", "abcdefg"); // First matching character is 'a' even if 'z' is in s2
    test_ft_strpbrk("abcdefg", "hij", NULL);           // No matching characters between s1 and s2

    printf("All tests passed!\n");
    return 0;
}
