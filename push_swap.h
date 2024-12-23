/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:42:04 by dicosta-          #+#    #+#             */
/*   Updated: 2024/12/20 18:37:22 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>

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

#endif