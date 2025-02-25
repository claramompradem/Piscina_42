/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmomprad <cmomprad@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:04:09 by cmomprad          #+#    #+#             */
/*   Updated: 2024/08/13 13:20:44 by cmomprad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	pos;

	pos = 0;
	while (src[pos] != '\0')
	{
		dest[pos] = src[pos];
		pos++;
	}
	dest[pos] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	arr[] = "hola";
	char	arr1[] = "copy";
	
	ft_strcpy(arr1, arr);

	for(int i = 0; i <= 4; i++)
	{
		printf("%c", arr1[i]);
	}
}
*/
