/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Emiliano <Emiliano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:01:13 by epresa-c          #+#    #+#             */
/*   Updated: 2022/05/10 18:04:08 by Emiliano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     print_digit(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] == '-')
				j++;
		// 	if (ft_isdigit(argv[i][j]) == 0)
		// 	{
		// 		write(1, "Error\n", 7);
		// 		exit(-1);
		// 	}
            printf("argv[%d][%d] = %c\n", i, j, argv[i][j]);
        	j++;
		}
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{
    print_digit(argv);
    return (0);
}
