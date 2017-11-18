/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_tetrimino.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 19:42:30 by mvukolov          #+#    #+#             */
/*   Updated: 2017/11/18 19:42:31 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/* 
	function checkes whether is the matrix a tetrimino or not
	if one it returns its id 
*/

int 	is_tetrimino(char *matrix)
{
	int i;
	int j;
	int indexes[4];

	i = 0;
	j = 0;
	while(matrix[i] == '.' || matrix[i] == '#')
	{
		if (matrix[i] == '#')
		{
			indexes[j] = i;
			j++;
		}
		i++;
	}
	if (i < BUFFSIZE - 2)
	{
		error();
	}
}
