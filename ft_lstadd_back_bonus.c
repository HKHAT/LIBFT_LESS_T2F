/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchakir <elchakir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 13:11:53 by elchakir          #+#    #+#             */
/*   Updated: 2023/11/12 18:57:06 by elchakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	if(!new)
		return ;
	t_list *temp;
	if(!(*lst))
	{
		*lst = new;
		return;
	}else
	{
	temp = *lst;
			while(temp->next)
			{
				temp = temp->next;
			}
	temp->next = new;
	}
}
// #include <stdio.h>

// int	main()
// {
// 	t_list *head;
// 	head = NULL;
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	node1 = ft_lstnew(10);
// 	node2 = ft_lstnew(5);
// 	node3 = ft_lstnew(2);
// 	ft_lstadd_back(&head,node1);
// 	ft_lstadd_front(&head,node2);
// 	ft_lstadd_back(&head,node3);
// 	while(head)
// 	{
// 		printf("%d->",head->content);
// 		head = head->next;
// 	}
// 	printf("NULL\n");
// 	return 0;
// 	}
