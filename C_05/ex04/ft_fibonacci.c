/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 10:31:55 by pperol            #+#    #+#             */
/*   Updated: 2021/09/29 15:14:06 by pperol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 1)
		return (0);
	if (index < 3)
		return (1);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
