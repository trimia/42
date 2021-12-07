/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:35:31 by mmariani          #+#    #+#             */
/*   Updated: 2021/12/07 19:21:08 by mmariani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if(s1[i] == '\0' || s2[i] == '\0' )
			break;
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	return (-1);
//	return;
}

int main ()
{
	printf("%d\n",ft_strcmp("pippo","pippo"));
	printf("%d\n",ft_strcmp("pippooo","pluto"));
	printf("%d\n\n\n",ft_strcmp("pippo","plutoooo"));
	printf("%d\n",strcmp("pippo","pippo"));
	printf("%d\n",strcmp("pippooo","pluto"));
	printf("%d\n",strcmp("pippo","plutoooo"));
}
