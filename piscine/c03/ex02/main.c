/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:15:14 by mmariani          #+#    #+#             */
/*   Updated: 2021/12/08 17:19:08 by mmariani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int	main()
{
	char a[70] = "concatenatApippo";
	char b[70];
	char c[70];
	printf("%s\n", ft_strcat(a, "bb"));
	printf("%s\n", ft_strcat(a, "bb"));
	printf("%s\n\n\n", ft_strcat(a, "bb"));
	printf("%s\n", strcat(a, "bb"));
	printf("%s\n", strcat(b, "bb"));
	printf("%s\n", strcat(c, "bb"));
}
