/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists_managment.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:31:11 by dicosta-          #+#    #+#             */
/*   Updated: 2024/12/20 19:51:23 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_doublelist_new(t_data cont)
{
	t_stack	*new;
	
	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->data = cont;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}


