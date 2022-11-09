/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:45:21 by ohaimad           #+#    #+#             */
/*   Updated: 2022/11/07 10:44:31 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	while (s1[0] != '\0' && ft_strchr(set, s1[0]))
		s1++;
	len = ft_strlen(s1);
	while (ft_strrchr(set, s1[len - 1]))
		len--;
	return (ft_substr(s1, 0, len));
}
