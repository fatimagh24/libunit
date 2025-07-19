/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_invalid_signal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaltayeh <yaltayeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 23:00:42 by yaltayeh          #+#    #+#             */
/*   Updated: 2025/07/19 23:00:43 by yaltayeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <unistd.h>

int	invalid_signal_test(void)
{
	if (kill(getpid(), -1) == -1)
		return (0);
	else
		return (-1);
}
