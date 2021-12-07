/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:26:17 by mmariani          #+#    #+#             */
/*   Updated: 2021/11/30 21:17:20 by mmariani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	int	i;
	int	a;
	int	b;
	int	digit[9];

	i = 0;
	a = n;
	while (i < n)
	{
		digit[i] = i;
		i++;
	}
	while (a <= 9)
	{
		digit[a] = a + 1;
		b = a - 1;
		digit[b] = b + 1;
	}
}
