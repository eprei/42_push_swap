/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Emiliano <Emiliano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:44:27 by epresa-c          #+#    #+#             */
/*   Updated: 2022/05/05 15:29:00 by Emiliano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "libft/libft.h"
# include "libft/ft_printf.h"
# include "libft/get_next_line.h"

typedef struct s_node
{
	int				value;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_var
{
	t_node	*a_head;
	t_node	*a_tail;
	t_node	*b_head;
	t_node	*b_tail;
	size_t	a_len;
	size_t	b_len;
}	t_var;

void	init_stack(t_node **tail, t_node **head, int value);
void	insert_beginning_stack(t_node **tail, int value);
void	deallocate_stack(t_node **tail, t_node **head);
void	insert_end_stack(t_node **head, int value);
void	swap_stack(t_node **tail);
void	ft_exit(char *str, int err);
void	remove_node(t_node *node);
void	rotate_stack(t_node **tail, t_node **head);
void	reverse_rotate_stack(t_node **tail, t_node **head);
void    swap_two_stacks(t_node **tail_a, t_node **tail_b);
void	push_stack(t_node **tail_a, t_node **tail_b);
void    rotate_two_stacks(t_node **tail_a, t_node **head_a, t_node **tail_b, t_node **head_b);
void    reverse_rotate_two_stacks(t_node **tail_a, t_node **head_a, t_node **tail_b, t_node **head_b);

#endif
