/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rebours.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiralle <rmiralle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 16:06:29 by rmiralle          #+#    #+#             */
/*   Updated: 2018/03/20 17:05:30 by rmiralle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void    ft_rebours(int nb)
{
    if (nb == 0)
        printf("partez !\n");
    else
    {
        printf("%d\n", nb);
        sleep(1);
        ft_rebours(nb - 1);
    }
}

int     main(void)
{
    ft_rebours(15);
    return (0);
}