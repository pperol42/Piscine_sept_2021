/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 12:49:56 by pperol            #+#    #+#             */
/*   Updated: 2021/09/29 17:35:47 by pperol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact_nb;
	int	i;

	i = 1;
	fact_nb = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (fact_nb);
	while (i <= nb)
		fact_nb *= i++;
	return (fact_nb);
}
