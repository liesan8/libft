/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliesenb <aliesenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:00:24 by aliesenb          #+#    #+#             */
/*   Updated: 2026/01/09 14:48:59 by aliesenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <ctype.h>

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int main(void)
{
    char test_chars[] = {'a', 'z', 'A', 'Z', '0', '9', ' ', '@', '\n', 'M', '5'};
    int num_tests = 11;
    int i;

    printf("=== ft_isalpha Tests ===\n\n");

    for (i = 0; i < num_tests; i++)
    {
        char c = test_chars[i];
        int my_result = ft_isalpha(c);
        int real_result = isalpha(c);

        // Zeichen anzeigen
        if (c == '\n')
            printf("Test '\\n': ");
        else if (c == ' ')
            printf("Test ' ' : ");
        else
            printf("Test '%c' : ", c);

        // Ergebnis
        printf("ft_isalpha=%d, isalpha=%d ", my_result, real_result);

        // Vergleich
        if ((my_result != 0) == (real_result != 0))
            printf("✓ PASS\n");
        else
            printf("✗ FAIL\n");
    }

    printf("\n=== Alle Tests fertig! ===\n");
    return (0);
}
