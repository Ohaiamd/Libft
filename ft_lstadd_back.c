/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohaimad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:10:40 by ohaimad           #+#    #+#             */
/*   Updated: 2022/11/08 15:37:14 by ohaimad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*head;

	if (!new)
		return ;
	head = *lst;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	while (head->next)
		head = head->next;
	head->next = new;
}
int main()
{
	t_list *node1 = ft_lstnew("abc");
	t_list *node2 = ft_lstnew("abc");
	t_list *new = ft_lstnew("xxx");
	t_list *node3 = ft_lstnew("abc");

	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	ft_lstadd_front(&node1, new);
	while(node1)
	{
		printf("%s\n", node1->content);
		node1 = node1->next;
	}
}