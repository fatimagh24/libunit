/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_segfault_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fghanem <fghanem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:45:35 by fghanem           #+#    #+#             */
/*   Updated: 2025/07/19 14:07:51 by fghanem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "strlen_test.h"
#include "include/libft.h"

int segfault_test(void)
{
	if (ft_strlen(NULL) == 0)
		return (0);
	else
		return (-1);
}
