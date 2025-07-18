/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaltayeh <yaltayeh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 15:41:46 by yaltayeh          #+#    #+#             */
/*   Updated: 2025/07/18 15:41:53 by yaltayeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include <stdlib.h>
#include <stdio.h>
#include <libft.h>

int	ft_popen(char **argv, char mode);
int	invalid_mode_test(void);
int	invalid_command_test(void);
int	invalid_args_test(void);

int ft_popen_launcher(void)
{
	t_unit	unit;
	
	load_unit(&unit, "POPEN");
	load_test(&unit, "Invalid Mode", &invalid_mode_test);
	return (launch_tests(&unit));
}
