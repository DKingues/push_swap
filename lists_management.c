/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists_management.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:31:11 by dicosta-          #+#    #+#             */
/*   Updated: 2025/01/03 17:41:26 by dicosta-         ###   ########.fr       */
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
t_stack	*ft_doublelist_last(t_stack *stack)
{
	t_stack	*temp;

	if (!stack)
		return (NULL);
	temp = stack;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	return (temp);
}

void	ft_dbllstadd_back(t_stack **stack, t_data content)
{
	t_stack	*temp;
	t_stack *new;
	
	new = ft_doublelist_new(content);
	if (stack == NULL)
		return ;
	if (*stack == NULL)
		*stack = new;
	else
	{
		temp = ft_doublelist_last(*stack);
		temp->next = new;
		new->prev = temp;
	}
}

void	ft_doublelistadd_front(t_stack **stack, t_stack *new)
{
	if (stack == NULL || new == NULL)
		return ;
	new->next = *stack;
	*stack = new;
}

int	ft_doublelist_size(t_stack *stack)
{
	size_t	i;

	i = 0;
	while (stack != NULL)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}
t_stack	*ft_doublelist_first(t_stack *stack)
{
	t_stack	*temp;

	if (!stack)
		return (NULL);
	temp = stack;
	while (temp->prev != NULL)
	{
		temp = temp->prev;
	}
	return (temp);
}

t_stack *ft_doublelist_remove_front(t_stack *stack)
{
	t_stack *temp;

	temp = ft_doublelist_first(stack);
	if (!stack)
		return (NULL);
	if (temp->next)
	{
		temp = temp->next;
		temp->next->prev = NULL;
	}
	
}



// void	ft_dbllstclear(t_stack **stack, void (*del)(void *))
// {
// 	t_stack	*temp;
// 	t_stack	*aux;

// 	if (stack == NULL || del == NULL)
// 		return ;
// 	temp = *stack;
// 	while (temp != NULL)
// 	{
// 		aux = temp;
// 		temp = temp->next;
// 		del(aux->data.nbr);
// 		del(aux->data.index);
// 		free(aux);
// 	}
// 	*stack = NULL;
// }