/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_unit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fghanem <fghanem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:46:14 by fghanem           #+#    #+#             */
/*   Updated: 2025/07/19 14:34:30 by fghanem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "include/libft.h"

void	load_unit(t_unit *unit, char *func_name)
{
	ft_bzero(unit, sizeof(*unit));
	unit->function_name = func_name;
}
