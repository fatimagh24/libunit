#ifndef TESTS_H
# define TESTS_H

# if (FT_POPEN_TESTS != 0)
int ft_popen_launcher(void);
#  define FT_POPEN_LAUNCHER ft_popen_launcher()
# else
#  define FT_POPEN_LAUNCHER 
# endif

# if (FT_ATOI_TESTS != 0)
int ft_atoi_launcher(void);
#  define FT_ATOI_LAUNCHER ft_atoi_launcher()
# else
#  define FT_ATOI_LAUNCHER 
# endif

#endif
