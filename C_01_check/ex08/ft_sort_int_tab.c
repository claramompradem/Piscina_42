/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmomprad <cmomprad@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 14:57:42 by cmomprad          #+#    #+#             */
/*   Updated: 2024/08/12 11:55:42 by cmomprad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	pos;
	int	min;
	int	i;
	int	f;

	i = 0;
	f = size - 1;
	while (i <= f)
	{
		min = i;
		pos = i + 1;
		while (pos <= f)
		{
			if (tab[pos] < tab[min])
				min = pos;
			pos++;
		}
		aux = tab[i];
		tab[i] = tab[min];
		tab[min] = aux;
		i++;
	}
}
/*
int	main(void)
{
	int arr[] = {1, 5, 8, 9, 4};
	int size = 5;
	ft_sort_int_tab(arr, size);

	for (int i = 0; i <= size-1; i++)
	{
		printf("%d", arr[i]);
	}
}
*/
