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

void	error()
{
	ft_putendl("error");
	exit();
}

void 	input_validation(char* filename)
{
	int fd;
	int bytes_red;
	char *buffer;

	buffer = ft_strnew(BUFFERSIZE);
	fd = open(filename, O_RDONLY);
	while(bytes_red = read(fd, buffer, BUFFERSIZE - 1))
	{
		if (is_tetrimino(buffer) == FALSE)
			error();
	}
	if (bytes_red != 0)
		error();
}
