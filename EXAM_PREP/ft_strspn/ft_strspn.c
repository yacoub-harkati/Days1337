/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 06:39:36 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/08 06:47:36 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <assert.h>
#include <string.h>


char *ft_strchr(char c, char *str)
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

size_t ft_strspn(const char *s, const char *accept)
{
	int i;

	i = 0;
	while (ft_strchr(s[i], (char *)accept))
		i++;
	return i;
}

// Helper function to compare the result of ft_strcspn with the expected value
void test_ft_strspn(const char *s, const char *reject, size_t expected)
{
    size_t result = ft_strspn(s, reject);
    assert(result == expected);
    printf("Test passed: ft_strcspn(\"%s\", \"%s\") = %zu\n", s, reject, result);
}

int main()
{
    // Test cases
    test_ft_strspn("abcdefg", "xyz", strspn("abcdefg", "xyz"));     // All characters from s are in reject
    test_ft_strspn("abcdefg", "adef", strspn("abcdefg", "adef"));    // First character not in reject is 'b'
    test_ft_strspn("abcdefg", "a", strspn("abcdefg", "a"));       // First character not in reject is 'b'
    test_ft_strspn("abcdefg", "aceg", strspn("abcdefg", "aceg"));    // First non-rejected character is 'b'
    test_ft_strspn("abcdefg", "abcdefg", strspn("abcdefg", "abcdefg")); // All characters from s are in reject
    test_ft_strspn("abcdefg", "gfedcba", strspn("abcdefg", "gfedcba")); // None of the characters from s are in reject

    printf("All tests passed!\n");
    return 0;
}
