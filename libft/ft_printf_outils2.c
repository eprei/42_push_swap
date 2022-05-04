/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_outils2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Emiliano <Emiliano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 15:14:38 by epresa-c          #+#    #+#             */
/*   Updated: 2022/04/04 16:48:51 by Emiliano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_itoa(char *str)
{
	int		count;
	char	*conversion;

	conversion = str;
	count = 0;
	while (*str)
	{
		write(1, str, 1);
		str++;
		count++;
	}
	free(conversion);
	return (count);
}

int	ft_u_itoa(unsigned int n)
{
	char			*ptr;
	unsigned int	len_n;
	unsigned int	m;

	m = n;
	len_n = ft_u_intlen(m);
	ptr = (char *)malloc(sizeof(char) * (len_n + 1));
	if (ptr == NULL)
		return (0);
	if (len_n == 0 || m == 0)
		ptr[0] = '0';
	ptr[len_n] = '\0';
	while (m > 0)
	{
		ptr[len_n - 1] = (m % 10) + 48;
		m = m / 10;
		len_n--;
	}
	ft_putstr_printf(ptr);
	free(ptr);
	return (ft_u_intlen(n));
}

int	ft_u_intlen(unsigned int c)
{
	int				i;
	unsigned int	x;

	x = c;
	i = 0;
	while (x > 9)
	{
		x = x / 10;
		i++;
	}
	i++;
	return (i);
}
