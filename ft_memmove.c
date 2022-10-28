/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:32:53 by ohaimad           #+#    #+#             */
/*   Updated: 2022/10/26 09:42:34 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t		i;
	char		*d;
	char		*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if (src < dest)
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	if (src > dest)
	{
		while (i < len)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}

// int main()
// {
//     char *src  = "1234567";
//     char *dest = "222222222";
//     // char *dest = (char *)malloc(sizeof(char) * 15);
//     //char *src = dest + 5;
//     // for (int i = 0; i < 15; i++)
//     // {
//     //   dest[i] = i;
//     // }
//     //printf("%s\n", ft_memmove(dest, src, 7));  
//     printf("%s\n", ft_memmove(dest, src, 6));
//     // printf("%s\n", memmove(dest1, src, 0));
// }
