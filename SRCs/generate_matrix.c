/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 12:02:20 by mvukolov          #+#    #+#             */
/*   Updated: 2017/11/20 12:02:21 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

char	*generate_matrix(int size)
{
	int i = 0;
	int matrix_size = (size * size) + size;
	char *res = ft_strnew(matrix_size + 1);
	while (i < matrix_size)
	{
		if (i && i % (size + 1) == 0)
			res[i] = '\n';
		else
			res[i] = '.';
		i++;
	}
	res[i] = 0;
	return (res);
}
