/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiralle <rmiralle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 23:56:15 by rmiralle          #+#    #+#             */
/*   Updated: 2018/03/01 17:21:35 by rmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[]);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int max;

	max = 9;
	if (n < max)
	{
		ft_print_combn(n / 10);
		ft_print_combn(n % 10);
		ft_putchar(n + 48);
	}


}

int		main(void)
{
	ft_print_combn();
	return (0);
}