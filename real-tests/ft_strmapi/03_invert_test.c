/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_invert_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fghanem <fghanem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:35:49 by fghanem           #+#    #+#             */
/*   Updated: 2025/07/19 18:05:12 by fghanem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"
#include "libunit.h"
#include "strmapi_test.h"

int	invert_test(void)
{
	if (ft_strcmp(ft_strmapi("HeLLo WorlD!", invert_case), "hEllO wORLd!") == 0)
		return (0);
	else
		return (-1);
}
