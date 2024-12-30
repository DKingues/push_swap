/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:41:56 by dicosta-          #+#    #+#             */
/*   Updated: 2024/12/30 17:37:04 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    t_stack *a;
    
    a = ft_process(argc, argv);
    
    while (a->next != NULL)
    {
        printf("%ld\n%ld\n\n", a->data.nbr, a->data.index);
        a = a->next;   
    }
    return (0);
}