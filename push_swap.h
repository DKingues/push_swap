/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:42:04 by dicosta-          #+#    #+#             */
/*   Updated: 2024/12/26 17:57:02 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>

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
t_stack	*ft_doublelist_last(t_stack *lst);
void	ft_dbllstadd_back(t_stack **lst, t_stack *new);
void	ft_doublelistadd_front(t_stack **lst, t_stack *new);
int	ft_doublelist_size(t_stack *lst);
void	ft_lstclear(t_stack **lst, void (*del)(void *));

#endif