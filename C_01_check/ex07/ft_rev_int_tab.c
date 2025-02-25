/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmomprad <cmomprad@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 12:52:33 by cmomprad          #+#    #+#             */
/*   Updated: 2024/08/12 11:01:39 by cmomprad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	i;
	int	f;

	i = 0;
	f = size - 1;
	while (i <= f)
	{
		aux = tab[i];
		tab[i] = tab[f];
		tab[f] = aux;
		i++;
		f--;
	}
}
/*
int	main(void)
{
	int arr[] = {1, 5, 8, 9, 4};
	int size = 5;
	ft_rev_int_tab(arr, size);

	for (int i = 0; i <= size; i++)
	{
		printf("%d", arr[i]);
	}
}
*/
