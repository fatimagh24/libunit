#ifndef TESTS_H
# define TESTS_H

# if (FT_ATOI_TESTS != 0)
int ft_atoi_launcher(void);
#  define FT_ATOI_LAUNCHER ft_atoi_launcher()
# else
#  define FT_ATOI_LAUNCHER 
# endif

#endif
