/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpace <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 19:22:52 by bpace             #+#    #+#             */
/*   Updated: 2019/09/06 14:30:24 by bpace            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <limits.h>
# include "../libft/libft.h"

typedef struct	s_printf
{
	va_list		vl;
	int			ans;
	int			i;
	char		*formatcp;
	int			flag[5];
	size_t		width;
	int			precision;
	int			period;
	int			length;
	int			basen;
	char		fill;
	char		sign;
	char		pound[2];
	int			isp;
}				t_printf;

void			convert_diouxx(t_printf *data, char c);
char			*long_itoa(long long n);
void			padding_diouxx(t_printf *data, char *temp);
void			padding_c(t_printf *data);
void			padding_s(t_printf *data, char *temp);
void			checkprecision(t_printf *data);
void			checklength(t_printf *data);
void			checkwidth(t_printf *data);
char			*base_itoa(t_printf *data, unsigned long long n, int base);
void			convert(t_printf *data);
int				ft_printf(const char *restrict format, ...);
char			*ftoa(t_printf *data, long double n);
void			padding_f(t_printf *data, char *temp);

#endif
