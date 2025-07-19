/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaltayeh <yaltayeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 23:00:21 by yaltayeh          #+#    #+#             */
/*   Updated: 2025/07/19 23:00:22 by yaltayeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int	basic_test(void);

int	ft_strlen_fake_launcher(void)
{
	t_unit	unit;

	load_unit(&unit, "FT_FAKE_STRLEN");
	load_test(&unit, "basic_test", basic_test);
	return (launch_tests(&unit));
}
