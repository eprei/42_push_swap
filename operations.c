/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Emiliano <Emiliano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:51:06 by epresa-c          #+#    #+#             */
/*   Updated: 2022/05/05 15:29:45 by Emiliano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_stack(t_node **tail)
{
	int		i;
	int		j;
	t_node	*tmp;

	tmp = NULL;
	if ((*tail) && (*tail)->next)
	{
		tmp = *tail;
		i = (*tail)->value;
		j = (*tail)->next->value;
		(*tail)->value = j;
		(*tail)->next->value = i;
	}
}

void    swap_two_stacks(t_node **tail_a, t_node **tail_b)
{
	int		i;
	int		j;
	t_node	*tmp;

	tmp = *tail_a;
    i = (*tail_a)->value;
    j = (*tail_a)->next->value;
    (*tail_a)->value = j;
    (*tail_a)->next->value = i;
	tmp = *tail_b;
    i = (*tail_b)->value;
    j = (*tail_b)->next->value;
    (*tail_b)->value = j;
    (*tail_b)->next->value = i;
}

void	rotate_stack(t_node **tail, t_node **head)
{
	t_node	*tmp;

	tmp = *tail;
	insert_end_stack(head, (*tail)->value);
	(*tail) = (*tail)->next;
	remove_node(tmp);
}

void    rotate_two_stacks(t_node **tail_a, t_node **head_a, t_node **tail_b, t_node **head_b)
{
	t_node	*tmp;

	tmp = *tail_a;
	insert_end_stack(head_a, (*tail_a)->value);
	(*tail_a) = (*tail_a)->next;
	remove_node(tmp);
	tmp = *tail_b;
	insert_end_stack(head_b, (*tail_b)->value);
	(*tail_b) = (*tail_b)->next;
	remove_node(tmp);    
}
void	reverse_rotate_stack(t_node **tail, t_node **head)
{
	t_node	*tmp;

	tmp = *head;
	insert_beginning_stack(tail, (*head)->value);
	(*head) = (*head)->prev;
	remove_node(tmp);
}

void    reverse_rotate_two_stacks(t_node **tail_a, t_node **head_a, t_node **tail_b, t_node **head_b)
{
   	t_node	*tmp;

	tmp = *head_a;
	insert_beginning_stack(tail_a, (*head_a)->value);
	(*head_a) = (*head_a)->prev;
	remove_node(tmp);
	tmp = *head_b;
	insert_beginning_stack(tail_b, (*head_b)->value);
	(*head_b) = (*head_b)->prev;
	remove_node(tmp);
}

void	push_stack(t_node **tail_a, t_node **tail_b)
{
	t_node	*tmp;

	tmp = *tail_a;
	if (*tail_a == NULL)
		return ;
	insert_beginning_stack(tail_b, (*tail_a)->value);
	(*tail_a) = (*tail_a)->next;
	remove_node(tmp);
}
