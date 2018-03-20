/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiralle <rmiralle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 17:18:08 by rmiralle          #+#    #+#             */
/*   Updated: 2018/03/20 19:41:04 by rmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_map(int **tab)
{
	int x;
	int y;

	y = 0;
	while (y < 8)
	{
		x = 0;
		while (x < 8)
		{

			ft_putchar(tab[y][x] +48);
			ft_putchar(' ');
			x++;
		}
		y++;
		ft_putchar('\n');
	}
}

int		check_line(int **tab, int y)
{
	int i;

	i = 0;
	while (i < 8)
	{
		if (tab[y][i] == 1)
			return (0);
		i++;
	}
	while (--i >= 0)
	{
		if (tab[y][i] == 1)
			return (0);
	}
	return (1);
}

int		check_column(int **tab, int x)
{
	int j;

	j = 0;
	while (j < 8)
	{
		if (tab[j][x] == 1)
			return (0);
		j++;
	}
	while (--j >= 0)
	{
		if (tab[j][x] == 1)
			return (0);
	}
	return (1);
}

int		check_diago(int **tab, int x, int y) 
{
	int i;
	int j;

	i = y;
	j = x;
	while (i < 8 && j < 8)
	{
		if (i + 1 < 8 && j + 1 < 8 && tab[i + 1][j + 1] == 1)
			return (0);
		j++;
		i++;
	}
	i = y;
	j = x;
	while (i >= 0 && j >= 0)
	{
		if (i - 1 >= 0 && j - 1 >= 0 && tab[i - 1][j - 1] == 1)
			return (0);
		j--;
		i--;
	}
	return (1);
}

int		check_diago2(int **tab, int x, int y) 
{
	int i;
	int j;

	i = y;
	j = x;
	while (i < 8 && j >= 0)
	{
		if (i + 1 < 8 && j - 1 >= 0 && tab[i + 1][j - 1] == 1)
			return (0);
		j--;
		i++;
	}
	i = y;
	j = x;
	while (i >= 0 && j < 8)
	{
		if (i - 1 >= 0 && j + 1 < 8 && tab[i - 1][j + 1] == 1)
			return (0);
		j++;
		i--;
	}
	return (1);
}

int		ft_verif(int **tab, int x, int y)
{
	if (check_line(tab, y) == 0)
		return (0);
	else if (check_column(tab, x) == 0)
		return (0);
	else if (check_diago(tab, x, y) == 0)
		return (0);
	else if (check_diago2(tab, x, y) == 0)
		return (0);
	else
		return (1);
}

int		ft_is_one(int **tab, int x, int y)
{
	y = 0;
	while (y < 8)
	{
		x = 0;
		while (x < 8)
		{
			if (ft_verif(tab, x, y) == 1)
			{
				tab[y][x] = 1;
			}
			x++;
		}
		y++;
	}
	return (0);
}

int		main(void)
{
	int x;
	int y;
	int **tab;

	y = 0;
	tab = (int **)malloc(8 * (sizeof(int *)));
	while (y < 8)
	{
		x = 0;
		while (x < 8)
		{
			tab[y] = (int *)malloc(sizeof(int) * 8);
			x++;
		}
		y++;
	}
	// printf("%i\n", check_diago2(tab, 3, 6));
	ft_is_one(tab, x, y);
	ft_print_map(tab);
	return (0);
}
