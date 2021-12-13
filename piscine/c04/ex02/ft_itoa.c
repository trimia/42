/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:03:40 by mmariani          #+#    #+#             */
/*   Updated: 2021/12/13 15:39:16 by mmariani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char a, char *str,  int i)
{

	str[i] = a;
}

int	ft_len(int nb)
{
	if (nb / 10 != 0)
	{
		len++;
		ft_len(nb / 10);
	}
	return (len);
}

void	ft_putnbr(int nb, char *str)
{
	int i = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
	}
	if (nb < 9)
	{
		nb = nb + 48;
		i++;
		put_char(nb, str, i);
	}
	else
	{
		ft_putnbr((nb / 10), str);
		ft_putnbr((nb % 10), str);
	}
}

char	*ft_itoa(int n)
{
	char str[ft_len(n)];
	ft_putnbr(n, str);
	return (str);
}

#include <stdio.h>
int main()
{
	printf("%s",ft_itoa(45645));
}
