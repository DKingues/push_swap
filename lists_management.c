/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists_management.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:31:11 by dicosta-          #+#    #+#             */
/*   Updated: 2024/12/30 17:56:49 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_doublelist_new(t_data content)
{
	t_stack	*new;
	
	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->data = content;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}
t_stack	*ft_doublelist_last(t_stack *lst)
{
	t_stack	*temp;

	if (!lst)
		return (NULL);
	temp = lst;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	return (temp);
}

void	ft_dbllstadd_back(t_stack **lst, t_data content)
{
	t_stack	*temp;
	t_stack *new;
	
	new = ft_doublelist_new(content);
	if (lst == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		temp = ft_doublelist_last(*lst);
		temp->next = new;
		new->prev = temp;
	}
}

void	ft_doublelistadd_front(t_stack **lst, t_stack *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

int	ft_doublelist_size(t_stack *lst)
{
	size_t	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}



// void	ft_dbllstclear(t_stack **lst, void (*del)(void *))
// {
// 	t_stack	*temp;
// 	t_stack	*aux;

// 	if (lst == NULL || del == NULL)
// 		return ;
// 	temp = *lst;
// 	while (temp != NULL)
// 	{
// 		aux = temp;
// 		temp = temp->next;
// 		del(aux->data.nbr);
// 		del(aux->data.index);
// 		free(aux);
// 	}
// 	*lst = NULL;
// }