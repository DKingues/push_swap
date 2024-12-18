/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicosta- <dicosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:41:56 by dicosta-          #+#    #+#             */
/*   Updated: 2024/12/18 18:32:26 by dicosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    int i;

    i = 1;
    if (argc <= 1)
        return (0);
    else if (argc == 2)
        ft_split(argv[0], ' ');
    return (0);
}
/*ALGORITHM
STACK A         STACK B
2
5000
499
4999
30
21

Search in stack A for the Biggest Number and push to B

STACK A         STACK B
2               5000
499
4999
30
21

Now use the max number as a denominator to see
which number is the highest after him.
So we do Max number (5000) minus every number, the
result thats closer to 0 is the next highest number.
    5000 - 2 = 4998
    5000 - 499 = 4501
->  5000 - 4999 = 1 
    5000 - 30 = 4970
    5000 - 21 = 4979

So now we push the second highest number 4999

STACK A         STACK B
2               5000
499             4999
30
21

Then we push 499, 30, 21, 2
*/