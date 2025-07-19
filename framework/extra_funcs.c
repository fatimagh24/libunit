/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_funcs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaltayeh <yaltayeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:34:47 by fghanem           #+#    #+#             */
/*   Updated: 2025/07/19 23:33:08 by yaltayeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "libunit.h"

char	shift_index(unsigned int i, char c)
{
	return (c + i);
}

char	invert_case(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

char	index_mod_10(unsigned int i, char c)
{
	(void)c;
	return ('0' + (i % 10));
}

char	space_to_underscore(unsigned int i, char c)
{
	(void)i;
	if (c == ' ')
	{
		sleep(5);
		return ('_');
	}
	return (c);
}

char	to_upper_mapper(unsigned int i, char c)
{
	(void)i;
	sleep(1);
	return ((char)ft_toupper((int)c));
}
