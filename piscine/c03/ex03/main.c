/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:15:14 by mmariani          #+#    #+#             */
/*   Updated: 2021/12/08 17:39:29 by mmariani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int	main()
{
	char a[70] = "concatenatApippo";
	char b[70];
	char c[70];
	printf("%s\n", ft_strncat(a, "bbbbbb",3));
	printf("%s\n", ft_strncat(b, "bbbbbb",3));
	printf("%s\n\n\n", ft_strncat(c, "bbbbbb",3));
	printf("%s\n", strncat(a, "bbbbbbbb",3));
	printf("%s\n", strncat(b, "bbbbbbbb",3));
	printf("%s\n", strncat(c, "bbbbbbbb",3));
}
