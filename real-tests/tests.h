/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fghanem <fghanem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:45:49 by fghanem           #+#    #+#             */
/*   Updated: 2025/07/19 17:56:16 by fghanem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

# if (FT_ATOI_TESTS != 0)
int ft_atoi_launcher(void);
#  define FT_ATOI_LAUNCHER ft_atoi_launcher()
# else
#  define FT_ATOI_LAUNCHER 
# endif

# if (FT_STRMAPI_TESTS != 0)
int ft_strmapi_launcher(void);
#  define FT_STRMAPI_LAUNCHER ft_strmapi_launcher()
# else
#  define FT_STRMAPI_LAUNCHER
# endif

# if (FT_ITOA_TESTS != 0)
int	ft_itoa_launcher(void);
#  define FT_ITOA_LAUNCHER ft_itoa_launcher()
# else
#  define FT_ITOA_LAUNCHER
# endif


#endif
