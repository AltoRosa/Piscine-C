/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiralle <rmiralle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/03 23:17:32 by rmiralle          #+#    #+#             */
/*   Updated: 2018/03/04 21:57:50 by rmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_swap(int *a, int *b)
{
	int o;

	o = *a;
	*a = *b;
	*b = o;
}

void    ft_sort_integer_table(int *tab, int size)
{
	int i;
	int	is_sort;

	i = 0;
	is_sort = 1;
	while (is_sort == 1)
	{
		i = 0;
		is_sort = 0;
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
}
