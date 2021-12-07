/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 19:22:10 by mmariani          #+#    #+#             */
/*   Updated: 2021/12/07 19:45:50 by mmariani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
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
}

int main ()
{
	printf("%d\n",ft_strncmp("pippo","pippo",3));
	printf("%d\n",ft_strncmp("pippooo","pluto",3));
	printf("%d\n\n\n",ft_strncmp("pippo","plutoooo",3));
	printf("%d\n",strncmp("pippo","pippo",3));
	printf("%d\n",strncmp("pippooo","pluto",3));
	printf("%d\n",strncmp("pippo","plutoooo",3));
}
