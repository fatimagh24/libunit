/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaltayeh <yaltayeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:13:29 by fghanem           #+#    #+#             */
/*   Updated: 2025/07/19 23:04:12 by yaltayeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "libunit.h"
#include "strmapi_test.h"

int	toupper_test(void);
int	shift_index_test(void);
int	invert_test(void);
int	empty_str_test(void);
int	replace_ascii_test(void);
int	segfault_test(void);
int	replace_chars_test(void);

int	ft_strmapi_launcher(void)
{
	t_unit	unit;

	load_unit(&unit, "FT_STRMAPI");
	load_test(&unit, "Toupper", &toupper_test);
	load_test(&unit, "shift_index", &shift_index_test);
	load_test(&unit, "invert", &invert_test);
	load_test(&unit, "empty_str", &empty_str_test);
	load_test(&unit, "replace_ascii", &replace_ascii_test);
	load_test(&unit, "segfault", &segfault_test);
	load_test(&unit, "replace_chars", &replace_chars_test);
	return (launch_tests(&unit));
}
