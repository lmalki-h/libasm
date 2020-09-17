/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <lmalki-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 22:02:01 by lmalki-h          #+#    #+#             */
/*   Updated: 2020/09/17 22:02:43 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int		test_ft_read(int fd, int fdcopy, int len_s)
{
	int		test_failed;
	char	*my_read;
	char	*real_read;
	int		my_ret;
	int		real_ret;

	test_failed = 0;
	my_read = (char *)calloc(sizeof(char), len_s + 1);
	real_read = (char *)calloc(sizeof(char), len_s + 1);
	my_ret = read(fd, my_read, len_s);
	printf("ret: %i\n", my_ret);
	fflush(0);
	my_read[my_ret] = '\0';
	printf("my read %s ret: %i errno: %i\n", my_read, my_ret, errno);
	real_ret = read(fdcopy, real_read, len_s);
	real_read[real_ret] = '\0';
	printf("real read %s ret: %i errno: %i\n", real_read, real_ret, errno);
	if (my_ret != real_ret || strcmp(my_read, real_read) != 0)
		test_failed = 1;
	free(my_read);
	free(real_read);
	return (test_failed);
}

int		tests_ft_read(void)
{
	int	tests_failed;
	int	fd;
	int	fdcopy;

	tests_failed = 0;
	printf("----------------- ft_read ------------\n");
	//fd = open("strlen_test.c", O_RDONLY);
	//fdcopy = open("strlen_test.c", O_RDONLY);
	//tests_failed += test_ft_read(fd, fdcopy, 4);
	fd = open("filedoesnotexist.c", O_RDONLY);
	fdcopy = open("filedoesnotexist.c", O_RDONLY);
	tests_failed += test_ft_read(fd, fdcopy, 4);
	//fd = open("read_test.c", O_RDONLY);
	//fdcopy = open("read_test.c", O_RDONLY);
	//tests_failed += test_ft_read(fd, fdcopy, 190);
	//fd = open("Makefile", O_RDONLY);
	//fdcopy = open("Makefile", O_RDONLY);
	//tests_failed += test_ft_read(fd, fdcopy, -1);
	printf("\n\n");
	return (tests_failed);
}
