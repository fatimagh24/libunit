/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic_negative_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fghanem <fghanem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:44:52 by fghanem           #+#    #+#             */
/*   Updated: 2025/07/19 13:51:15 by fghanem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "atoi_test.h"
#include "include/libft.h"

int	basic_negative_test(void)
{
	if (ft_atoi("-42") == -42)
		return (0);
	else
		return (-1);
}
