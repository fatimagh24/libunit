/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_toupper_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaltayeh <yaltayeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:16:37 by fghanem           #+#    #+#             */
/*   Updated: 2025/07/19 23:32:02 by yaltayeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "libunit.h"

int	toupper_test(void)
{
	if (ft_strcmp(ft_strmapi("hello world", to_upper_mapper), "HELLO WORLD") == 0)
		return (0);
	else
		return (-1);
}
