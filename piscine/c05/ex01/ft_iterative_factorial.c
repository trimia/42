/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:14:49 by mmariani          #+#    #+#             */
/*   Updated: 2021/12/13 20:50:08 by mmariani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_numeric(char a)
{
	if (i < 48 || i > 57)
		return (0);
	i++;
	return (1);
}

int	ft_iterative_factorial(int nb)
{
	int	n;
	int	i;

	i = 0;
	n = 1;
	if (ft_is_numeric(nb)
			return (0);
	while (nb - i >= 1)
	{
		n = n * (nb - i);
		i++;
	}
	return (n);
}
int main ()
{
	printf("%d",ft_iterative_factorial("a"));
}
