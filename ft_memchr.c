/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:38:42 by ohaimad           #+#    #+#             */
/*   Updated: 2022/10/26 11:28:44 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*x;

	i = 0;
	x = (char *)s;
	while (i < n)
	{
		if (x[i] == (char)c)
			return ((char *)(x + i));
		i++;
	}
	return (0);
}
// int main()
// {
//  	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
//     printf("%s\n", (char *)ft_memchr(tab, -1, 7));
// 	printf("%s", (char *)memchr(tab, -1, 7));
// }
