/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:42:04 by dicosta-          #+#    #+#             */
/*   Updated: 2025/01/03 17:31:11 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>
# include "libft/libft.h"

// STRUCTS

typedef struct s_data
{
	long	nbr;
	long	index;
} t_data;

typedef struct s_stack
{
	t_data data;
	struct s_stack *next;
	struct s_stack *prev;
} t_stack;

// ARGUMENT PROCESSING

t_stack	*ft_stringprocess(char **argv);
t_stack *ft_process(int	argc, char **argv);

// LIST MANAGEMENT

t_stack	*ft_doublelist_new(t_data content);
t_stack	*ft_doublelist_last(t_stack *stack);
void	ft_dblstackadd_back(t_stack **stack, t_data content);
void	ft_doublelistadd_front(t_stack **stack, t_stack *new);
int		ft_doublelist_size(t_stack *stack);
void	ft_dblstackclear(t_stack **stack, void (*del)(void *));

#endif