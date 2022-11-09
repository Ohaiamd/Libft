/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:57:39 by ohaimad           #+#    #+#             */
/*   Updated: 2022/11/05 22:18:32 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*test;

	test = malloc(size * count);
	if (!test)
		return (NULL);
	else if (test != 0)
		ft_memset(test, 0, count * size);
	return (test);
}
