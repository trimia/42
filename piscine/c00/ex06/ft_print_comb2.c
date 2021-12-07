/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:35:53 by mmariani          #+#    #+#             */
/*   Updated: 2021/11/30 20:46:32 by mmariani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	scribing(char a, char b, char c, char d)
{
	if ((a == c && b == d) || (c < a) || ((a == c) && (d < b)))
		return ;
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if ((a == c) && (b == d - 1) && (c == d) && (d == '9'))
		return ;
	write(1, ", ", 2);
}

void	ft_whilel(char i, char j, char k, char l)
{
	while (l <= '9')
	{
		scribing(i, j, k, l);
		l++;
	}
}

void	ft_whileijk(char i, char j, char k, char l)
{
	while (i <= '9')
	{
		while (j <= '9')
		{
			while (k <= '9')
			{
				ft_whilel(i, j, k, l);
				k++;
				l = '0';
			}
			j++;
			k = '0';
		}
		i++;
		j = '0';
	}
}

void	ft_print_comb2(void)
{
	char	i;
	char	j;
	char	k;
	char	l;

	i = '0';
	j = '0';
	k = '0';
	l = '1';
	ft_whileijk(i, j, k, l);
}
