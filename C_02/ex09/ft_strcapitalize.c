/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 13:39:24 by pperol            #+#    #+#             */
/*   Updated: 2021/09/24 13:44:58 by pperol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i])
	{
		if ((str[i - 1] < 48)
			|| ((str[i - 1] > 57) && (str[i - 1] < 65))
			|| ((str[i - 1] > 90) && (str[i - 1] < 97))
			|| (str[i - 1] > 122))
		{
			if ((str[i] > 96) && (str[i] < 121))
			{
				str[i] = str[i] - 32;
				i++;
			}
		}
		i++;
	}
	return (str);
}
