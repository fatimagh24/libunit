/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_zero_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fghanem <fghanem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:44:56 by fghanem           #+#    #+#             */
/*   Updated: 2025/07/19 13:52:27 by fghanem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "atoi_test.h"
#include "include/libft.h"

int	zero_test(void)
{
	if (ft_atoi("0") == 0)
		return (0);
	else
		return (-1);
}
