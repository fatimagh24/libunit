/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fghanem <fghanem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 16:57:19 by fghanem           #+#    #+#             */
/*   Updated: 2025/07/19 17:54:35 by fghanem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "itoa_test.h"

int	zero_with_sign_test(void);
int	positive_test(void);
int	negative_no_sign_test(void);
int	maxint_test(void);
int	minint_test(void);
int	large_negative_test(void);
int	boundry_test(void);
int	negative_sign_test(void);
int	trailing_zeros_test(void);
int	negative_zero_test(void);
int	overflow_test(void);
int	overflow_negative_test(void);
int	zero_without_sing_test(void);
int	minint_no_sign_test(void);
int	large_pos_test(void);

int	ft_itoa_launcher(void)
{
	t_unit	unit;

	load_unit(&unit, "FT_ITOA");
	load_test(&unit, "Zero with sign test", &zero_with_sign_test);
	load_test(&unit, "Positive test", &positive_test);
	load_test(&unit, "Negative no sign test", &negative_no_sign_test);
	load_test(&unit, "Max int test", &maxint_test);
	load_test(&unit, "Min int test", &minint_test);
	load_test(&unit, "Large negative test", &large_negative_test);
	load_test(&unit, "Boundry test", &boundry_test);
	load_test(&unit, "Negative sign test", &negative_sign_test);
	load_test(&unit, "Trailing zeros test", &trailing_zeros_test);
	load_test(&unit, "Negative zero test", &negative_zero_test);
	load_test(&unit, "Overflow test", &overflow_test);
	load_test(&unit, "Zero without sign test", &zero_without_sing_test);
	load_test(&unit, "Min int no sign test", &minint_no_sign_test);
	load_test(&unit, "Large pos test", &large_pos_test);
	load_test(&unit, "Overflow negative test", &overflow_negative_test);
	return (launch_tests(&unit));
}
