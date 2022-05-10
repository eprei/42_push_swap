/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Emiliano <Emiliano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:44:16 by epresa-c          #+#    #+#             */
/*   Updated: 2022/05/10 16:02:09 by Emiliano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_var	*ft_init_var(t_var *v, int argc)
{
	v = malloc(sizeof(t_var));
	if (v == NULL)
		ft_exit_err("Error malloc: variable initialisation error", 2);
	v->a_head = NULL;
	v->a_tail = NULL;
	v->b_head = NULL;
	v->b_tail = NULL;
	v->a_len = 0;
	v->b_len = 0;
    v->split = NULL;
    if (argc == 2)
        v->flag_single_arg = TRUE;
    else
        v->flag_single_arg = FALSE;
	return (v);
}

void	push_swap(t_var *v)
{
    if (v->a_len == 2)
        case_2(v);
    // if (v->a_len <= 3)

    // if (v->a_len <= 5)
    
    else
        radx(v);
}

void	fill_stack(t_var *v, int argc, char **argv)
{
	int i;
    int j;
	
    i = 1;
    j = 0;
    if (v->flag_single_arg == TRUE)
    {
        start_stack(&v->a_tail, &v->a_head, ft_atoi(v->split[j]));
        v->a_len++;
        while (v->split[++j])
        {
            insert_end_stack(&v->a_head, ft_atoi(v->split[j]));
            v->a_len++;
        }
    }
    else
    {
        v->a_len = argc - 1;
        start_stack(&v->a_tail, &v->a_head, ft_atoi(argv[i]));
        while (++i < argc)
            insert_end_stack(&v->a_head, ft_atoi(argv[i]));
    }
}

int	main(int argc, char **argv)
{
	t_var	*v;
    int i = 0;

	v = NULL;
	if (argc < 2)
		return (0);
	v = ft_init_var(v, argc);
    v->split = fill_args(v, argc, argv);
    // check_args(v, argc, argv);
	fill_stack(v, argc, argv);
    simplify_stack(v);
    push_swap(v);
	deallocate_two_stacks_and_free_mallocs(v);
    return (0);
}
