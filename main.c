/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equiana <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 09:34:54 by equiana           #+#    #+#             */
/*   Updated: 2019/09/28 14:59:25 by equiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "stdio.h"
#include <string.h>

int main(void)
{
	char *line;
	int x;
	int fd;
	int res;

	x = 1;
	line = NULL;

//	fd = open("one_big_fat_line.txt", O_RDONLY);
//	fd = open("war_and_peace.txt", O_RDONLY);
//	fd = open("dracula.txt", O_RDONLY);
//	fd = open("empty_test.txt", O_RDONLY);
//	fd = open("hhgttg.txt", O_RDONLY);
//	fd = open("nl_and_eof_one.txt", O_RDONLY);
//	fd = open("test.txt", O_RDONLY);
//	fd = open("test1.txt", O_RDONLY);
//	fd = open("test3.txt", O_RDONLY);
//	fd = open("test4.txt", O_RDONLY);
//	fd = open("test5.txt", O_RDONLY);
//	fd = open("test6.txt", O_RDONLY);
//	fd = open("test7.txt", O_RDONLY);
//	fd = open("test8.txt", O_RDONLY);
//	fd = open("test9.txt", O_RDONLY);
//	fd = open("test10.txt", O_RDONLY);
//	fd = open("test11.txt", O_RDONLY);
//	fd = open("test12.txt", O_RDONLY);
//	fd = open("test13.txt", O_RDONLY);
//	fd = open("test14.txt", O_RDONLY);
//	fd = open("test_for_100.txt", O_RDONLY);

	while ((res = get_next_line(fd, &line)) == 1)
	{
		printf("line: %d, result: %s\n", x, line);
		free(line);
		line = NULL;
		x++;
	}
	free(line);
	line = NULL;
	close(fd);
//	close(fd2);
	return (0);
}
