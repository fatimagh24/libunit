/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_positive_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaltayeh <yaltayeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:44:49 by fghanem           #+#    #+#             */
/*   Updated: 2025/07/19 23:06:49 by yaltayeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "libunit.h"

int	basic_positive_test(void)
{
	if (ft_atoi("42") == 42)
		return (0);
	else
		return (-1);
}
