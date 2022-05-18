/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epresa-c <epresa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:51:06 by epresa-c          #+#    #+#             */
/*   Updated: 2022/05/18 10:55:46 by epresa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_var *v)
{
	t_node	*tmp;

	tmp = v->a_head;
	insert_beginning_stack(&v->a_tail, v->a_head->value);
	v->a_head = v->a_head->prev;
	remove_node(tmp);
	write(1, "rra\n", 4);
}

void	rrb(t_var *v)
{
	t_node	*tmp;

	tmp = v->b_head;
	insert_beginning_stack(&v->b_tail, v->b_head->value);
	v->b_head = v->b_head->prev;
	remove_node(tmp);
	write(1, "rrb\n", 4);
}

void	rrr(t_var *v)
{
	t_node	*tmp;

	tmp = v->a_head;
	insert_beginning_stack(&v->a_tail, v->a_head->value);
	v->a_head = v->a_head->prev;
	remove_node(tmp);
	tmp = v->b_head;
	insert_beginning_stack(&v->b_tail, v->b_head->value);
	v->b_head = v->b_head->prev;
	remove_node(tmp);
	write(1, "rrr\n", 4);
}
