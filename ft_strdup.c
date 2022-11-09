/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:40:04 by ohaimad           #+#    #+#             */
/*   Updated: 2022/11/07 21:49:18 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;
	char	*str;
	size_t	i;
	size_t	x;

	s = (char *)s1;
	i = 0;
	x = ft_strlen(s) + 1;
	str = malloc(x);
	if (str == 0)
		return (NULL);
	while (s[i] && i <= x)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
