/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiralle <rmiralle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/04 21:27:05 by rmiralle          #+#    #+#             */
/*   Updated: 2018/03/04 21:56:00 by rmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	ft_swap(int *a, int *b)
{
	int o;

	o = *a;
	*a = *b;
	*b = o;
}

void	ft_2(int *tab, int size)
{
	int i;
	int is_sort;

	i = 0;
	is_sort = 1;
	for(int x = 0; x < size; ++x)
		printf(" %d\n", tab[x]);
	while (is_sort == 1)
	{
		is_sort = 0;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				ft_swap(&tab[i], &tab[i + 1]);
				is_sort = 1;
			}
			i++;
		}
	}
	for(int x = 0; x < size; ++x)
		printf(" %d ", tab[x]);
}

int     main(void)
{
	int size;
	int *tab;

	size = 10;
	tab = (int *)malloc(sizeof(int) * size);
	tab[0] = 3;
	tab[1] = 9;
	tab[2] = 5;
	tab[3] = 4;
	tab[4] = 5;
	tab[5] = 1;
	tab[6] = 55;
	tab[7] = 6;
	tab[8] = 3;
	tab[9] = 8;
	ft_2(tab, size);
	return (0);
}