/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fghanem <fghanem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:45:22 by fghanem           #+#    #+#             */
/*   Updated: 2025/07/19 14:07:26 by fghanem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"
#include "strlen_test.h"
#include <string.h>

int	basic_test(void)
{
	if (ft_strlen("testtest") == 8)
		return (0);
	else
		return (-1);
}
