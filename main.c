/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabdli <cabdli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 16:52:15 by cabdli            #+#    #+#             */
/*   Updated: 2023/06/02 14:40:55 by cabdli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("test.txt", O_RDONLY);
	line = get_next_line(fd);
	while (line)
	{
		printf(" gnl = %s", line);
		free(line);
		line = get_next_line(fd);
	}
	return (0);
}

/*
int	main(void)
{
	int		fd;
	int		fd2;
	char	*line;

	fd = open("test.txt", O_RDONLY);
	fd2 = open("file.txt", O_RDONLY);
	line = get_next_line(fd);
	printf(" gnl = %s", line);
	line = get_next_line(fd2);
	printf(" gnl = %s", line);
	line = get_next_line(fd);
	printf(" gnl = %s", line);
	free(line);
	return (0);
}
*/
