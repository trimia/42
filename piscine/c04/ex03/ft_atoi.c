/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 14:09:15 by mmariani          #+#    #+#             */
/*   Updated: 2021/12/10 21:32:53 by mmariani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_numeric(char *str, int i)
{
	if (str[i] < 48 || str[i] > 57)
		return (0);
	return (1);
}

int	ft_countspace(char *str, int i)
{
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	final;

	final = 0;
	sign = 1;
	i = ft_countspace(str, 0);
	while (str[i] == '-' || str[i] == '+')
	{
		sign *= (-1);
		i++;
	}
	while (str[i] != '\0')
	{
		if (ft_is_numeric(str, i))
		{
			final = (final * 10) + (str[i] - 48);
			i++;
		}
		else
			break ;
	}
	return (final * sign);
}
