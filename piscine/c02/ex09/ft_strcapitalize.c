/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 12:29:01 by mmariani          #+#    #+#             */
/*   Updated: 2021/12/07 18:17:55 by mmariani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_numeric(char *str, int i)
{
	if (str[i] < 48 || str[i] > 57)
		return (0);
	return (1);
}

char	*ft_strupcase(char *str, int i)
{
	if (str[i] > 96 && str[i] < 123)
		str[i] -= 32;
	return (str);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] += 32;
		i++;
	}
	return (str);
}

int	ft_is_alpha(char *str, int i)
{
	if (str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122)
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase (str);
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			if (!ft_is_numeric (str, i - 1) && !ft_is_alpha (str, i - 1))
				ft_strupcase (str, i);
		}
		i++;
	}
	return (str);
}
