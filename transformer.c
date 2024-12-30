/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transformer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 19:24:17 by dicosta-          #+#    #+#             */
/*   Updated: 2024/12/30 17:57:56 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stringprocess(char **argv)
{
	t_stack	*a;
	t_data	d;
	char	**tmp;
	int		i;

	a = NULL;
	i = 0;
	tmp = ft_split(argv[1], ' ');
	d.index = i;
	d.nbr = ft_atoi(tmp[i]);
 	a = ft_doublelist_new(d);
	i++;
	while (tmp[i])
	{
	 	d.index = i;
 		d.nbr = ft_atoi(tmp[i]);
		ft_dbllstadd_back(&a, d);
	}
	return (a);
}

t_stack *ft_process(int	argc, char **argv)
{
	t_stack	*a;
    int i;
	
    i = 1;
    if (argc < 2)
        return (0); 
    else if (argc == 2)
		a = ft_stringprocess(argv);
	else
	{
		while (argc)
		{
			t_data d;
			d.nbr = ft_atoi(argv[i]);
			d.index = i - 1;
			a = ft_doublelist_new(d);
		}
	}
    return (a);
}
