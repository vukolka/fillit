/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 17:10:53 by mvukolov          #+#    #+#             */
/*   Updated: 2017/11/18 17:10:55 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

void 	input_validation(char* filename)
{
	int fd;
	int bytes_red;
	char *buffer;
	BOOL flag;

	buffer = ft_strnew(BUFFSIZE);
	fd = open(filename, O_RDONLY);
	while((bytes_red = read(fd, buffer, BUFFSIZE - 1)))
	{
		flag = FALSE;
		if (bytes_red < BUFFSIZE - 1)
		{
			printf("shit in the end of the file\n");
			file_input_error();
		}
		if (is_tetrimino(buffer) == FALSE)
		{
			printf("%s", buffer);
			printf("isnt a is_tetrimino\n");
			file_input_error();
		}
		if ((bytes_red = read(fd, buffer, 1)))
		{
			if (buffer[0] != '\n')
				file_input_error();
			flag = TRUE;
		}
	}
	free(buffer);
	if (flag)
		file_input_error();
	close(fd);
}
