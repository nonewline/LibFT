#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_atoi(const char *str);
int	ft_strequ(char const *s1, char const *s2);
int	ft_strcmp(const char *s1, const char *s2);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_memcmp(const void *str1, const void *str2, size_t n);
char	*ft_itoa(int n);
char	*ft_strnew(size_t size);
char	*ft_strdup(const char *s);
char	*ft_strtrim(char const *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(char *str, char *to_find);
char	**ft_strsplit(char const *s, char c);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strcpy(char *dest, const char *srcs);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strnstr(char *str, char *to_find, size_t n);
char	*ft_strncat(char *dest, const char *src, size_t n);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strsub(char const *s, unsigned int start, size_t len);
void	ft_putnbr(int n);
void	ft_putchar(char c);
void	ft_strclr(char *s);
void	ft_memdel(void **ap);
void	ft_strdel(char **as);
void	*ft_memalloc(size_t n);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putnbr_fd(int n, int fd);
void	ft_bzero(void *s, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_lstadd(t_list **alst, t_list *new);
void	ft_striter(char *s, void (*f)(char *));
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memcpy(void *str1, const void *str2, size_t n);
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void	*ft_memccpy(void *str1, const void *str2, int c, size_t n);
size_t	ft_strlen(const char *s);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
t_list	*ft_lstnew(void const *content, size_t content_size);

#endif
