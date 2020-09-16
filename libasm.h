#ifndef LIBASM_H
# define LIBASM_H
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <fcntl.h>
# include <stdlib.h>

size_t		ft_write(int fildes, const void *buf, size_t nbyte);
size_t		ft_strlen(const char *s);
size_t		ft_read(int fildes, void *buf, size_t nbyte);
int		ft_strcmp(const char *s1, const char *s2);
char		*ft_strcpy(char *dst, const char *src);
char		*ft_strdup(const char *s1);
int		tests_ft_strlen(void);
#endif
