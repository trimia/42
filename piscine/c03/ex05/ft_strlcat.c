/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 20:38:31 by mmariani          #+#    #+#             */
/*   Updated: 2021/12/13 18:55:11 by mmariani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	a;
	unsigned int	b;

	a = ft_strlen(dest);
	b = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (b);
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[a + i] = src[i];
		i++;
		if (i < size)
			dest[a + i] = '\0';
		if (a < size)
			return (a + size);
	}
	return (a + b);
}	
