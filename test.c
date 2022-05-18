/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epresa-c <epresa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:01:13 by epresa-c          #+#    #+#             */
/*   Updated: 2022/05/18 10:47:47 by epresa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	print_digit(char **argv)
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

int	check_dig(char **argv)
{
	int	i;
	int	j;
	int	next_is_digit;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			next_is_digit = ft_isdigit((argv[i][j + 1]));
			if (ft_isalpha(argv[i][j]) == TRUE || argv[i][j] == '.' \
				|| ((argv[i][j]) == '-' && next_is_digit == FALSE) \
				|| ((argv[i][j]) == '+' && next_is_digit == FALSE))
			{
				write(1, "Error digit\n", 7);
				exit(1);
			}
			printf("OK argv[%d][%d] = %c\n", i, j, argv[i][j]);
			j++;
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	check_dig(argv);
	return (0);
}
