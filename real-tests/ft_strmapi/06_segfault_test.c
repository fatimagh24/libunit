/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_segfault_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaltayeh <yaltayeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:35:14 by fghanem           #+#    #+#             */
/*   Updated: 2025/07/19 23:04:12 by yaltayeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "libunit.h"
#include "strmapi_test.h"

int	segfault_test(void)
{
	if (ft_strmapi(NULL, space_to_underscore) == NULL)
		return (0);
	else
		return (-1);
}
