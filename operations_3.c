/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Emiliano <Emiliano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:51:06 by epresa-c          #+#    #+#             */
/*   Updated: 2022/05/09 11:02:42 by Emiliano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rra(t_var *v)
{
   	t_node	*tmp;

	tmp = v->a_head;
	insert_beginning_stack(&v->a_tail, v->a_head->value);
	v->a_head = v->a_head->prev;
	remove_node(tmp);
}

void    rrb(t_var *v)
{
   	t_node	*tmp;

	tmp = v->b_head;
	insert_beginning_stack(&v->b_tail, v->b_head->value);
	v->b_head = v->b_head->prev;
	remove_node(tmp);
}

void    rrr(t_var *v)
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
}
