/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epresa-c <epresa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:44:16 by epresa-c          #+#    #+#             */
/*   Updated: 2022/05/18 11:04:13 by epresa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_duplicate(t_var *v)
{
	t_node	*curr;
	t_node	*search;

	curr = v->a_tail;
	while (curr != NULL)
	{
		search = curr->next;
		while (search != NULL)
		{
			if (curr->value == search->value)
				ft_exit_err("Error\n", -1);
			search = search->next;
		}
		curr = curr->next;
	}
}

long long int	fn_atoll(char *s)
{
	int				i;
	int				signe;
	long long int	ret;

	i = 0;
	ret = 0;
	signe = 1;
	while (s[i] == '\t' || s[i] == '\n' || s[i] == '\r' || s[i] == '\v' || \
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

int	check_int_overflow(char *argv)
{
	long long int	tmp;

	tmp = fn_atoll(argv);
	if (tmp >= -2147483648 && tmp <= 2147483647 && ft_strlen(argv) < 12)
		return (FALSE);
	return (TRUE);
}

void	fn_check_overflow(int argc, char **argv)
{
	int	is_overflow;
	int	i;

	i = 0;
	while (i < argc)
	{
		is_overflow = check_int_overflow(argv[i]);
		if (is_overflow == TRUE)
		{
			write(1, "Error\n", 7);
			exit(-1);
		}
		i++;
	}
}

int	check_digit(char **argv)
{
	int	i;
	int	j;
	int	next_is_digit;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			next_is_digit = ft_isdigit((argv[i][j + 1]));
			if (ft_isalpha(argv[i][j]) == TRUE || argv[i][j] == '.' \
				|| ((argv[i][j]) == '-' && next_is_digit == FALSE) \
				|| ((argv[i][j]) == '+' && next_is_digit == FALSE))
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
