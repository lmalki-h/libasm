/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalki-h <lmalki-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 21:59:47 by lmalki-h          #+#    #+#             */
/*   Updated: 2020/09/17 21:59:52 by lmalki-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int		test_ft_write(int fd, char *s, int s_len)
{
	int		my_write;
	int		real_write;

	printf("my_write: [");
	fflush(stdout);
	my_write = write(fd, s, s_len);
	if (my_write == -1)
		printf("]\n my write returns %i errno: %i errmessage %s\n", my_write,
		errno, strerror(errno));
	else
		printf("]\n my write %i\n", my_write);
	printf("real_write: [");
	fflush(stdout);
	real_write = write(fd, s, s_len);
	if (real_write == -1)
		printf("] \n real write returns %i errno: %i errmessage %s\n",
		real_write, errno, strerror(errno));
	else
		printf("]\n real write %i\n", real_write);
	if (my_write == real_write)
		return (0);
	return (1);
}

int		tests_ft_write(void)
{
	int		tests_failed;

	printf("----------- ft_write ------------\n");
	tests_failed = 0;
	tests_failed += test_ft_write(1, "simple test", 11);
	tests_failed += test_ft_write(1, "simple test", 12);
	tests_failed += test_ft_write(1, "simple test", 6);
	tests_failed += test_ft_write(1, "simple test", -1);
	tests_failed += test_ft_write(1, "2[90ru4[fwejplard,%$##W\\':?f", 19);
	tests_failed += test_ft_write(-45, "simple test", 11);
	printf("\n\n");
	return (tests_failed);
}
