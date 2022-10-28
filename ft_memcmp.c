/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:19:36 by ohaimad           #+#    #+#             */
/*   Updated: 2022/10/19 20:30:44 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s;
	size_t			i;
	unsigned char	*d;

	s = (unsigned char *)s1;
	d = (unsigned char *)s2;
	i = 0;
	while (i < n && s[i] == d[i])
		i++;
	if (i == n)
		return (0);
	return (s[i] - d[i]);
}

// int main()
// {
//     char    *s;
//     char    *d;
//     s = "aaab";
//     d = "aaaa";
//     printf("%d",ft_memcmp(s, d, 3));
// }