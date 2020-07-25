#include "libasm.h"
#include <stdlib.h>
#define STRLEN(x)	printf("ft_strlen: >%li<, strlen: >%li<\n", ft_strlen(x), strlen(x));
#define WRITE(a, b, c)	printf("ft_write: >%li<, write: >%li<\n", ft_write(a, b, c), write(a, b, c));
#define READ(a, b, c)	printf("ft_read: >%li<, read: >%li<\n", ft_read(a, b, c), read(a, b, c));
#define STRCMP(x, y)	printf("ft_strcmp: >%i<, strcmp: >%i<\n", ft_strcmp(x, y), strcmp(x, y));
#define STRCPY(x, y)	printf("ft_strcpy: >%s<, strcpy: >%s<\n", ft_strcpy(x, y), strcpy(x, y));
#define STRDUP(x)	printf("ft_strdup: >%i<, strdup: >%s<\n", ft_strdup(x), strdup(x));
int	main(void)
{
	char	*s;
	char	*s2;
	char	*s3;
	char	*s4;
	char	*n;
	int	fd;
	char	*test[5];
	char	*t;

	t = (char *)malloc(sizeof(char) * 10);
	fd = 1;
	s = "hello";
	n = NULL;
	s2 = "banana";
	s3 = "banane";
	s4 = "ban";
	/*STRLEN*/
	STRLEN(s); //s = "hello"
	//STRLEN(n); //n = NULL, strlen & ft_strlen segfault
	
	/*FT_WRITE*/
	WRITE(fd, s, ft_strlen(s));
	WRITE(fd, s, 2);
	WRITE(fd, n, 2);
	WRITE(-1, s, 2);
	
	/*FT_READ*/
	fd = open("Makefile", O_RDONLY);
	READ(fd, test, ft_strlen(s));
	READ(fd, test, 2); //
	READ(fd, n, 2); //n = NULL
	READ(-1, test, 2); //fd = -1
	READ(fd, test, 0); //nbyte = 0
	
	/*FT_STRCMP*/
	STRCMP(s,s);
	STRCMP(s, s2);
	STRCMP(s2, s3);
	STRCMP(s3, s4);
	STRCMP(s4, s);
	STRCMP(s2, s4);
	//STRCMP(s, n); //strcmp segf
	//STRCMP(n, s); //strcmp segf
	//STRCMP(n, n); //strcmp segf
	//
	/*FT_STRCPY*/
	//STRCPY(n, s);
	//STRCPY(t, n);
	STRCPY(t, s2);
	STRCPY(t, s3);
	STRCPY(t, s4);
	STRCPY(t, s);

	/*FT_STRDUP*/
	STRDUP(s);
	//STRDUP(s2);
	//STRDUP(s3);
	//STRDUP(s4);
	//STRDUP(n);
	return (0);
}
