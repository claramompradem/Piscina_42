/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmomprad <cmomprad@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:33:33 by cmomprad          #+#    #+#             */
/*   Updated: 2024/08/16 12:08:18 by cmomprad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && (str[i + j] == to_find[j]))
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
int     main(void)
{
	char	str1[] = "hello world";
	char	str2[] = "hello";
	char	str3[] = "world";
        char *result = ft_strstr(str1, str2);
	char *result1 = ft_strstr(str1, str3);
        //char len = strstr(str1, str2);
	//char len1 = strstr(str1, str2);

	printf("%s", result);
	printf("%s", result1);
}
*/
