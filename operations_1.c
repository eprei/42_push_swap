/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Emiliano <Emiliano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:51:06 by epresa-c          #+#    #+#             */
/*   Updated: 2022/05/09 16:56:46 by Emiliano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_var *v)
{
	int		i;
	int		j;
	t_node	*tmp;

	tmp = NULL;
	if ((v->a_tail) && v->a_tail->next)
	{
		tmp = v->a_tail;
		i = v->a_tail->value;
		j = v->a_tail->next->value;
		v->a_tail->value = j;
		v->a_tail->next->value = i;
	}
}

void	sb(t_var *v)
{
	int		i;
	int		j;
	t_node	*tmp;

	tmp = NULL;
	if ((v->b_tail) && v->b_tail->next)
	{
		tmp = v->b_tail;
		i = v->b_tail->value;
		j = v->b_tail->next->value;
		v->b_tail->value = j;
		v->b_tail->next->value = i;
	}
}

void	ss(t_var *v)
{
	int		i;
	int		j;
	t_node	*tmp;

	tmp = NULL;
	if ((v->a_tail) && v->a_tail->next)
	{
		tmp = v->a_tail;
		i = v->a_tail->value;
		j = v->a_tail->next->value;
		v->a_tail->value = j;
		v->a_tail->next->value = i;
	}
	tmp = NULL;
	if ((v->b_tail) && v->b_tail->next)
	{
		tmp = v->b_tail;
		i = v->b_tail->value;
		j = v->b_tail->next->value;
		v->b_tail->value = j;
		v->b_tail->next->value = i;
	}
}

void	pb(t_var *v)
{
	t_node	*tmp;

	tmp = v->a_tail;
	if (v->a_tail == NULL)
		return ;
    if (v->b_tail == NULL)
        start_stack(&v->b_tail, &v->b_head, v->a_tail->value);
    else
        insert_beginning_stack(&v->b_tail, v->a_tail->value);
    v->a_tail = v->a_tail->next;
    if (v->a_tail == NULL)
        v->a_head = NULL;
    remove_node(tmp);
}

void	pa(t_var *v)
{
	t_node	*tmp;

	tmp = v->b_tail;
	if (v->b_tail == NULL)
		return ;
    if (v->a_tail == NULL)
        start_stack(&v->a_tail, &v->a_head, v->b_tail->value);
    else
        insert_beginning_stack(&v->a_tail, v->b_tail->value);
    v->b_tail = v->b_tail->next;
    if (v->b_tail == NULL)
        v->b_head = NULL;
    remove_node(tmp);
}
