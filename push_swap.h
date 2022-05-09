/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Emiliano <Emiliano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:44:27 by epresa-c          #+#    #+#             */
/*   Updated: 2022/05/09 17:34:57 by Emiliano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "libft/libft.h"
# include "libft/ft_printf.h"
# include "libft/get_next_line.h"

# define FALSE 0
# define TRUE 1

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
	int     a_len;
	int     b_len;
    char    **split;
    int     flag_single_arg;
}	t_var;

/********************* CHECK ARGS AND INIT *************************/

void    check_args(t_var *v, int argc, char **argv);
char	**fill_args(t_var *v, int argc, char **argv);
void	start_stack(t_node **tail, t_node **head, int value);
void	start_stack_simplified(t_var *v); //trabajar!!!

/************ MANAGEMENT OF NODES AND CHAINED LISTS ***************/

void	insert_beginning_stack(t_node **tail, int value);
void	insert_end_stack(t_node **head, int value);
void	remove_node(t_node *node);
void	deallocate_stack(t_node **tail, t_node **head);

/************************** OPERATIONS ****************************/

void	sa(t_var *v);
void	sb(t_var *v);
void	ss(t_var *v);
void	ra(t_var *v);
void	rb(t_var *v);
void	rr(t_var *v);
void    rra(t_var *v);
void    rrb(t_var *v);
void    rrr(t_var *v);
void	pa(t_var *v);
void	pb(t_var *v);

/**************************** AUX *********************************/

void	fn_push_swap(t_var *v);
void	ft_exit(char *str, int err);
int     a_is_sorted(t_var *v);
void    radx(t_var *v);
void    deallocate_two_stacks_and_free_mallocs(t_var *v);
void    print_stack_a(t_var *v);
void    print_stack_b(t_var *v);

#endif
