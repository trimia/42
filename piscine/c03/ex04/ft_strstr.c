/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmariani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:46:48 by mmariani          #+#    #+#             */
/*   Updated: 2021/12/09 21:24:51 by mmariani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = 0;
	while (to_find[len] != '\0')
		len++;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			j++;
			i++;
			if (to_find[j] == '\0')
				return (&str[i - j]);
			continue ;
		}
	i++;
	j = 0;
	}
	return (0);
}
