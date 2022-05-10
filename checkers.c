/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Emiliano <Emiliano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:44:16 by epresa-c          #+#    #+#             */
/*   Updated: 2022/05/10 19:16:28 by Emiliano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     a_is_sorted(t_var *v)
{
	t_node	*curr;
		
	curr = v->a_tail;
	if (v->a_tail == NULL)
		return (TRUE);
	while (curr->next != NULL)
	{	
		if (curr->value > curr->next->value)
			return (FALSE);
		curr = curr->next;
	}
	if (curr == v->a_head)
		return (TRUE);
	else
		return (FALSE);
}

int     b_is_sorted(t_var *v)
{
	t_node	*curr;
		
	curr = v->b_tail;
	if (v->b_tail == NULL)
		return (TRUE);
	while (curr->next != NULL)
	{	
		if (curr->value > curr->next->value)
			return (FALSE);
		curr = curr->next;
	}
	if (curr == v->b_head)
		return (TRUE);
	else
		return (FALSE);
}

char	**fill_args(t_var *v, int argc, char **argv)
{
	if (argc == 2)
		v->split = ft_split(argv[1], ' ');
	else
		v->split = &argv[1];
	return (v->split);
}

void    check_args(t_var *v, int argc, char **argv)
{
    check_digit(argv);
    if (argc > 2)
        fn_check_overflow(argc, argv);
    check_duplicate(argv);
}

void    check_duplicate(char **argv)
{

    
}

long long int	fn_atoll(char *s)
{
	int				i;
	int		        signe;
	long long int   ret;

	i = 0;
	ret = 0;
	signe = 1;
	while (s[i] == '\t' || s[i] == '\n' || s[i] == '\r' || s[i] == '\v' ||\
		s[i] == '\f' || s[i] == ' ')
		i++;
	if (s[i] == '-')
		signe = -1;
	if (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i] >= '0' && s[i] <= '9')
	{
		ret = 10 * ret + s[i] - '0';
		i++;
	}
	ret = ret * signe;
	return (ret);
}

int     check_int_overflow(char *argv)
{
	long long int   tmp;

	tmp = fn_atoll(argv);
    // printf("check_int_overflow: tmp = %lld\n", tmp);
	if (tmp >= -2147483648 && tmp <= 2147483647 && ft_strlen(argv) < 12)
		return (FALSE);
	return (TRUE);
}

void    fn_check_overflow(int argc, char **argv)
{
    int is_overflow;
    int i;

    i = 1;
    while (i < argc)
    {   
        // printf("fn_check_overflow: argv[%d] = %s\n", i, argv[i]);
        is_overflow = check_int_overflow(argv[i]);
        if (is_overflow == TRUE)
        {
            write(1, "Error\n", 7);
            exit(-1);
        }
        i++;
    }
}

int     check_digit(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{   
        while (argv[i][j])
		{
			if (argv[i][j] == '-')
				j++;
			if (ft_isdigit(argv[i][j]) == 0)
			{
				write(1, "Error\n", 7);
				exit(1);
			}
			j++;
		}
		i++;
	}
	return (0);
}
