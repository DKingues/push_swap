/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transformer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 19:24:17 by dicosta-          #+#    #+#             */
/*   Updated: 2024/12/26 17:52:07 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stringprocess(char **argv)
{
	t_stack	*a;
	char	**tmp;
	int		i;
	int		j;

	a = NULL;
	i = 0;
	tmp = ft_split(argv[1], ' ');
	while(tmp[i])
	{
		t_data d;
		d.index = i;
		d.nbr = ft_atoi(tmp[i]);
		ft_doublelink_new(d);
	}
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
    return (0);
}