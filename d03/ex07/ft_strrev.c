/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiralle <rmiralle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 18:33:50 by rmiralle          #+#    #+#             */
/*   Updated: 2018/03/03 20:46:29 by rmiralle         ###   ########.fr       */
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

char	*ft_strrev(char *str)
{
	int		i;
	char	o;
	int		len;

	i = 0;
	if (!str)
		return (NULL);
	len = ft_strlen(str);
	while (i < len / 2)
	{
		o = str[len - i - 1];
		str[len - i - 1] = str[i];
		str[i] = o;
		i++;
	}
	return (str);
}
