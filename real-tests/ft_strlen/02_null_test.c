/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fghanem <fghanem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:45:26 by fghanem           #+#    #+#             */
/*   Updated: 2025/07/19 14:07:39 by fghanem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"
#include "libunit.h"
#include "strlen_test.h"

int	null_test(void)
{
	if (ft_strlen(NULL) == 0)
		return (0);
	else
		return (-1);
}
