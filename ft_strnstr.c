/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 21:05:17 by ohaimad           #+#    #+#             */
/*   Updated: 2022/11/07 10:46:21 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	j;
	size_t	needle_len;
	char	*tofind;

	tofind = (char *)haystack;
	needle_len = ft_strlen(needle);
	j = 0;
	if (needle[0] == '\0')
		return (tofind);
	while (j < len && tofind[j])
	{
		if ((len - j) >= needle_len)
		{
			if (ft_memcmp(tofind + j, needle, needle_len) == 0)
			{
				return (tofind + j);
			}
		}
		j++;
	}
	return (0);
}
