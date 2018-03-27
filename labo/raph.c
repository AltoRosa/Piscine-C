/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raph.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiralle <rmiralle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 17:41:37 by rmiralle          #+#    #+#             */
/*   Updated: 2018/03/27 20:33:47 by rmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	print_tab(int **tab)
{
	int x;
	int y;

	y = 0;
	while (y < 8)
	{
		x = 0;
		while (x < 8)
		{
			printf("%d", tab[y][x]);
			printf(" ");
			x++;
		}
		y++;
		printf("\n");
	}
}

int		check_line(int **tab, int y)
{
	int i;

	i = 0;
	while (i < 8)
	{
		if (tab[y][i] == 1)
			return (1);
		i++;
	}
	return (0);
}

int		check_column(int **tab, int x)
{
	int i;

	i = 0;
	while (i < 8)
	{
		if (tab[i][x] == 1) 
			return (1);
		i++;
	}
	return (0);
}

int		check_diago(int **tab, int y, int x)
{
	int i;
	int j;

	i = y;
	j = x;
	while (i < 7 && j < 7)
	{
		if (tab[i + 1][j + 1] == 1)
			return (1);
		i++;
		j++;
	}
	i = y;
	j = x;
	while (i > 0 && j > 0)
	{
		if (tab[i - 1][j - 1] == 1)
			return (1);
		i--;
		j--;
	}
	return (0);
}

int		check_diago_2(int **tab, int y, int x)
{
	int i;
	int j;

	i = y;
	j = x;
	while (i < 7 && j > 0)
	{
		if (tab[i + 1][j - 1] == 1)
			return (1);
		i++;
		j--;
	}
	i = y;
	j = x;
	while (i > 0 && j < 7)
	{
		if (tab[i - 1][j + 1] == 1)
			return (1);
		i--;
		j++;
	}
	return (0);
}

int		check_all(int **tab, int y, int x)
{
	if (check_line(tab, y) == 1)
		return (1);
	if (check_column(tab, x) == 1)
		return (1);
	if (check_diago(tab, y, x) == 1)
		return (1);
	if (check_diago_2(tab, y, x) == 1)
		return (1);
	return (0);
}

int		ft_eight_queens_puzzle(int **tab, int y, int x, int queen)
{
	if (queen  == 8)
		return (1);
	if (y > 8 || x > 8)
		return 0;
	while (y < 8)
	{
		x = 0;
		while (x < 8)
		{
			if (check_all(tab, y, x) == 0)
			{
				tab[y][x] = 1;
				if (ft_eight_queens_puzzle(tab, y, x, queen + 1) == 1)
					return (1);
				tab[y][x] = 0;
			}
			x++;
		}
		y++;
	}
	return (0);
}

int     main(void)
{
	int		x;
	int		y;
	int		**tab;

	y = 0;
	tab = malloc(sizeof(int *) * 8);
	while (y < 8)
	{
		x = 0;
		while (x < 8)
		{
			tab[y] = malloc(sizeof(int) * 8);
			x++;
		}
		y++;
	}
	ft_eight_queens_puzzle(tab, 0, 0, 0);
	print_tab(tab);
	return (0);
}