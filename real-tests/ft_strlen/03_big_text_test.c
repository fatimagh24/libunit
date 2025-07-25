/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_big_text_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaltayeh <yaltayeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:45:30 by fghanem           #+#    #+#             */
/*   Updated: 2025/07/19 23:04:12 by yaltayeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "libunit.h"
#include "strlen_test.h"

int	big_text_test(void)
{
	if (ft_strlen("The glenoid labrum is a ring of fibrocartilage that surrounds the glenoid cavity,
			the socket of the shoulder joint. It acts like a gasket,
			deepening the socket and contributing to shoulder stability. Injuries to the labrum,
			such as tears, can cause pain, clicking,
			and instability in the shoulder.") == strlen("The glenoid labrum is a ring of fibrocartilage that surrounds the glenoid cavity,
			the socket of the shoulder joint. It acts like a gasket,
			deepening the socket and contributing to shoulder stability. Injuries to the labrum,
			such as tears, can cause pain, clicking,
			and instability in the shoulder."))
		return (0);
	else
		return (-1);
}
