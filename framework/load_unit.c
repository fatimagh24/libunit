/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_unit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaltayeh <yaltayeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:46:14 by fghanem           #+#    #+#             */
/*   Updated: 2025/07/19 23:04:12 by yaltayeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "libunit.h"

void	load_unit(t_unit *unit, char *func_name)
{
	ft_bzero(unit, sizeof(*unit));
	unit->function_name = func_name;
}
