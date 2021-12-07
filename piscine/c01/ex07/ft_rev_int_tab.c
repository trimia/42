/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:03:04 by mmariani          #+#    #+#             */
/*   Updated: 2021/12/03 22:50:28 by mmariani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	box;
	int	dim;

	i = 0;
	dim = size - 1;
	while (i <= dim)
	{
		box = tab[i];
		tab[i] = tab[dim];
		tab[dim] = box;
		dim--;
		i++;
	}
}
