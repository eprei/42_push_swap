/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_management.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epresa-c <epresa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:44:35 by epresa-c          #+#    #+#             */
/*   Updated: 2022/05/18 11:04:55 by epresa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	start_stack(t_node **tail, t_node **head, int value)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (new_node == NULL)
		ft_exit_err("Error: malloc error during stack initialisation", 3);
	new_node->value = value;
	new_node->next = NULL;
	new_node->prev = NULL;
	*head = new_node;
	*tail = new_node;
}

void	insert_beginning_stack(t_node **tail, int value)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (new_node == NULL)
		ft_exit_err("Malloc error inserting new module\
		 at the beginning of the stack", 4);
	new_node->value = value;
	new_node->prev = NULL;
	new_node->next = *tail;
	(*tail)->prev = new_node;
	*tail = new_node;
}

void	insert_end_stack(t_node **head, int value)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (new_node == NULL)
		ft_exit_err("Malloc error inserting \
		new module at the end of the stack", 5);
	new_node->value = value;
	new_node->next = NULL;
	new_node->prev = *head;
	(*head)->next = new_node;
	*head = new_node;
}
