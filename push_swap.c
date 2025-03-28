/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 18:11:16 by dicosta-          #+#    #+#             */
/*   Updated: 2025/03/04 20:38:08 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_dptr(char **mal);

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		i;

	i = 0;
	if (argc == 1)
		return (0);
	if ((argv[1][0] < '0' || argv[1][0] > '9') && argv[1][0] != '-'
		&& argv[1][0] != '+' && argv[1][0] != ' ')
		return (write(2, "Error\n", 6));
	initialize_stack(&a, &b);
	if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		while (argv[i])
			append_node(&a, ft_atoi(argv[i++]));
	}
	else if (argc > 2)
	{
		while (argv[++i])
			append_node(&a, ft_atoi(argv[i]));
	}
	if (error_check(a, argv) == false)
		return (write(2, "Error\n", 6), free_stack(&a), 0);
	main2(argc, argv, a, b);
}

int	main2(int argc, char **argv, t_stack *a, t_stack *b)
{
	if (stack_size(a) == 2 && is_sorted(a) == false)
		swap_a(a);
	else
		sort_stack(&a, &b);
	if (argc == 2)
		free_dptr(argv);
	free_stack(&a);
	return (0);
}

static void	free_dptr(char **mal)
{
	size_t	i;

	i = 0;
	while (mal[i] != NULL)
	{
		free(mal[i]);
		i++;
	}
	free(mal);
}
