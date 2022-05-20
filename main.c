/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epresa-c <epresa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:44:16 by epresa-c          #+#    #+#             */
/*   Updated: 2022/05/20 10:34:58 by epresa-c         ###   ########.fr       */
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
	v->max_bits = 0;
	v->i = 0;
	if (argc == 2)
		v->flag_single_arg = TRUE;
	else
		v->flag_single_arg = FALSE;
	return (v);
}

void	push_swap(t_var *v)
{
	int	a_order_status;

	a_order_status = a_is_sorted(v);
	if (a_order_status == TRUE)
		exit(0);
	else if (v->a_len == 2)
		case_2(v);
	else if (v->a_len == 3)
		case_3(v);
	else if (v->a_len == 4)
		case_4(v);
	else if (v->a_len == 5)
		case_5(v);
	else
		sort_big_stack(v);
}

void	fill_stack(t_var *v)
{
	int	j;

	j = 0;
	start_stack(&v->a_tail, &v->a_head, ft_atoi(v->split[j]));
	v->a_len++;
	while (v->split[++j])
	{
		insert_end_stack(&v->a_head, ft_atoi(v->split[j]));
		v->a_len++;
	}
	check_duplicate(v);
}

int	main(int argc, char **argv)
{
	t_var	*v;
	int		i;

	i = 0;
	v = NULL;
	if (argc < 2)
		return (0);
	v = ft_init_var(v, argc);
	check_args(v, argc, argv);
	fill_stack(v);
	simplify_stack(v);
	push_swap(v);
	deallocate_two_stacks_and_free_mallocs(v);
	return (0);
}
