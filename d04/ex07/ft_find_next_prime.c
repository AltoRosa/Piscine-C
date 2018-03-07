/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiralle <rmiralle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 14:17:05 by rmiralle          #+#    #+#             */
/*   Updated: 2018/03/07 17:17:05 by rmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_is_prime(int nb)
{
    int d;

    d = 2;
    if (nb <= 1)
        return (0);
    while (d < nb)
    {
        if (nb % d == 0)
            return (0);
        d++;
    }
    return (1);
}

int     ft_find_next_prime(int nb)
{
    while (ft_is_prime(nb) != 1)
        nb++;
    return (nb);
}
