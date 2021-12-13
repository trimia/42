/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 12:34:33 by mmariani          #+#    #+#             */
/*   Updated: 2021/12/13 17:32:33 by mmariani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main ()
{
	printf("%d\n", ft_strncmp("pippo", "piapa", 3));
	printf("%d\n", ft_strncmp("pippooo", "pluto", 3));
	printf("%d\n", ft_strncmp("pippo", "plutoooo", 3));
	printf("%d\n\n\n", ft_strncmp("s", "a", 0));
	printf("%d\n", strncmp("pippo", "piapa", 3));
	printf("%d\n", strncmp("pippooo", "pluto", 3));
	printf("%d\n", strncmp("pippo", "plutoooo", 3));
	printf("%d\n", strncmp("s", "a", 0));
}
