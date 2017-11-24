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

int		validate_form(char *buffer)
{
	int		slash_n;
	int		i;

	i = 0;
	slash_n = 0;
	while (*buffer)
	{
		if (*buffer != '.' && *buffer != '\n'
			&& *buffer != '#')
			file_input_error();
		if (*buffer == '\n')
		{
			if (i != 4 && i != 9 && i != 14 && i != 19)
				file_input_error();
			slash_n++;
			if (slash_n > 4)
				file_input_error();
		}
		i++;
		buffer++;
	}
	return (TRUE);
}

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
		if (bytes_red < BUFFSIZE - 1
		|| is_tetrimino(buffer) == FALSE
		|| validate_form(buffer) == FALSE)
			file_input_error();
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
