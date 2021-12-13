/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 12:18:42 by mmariani          #+#    #+#             */
/*   Updated: 2021/12/09 21:10:51 by mmariani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int		main()
{
	printf("%d\n", ft_strcmp("zippo", "pippo"));
	printf("%d\n", ft_strcmp("pippooo", "pluto"));
	printf("%d\n\n\n", ft_strcmp("pippo", "plutoooo"));
	printf("%d\n", strcmp("zippo", "pippo"));
	printf("%d\n", strcmp("pippooo", "pluto"));
	printf("%d\n", strcmp("pippo", "plutoooo"));
}
