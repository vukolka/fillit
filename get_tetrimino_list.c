/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_tetrimino_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 05:34:11 by mvukolov          #+#    #+#             */
/*   Updated: 2017/11/27 16:29:36 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_etrimino	*get_tetrimino_list(char *filename)
{
	int			fd;
	t_etrimino	*res;
	int			bytes_read;
	char		*buff;
	char		a;

	a = 'A';
	buff = ft_strnew(BUFFSIZE);
	res = NULL;
	fd = open(filename, O_RDONLY);
	while ((bytes_read = read(fd, buff, BUFFSIZE - 1)))
	{
		push_end_tetrimino(&res, a++, is_tetrimino(buff));
		bytes_read = read(fd, buff, 1);
	}
	free(buff);
	return (res);
}
