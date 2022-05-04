/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Emiliano <Emiliano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:16:08 by epresa-c          #+#    #+#             */
/*   Updated: 2022/04/04 16:55:43 by Emiliano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>
# include <stdarg.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

/**************************  FT_PRINTF  ***************************************/
int		ft_printf(const char *str, ...);
int		ft_putstr_printf(char *s);
int		ft_strlen_printf(const char *s);
int		ft_switch(char conversion, va_list ap);
int		ft_putchar(char c);
int		ft_u_itoa(unsigned int n);
int		ft_u_intlen(unsigned int c);
int		ft_intlen(int c);
int		ft_putstr_itoa(char *str);
int		ft_putnbr_hex_min(unsigned int n);
int		ft_putnbr_hex_maj(unsigned int n);
int		ft_putnbr_pointer(unsigned long n);
int		ft_str_putnbr_pointer(unsigned long n);

/************************  FT_GET_NEXT_LINE  **********************************/
char	*get_next_line(int fd);
size_t	line_len(const char *line);
void	ft_refill_storage(char **storage, int fd, int ret, char *buf);
void	ft_copy_next_line_and_offset_storage(char **storage, char **next_line);

/************************  FT_LIBFT_ORIGINAL  *********************************/
int		ft_atoi(const char *str);
size_t	ft_strlen(const char *s);
char	*ft_strrchr(const char *s, int c);
char	*ft_strchr(const char *s, int c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
void	ft_bzero(void *s, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl_fd(char *s, int fd);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	**ft_split(char const *s, char c);
char	*ft_strtrim(char const *s1, char const *set);

#endif