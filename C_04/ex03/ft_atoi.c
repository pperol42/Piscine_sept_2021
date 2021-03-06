/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 20:29:17 by pperol            #+#    #+#             */
/*   Updated: 2021/09/28 09:20:41 by pperol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	nbr;
	int	sign;
	int	i;

	nbr = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\t'
		|| str[i] == '\n' || str[i] == '\r' || str[i] == '\v' )
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && (str[i] > 47 && str[i] < 58))
		nbr = nbr * 10 + (str[i++] - 48);
	return (sign * nbr);
}
