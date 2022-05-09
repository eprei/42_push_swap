/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Emiliano <Emiliano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:01:13 by epresa-c          #+#    #+#             */
/*   Updated: 2022/05/09 16:14:05 by Emiliano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**fill_args(int argc, char **argv)
{
    char **split;
    
	if (argc == 2)
		split = ft_split(argv[1], ' ');
	else
		split = &argv[1];
	return (split);
}

int main(int argc, char **argv)
{
    int i = 0;
    char **split = fill_args(argc, argv);
    while (split[i])
    {
        printf("split[%d] = %s\n", i, split[i]);
        i++;
    }
    return (0);
}

// int	main(int argc, char **argv)
// {
//     int input[5] = {8, 9, 2, 0, 1};
//     int copy[5] = {8, 9, 2, 0, 1};
//     int i = 0;
//     int j = 0;
//     int inputsize = 5;
//     int copysize = 5;
//     int x = 0;
    
//     while (x < inputsize)
//     {
//         printf("input[%d] = %d\n", x, input[x]);
//         x++;
//     }
//     while (i < inputsize)
//     {
//         while (j < copysize)
//         {
//             if (input[i] == copy[j])
//                 input[i] = j;
//             j++;        
//         }
//         i++;
//     }
//     x = 0;
//     while (x < inputsize)
//     {
//         printf("\ninput[%d] = %d\n", x, input[x]);
//         x++;
//     }
// 	return (0);
// }


// for(int i = 0 ; i < input.size() ; ++i) 
//     for(int j = 0 ; j < copy.size() ; ++j)
//         if (input[i] == copy[j])
//             input[i] = j;