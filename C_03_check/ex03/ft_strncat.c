/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmomprad <cmomprad@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 19:03:31 by cmomprad          #+#    #+#             */
/*   Updated: 2024/08/16 11:34:18 by cmomprad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	size_t	dest_len;
	size_t	pos;

	dest_len = 0;
	pos = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (src[pos] != '\0' && pos < nb)
	{
		dest[dest_len + pos] = src[pos];
		pos++;
	}
	dest[dest_len + pos] = '\0';
	return (dest);
}
/*
int     main(void)
{
        char    strg[] = "hola";
        char    strg1[] = "que tal";

        //ft_strncat(strg, strg1, 2);
        strncat(strg, strg1, 2);
        for (int i = 0; i <= 10; i++)
                printf("%c", strg[i]);
}
*/
