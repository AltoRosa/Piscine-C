/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiralle <rmiralle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 22:04:40 by rmiralle          #+#    #+#             */
/*   Updated: 2018/03/03 22:45:11 by rmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*
**	ligne 46 : remplacable par ce qui suit
**	if (str[i] == '-' || str[i] == '+')
**		neg = ((str[i++] == '-') ? - 1 : 1);
*/

int		ft_atoi(char *str)
{
	int i;
	int len;
	int neg;
	int nb;

	i = 0;
	nb = 0;
	neg = 1;
	len = ft_strlen(str);
	while (str[i] == '\t' || str[i] == '\n' || str[i] == ' ')
		i++;
	if ((str[i] == '+') || (str[i] == '-' && (neg = -1)))
		i++;
	while (str[i] >= 48 && str[i] <= 57)
		while (i < len)
			nb = nb * 10 + (str[i++] - 48);
	return (nb * neg);
}
