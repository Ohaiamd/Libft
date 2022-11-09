/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:19:36 by ohaimad           #+#    #+#             */
/*   Updated: 2022/11/08 16:25:22 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*s;
	char	*d;
	size_t			i;

	s = (char *)s1;
	d = (char *)s2;
	i = 0;
	while (i < n && s[i] == d[i])
		i++;
	if (i == n)
		return (0);
	return (s[i] - d[i]);
}

// int main()
// {
// 	int c = 130;
// 	int v = 60;

// 	printf("%d\n", ft_memcmp(&c, &v, 1));
// 	printf("%d", memcmp(&c, &v, 1));
// }