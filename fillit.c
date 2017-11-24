/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 04:45:36 by mvukolov          #+#    #+#             */
/*   Updated: 2017/11/24 04:45:37 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	fillit(char *filename)
{
	t_etrimino	*list;
	int			n;
	char		*res;
	char		*matrix;

	list = get_tetrimino_list(filename);
	n = 2;
	while (TRUE)
	{
		matrix = generate_matrix(n);
		res = recursion(matrix, list);
		if (*res)
			break ;
		n++;
	}
	free(matrix);
	ft_putstr(res);
	free(res);
}
