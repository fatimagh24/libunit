/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_segfault_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fghanem <fghanem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:35:14 by fghanem           #+#    #+#             */
/*   Updated: 2025/07/19 15:35:17 by fghanem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"
#include "libunit.h"
#include "strmapi_test.h"

int	segfault_test(void)
{
	if (ft_strmapi(NULL, space_to_underscore) == NULL)
		return (0);
	else
		return (-1);
}
