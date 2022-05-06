/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Emiliano <Emiliano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:44:16 by epresa-c          #+#    #+#             */
/*   Updated: 2022/05/05 15:32:03 by Emiliano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit(char *str, int err)
{
	ft_printf("%s\n", str);
	exit(err);
}

t_var	*ft_init_var(t_var *v)
{
	v = malloc(sizeof(t_var));
	if (v == NULL)
		ft_exit("Error malloc: variable initialisation error", 2);
	v->a_head = NULL;
	v->a_tail = NULL;
	v->b_head = NULL;
	v->b_tail = NULL;
	v->a_len = 0;
	v->b_len = 0;
	return (v);
}

void	fn_push_swap(t_var *v, int argc, char **argv)
{
	int	i;

	i = 1;
	init_stack(&v->a_tail, &v->a_head, ft_atoi(argv[i]));
	init_stack(&v->b_tail, &v->b_head, ft_atoi(argv[i]));
	while (++i < argc)
    {
		insert_end_stack(&v->a_head, ft_atoi(argv[i]));
		insert_end_stack(&v->b_head, ft_atoi(argv[i]));
    }
}

int	main(int argc, char **argv)
{
	t_var	*v;
	t_node	*curr_a;
    t_node  *curr_b;

	v = NULL;
	if (argc < 2)
		return (0);
	v = ft_init_var(v);
	fn_push_swap(v, argc, argv);
	curr_a = v->a_tail;
    curr_b = v->b_tail;
	ft_printf("\n\tbefore rotate\n");
	while (curr_a != NULL)
	{
		printf("stack a = %d\tstack b = %d\n", curr_a->value, curr_b->value);
		curr_a = curr_a->next;
		curr_b = curr_b->next;
	}
	// reverse_rotate_stack(&v->a_tail, &v->a_head);
	// reverse_rotate_stack(&v->a_tail, &v->a_head);
	// ft_printf("\n\tafter reverse rotate x 2\n");
	// rotate_stack(&v->a_tail, &v->a_head);
	// rotate_stack(&v->a_tail, &v->a_head);
    // swap_two_stacks(&v->a_tail, &v->b_tail);
    // push_stack(&v->a_tail, &v->b_tail);
    reverse_rotate_two_stacks(&v->a_tail, &v->a_head, &v->b_tail, &v->b_head);
    ft_printf("\n\tA after revserse rotate two stacks\n");
    curr_a = v->a_tail;
	curr_b = v->b_tail;
	while (curr_a != NULL)
	{
        ft_printf("stack a = %d\n", curr_a->value);
        curr_a = curr_a->next;
    }
    ft_printf("\n\tB after rotate two stacks\n");
    while (curr_b != NULL)
	{
        ft_printf("stack b = %d\n", curr_b->value);
        curr_b = curr_b->next;
    }    deallocate_stack(&v->a_tail, &v->a_head);
    deallocate_stack(&v->b_tail, &v->b_head);
	free(v);
	return (0);
}

 
/*
	init_stack(&v->b_tail, &v->b_head, 2);
	insert_end_stack(&v->b_head, 4);
	insert_end_stack(&v->b_head, 6);
	t_node *curr_b = v->b_tail;
	swap_stack(&v->a_tail);
	swap_stack(&v->b_tail);
	printf("\nafter swap\n");
    printf("stack a = %d\tstack b = %d\n", curr_a->value, curr_b->value);
    curr_b = curr_b->next;
    deallocate_stack(&v->b_tail, &v->b_head);
*/