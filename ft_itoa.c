/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:08:24 by ohaimad           #+#    #+#             */
/*   Updated: 2022/11/06 15:28:57 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static	int	intlen(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		x;
	char	*s;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = intlen(n);
	s = malloc(i + 1);
	if (!s)
		return (NULL);
	x = i;
	if (n < 0)
	{
		n *= -1;
		s[0] = '-';
	}
	while (--i >= 0 && n > 0)
	{
		s[i] = (n % 10) + '0';
		n = n / 10;
	}
	s[x] = '\0';
	return (s);
}
