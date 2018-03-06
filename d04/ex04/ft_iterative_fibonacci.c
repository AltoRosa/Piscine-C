/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_fibonacci.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiralle <rmiralle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 21:32:58 by rmiralle          #+#    #+#             */
/*   Updated: 2018/03/06 22:37:58 by rmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_fibonacci(int index)
{
	int a;
	int b;
	int tmp;

	a = 1;
	b = 1;
	if (index < 0)
		return (- 1);
	if (index == 0)
		return (0);
	while (index < 1)
	{
		tmp = a + b;
		a = b;
		b = tmp;
		index--;
	}
	return (a);
}
