#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_atoi(const char *nptr);

size_t ft_strlen(const char *s);

#endif