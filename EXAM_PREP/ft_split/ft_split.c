/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 02:39:16 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/08 02:39:16 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(char *src)
{
    int len;
    char *dest;
    int i;

    len = 0;
    i = 0;
    while (src[len])
        len++;
    if (!(dest = malloc(sizeof(char) * len + 1)))
        return NULL;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

char **ft_split(char *str)
{
    int i;
    int j;
    int old_i;
    int p_i;
    int count;
    char temp_buffer[16384];
    char **strs;

    i = 0;
    j = 0;
    old_i = 0;
    p_i = 0;
    count = 0;
    while (str[i])
    {
        while (str[i] && ((str[i] <= 13 && str[i] >= 9) || str[i] == 32))
            i++;
        old_i = i;
        while (str[i] && !((str[i] <= 13 && str[i] >= 9) || str[i] == 32))
            i++;
        if (old_i < i)
            count++;
    }
    strs = malloc(sizeof(char *) * (count + 1));
    if (!strs)
    return NULL;
    i = 0;
    while (str[i])
    {
        while (str[i] && ((str[i] <= 13 && str[i] >= 9) || str[i] == 32))
            i++;
        old_i = 0;
        while (str[i] && !(((str[i] <= 13 && str[i] >= 9) || str[i] == 32)))
            temp_buffer[old_i++] = str[i++];
        if (old_i > 0)
        {
            strs[p_i] = ft_strdup(temp_buffer);
            if (strs[p_i] == NULL)
            {
                while (j < p_i)
                {
                    free(strs[j]);
                    j++;
                }
                free(strs);
                return NULL;
            }
        }
    }
    strs[p_i] = NULL;
    return strs;
}

#include <stdio.h>
int main(int ac, char **av)
{
    (void)ac;
    char **strs = ft_split(av[1]);
    for (int i = 0; strs[i] != NULL; i++)
    {
        printf("n°%d => %s\n", i + 1, strs[i]);
    }
}