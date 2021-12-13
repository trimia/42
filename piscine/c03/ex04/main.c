/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:53:29 by mmariani          #+#    #+#             */
/*   Updated: 2021/12/09 21:24:55 by mmariani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int main()
{
		printf("%s\n",ft_strstr("pippo","ip"));
		printf("%s\n",ft_strstr("pippo",""));
		printf("%s\n",ft_strstr("pippo","c"));
		printf("%s\n",strstr("pippo","ip"));
		printf("%s\n",strstr("pippo",""));
		printf("%s\n",strstr("pippo","c"));
		
}
