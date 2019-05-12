#ifndef LIBFT_H
# define LIBFT_H
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *str);
int		ft_strequ(char const *s1, char const *s2);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t n);
char	*ft_strcpy(char *dest, const char *srcs);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strstr(char *str, char *to_find);
char	*ft_strnstr(char *str, char *to_find, size_t n);
char	*ft_strdup(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *str1, const void *str2, size_t n);
void	*ft_memccpy(void *str1, const void *str2, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putchar(char c);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putendl(char const *s);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr(int n);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putstr(char const *s);
void	ft_strclr(char *s);
size_t	ft_strlen(const char *s);
size_t	ft_strlcat(char *dest, const char *src, size_t size);

#endif
