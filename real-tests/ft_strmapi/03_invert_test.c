/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_invert_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaltayeh <yaltayeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:35:49 by fghanem           #+#    #+#             */
/*   Updated: 2025/07/19 23:30:21 by yaltayeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "libunit.h"

int	invert_test(void)
{
	if (ft_strcmp(ft_strmapi("HeLLo WorlD!", invert_case), "hEllO wORLd!") == 0)
		return (0);
	else
		return (-1);
}
