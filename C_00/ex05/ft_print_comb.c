/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 10:12:18 by pperol            #+#    #+#             */
/*   Updated: 2021/09/13 14:40:52 by pperol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	p1;
	char	p2;
	char	p3;

	p1 = '/';
	while (p1++ < '7')
	{
		p2 = p1;
		while (p2++ < '8')
		{
			p3 = p2;
			while (p3++ < '9')
			{
				ft_putchar(p1);
				ft_putchar(p2);
				ft_putchar(p3);
				if (p1 != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
