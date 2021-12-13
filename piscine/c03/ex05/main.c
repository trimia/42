/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 22:11:17 by mmariani          #+#    #+#             */
/*   Updated: 2021/12/13 18:53:40 by mmariani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#include <stdio.h>

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size);

int main(){
    unsigned int a;
    char dest[5] = "pippo";
    char src[77] = "davide";
    a = ft_strlcat(dest, src, 0);
    printf("%d\n", a);
	printf("%lu\n" ,strlcat(dest,src,0));
}
