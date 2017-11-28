/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 12:02:20 by mvukolov          #+#    #+#             */
/*   Updated: 2017/11/27 16:29:22 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*generate_matrix(int size)
{
	int		i;
	int		matrix_size;
	char	*res;

	matrix_size = (size * size) + size;
	res = ft_strnew(matrix_size + 1);
	i = 0;
	while (i < matrix_size)
	{
		if (i && (i + 1) % (size + 1) == 0)
			res[i] = '\n';
		else
			res[i] = '.';
		i++;
	}
	res[i] = 0;
	return (res);
}
