/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaltayeh <yaltayeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 23:00:33 by yaltayeh          #+#    #+#             */
/*   Updated: 2025/07/19 23:00:34 by yaltayeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int	signal_segv_test(void);
int	signal_bus_test(void);
int	signal_cont_test(void);
int	invalid_signal_test(void);

int	kill_launcher(void)
{
	t_unit	unit;

	load_unit(&unit, "KILL");
	load_test(&unit, "signal_segv_test", signal_segv_test);
	load_test(&unit, "signal_bus_test", signal_bus_test);
	load_test(&unit, "signal_cont_test", signal_cont_test);
	load_test(&unit, "invalid_signal_test", invalid_signal_test);
	return (launch_tests(&unit));
}
