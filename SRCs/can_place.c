/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   can_place.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 11:46:01 by mvukolov          #+#    #+#             */
/*   Updated: 2017/11/20 11:46:02 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

int		get_line_size(char *matrix)
{
	int i;

	i = 0;
	while (*matrix++ != '\n')
		i++;
	return (i);
}

int 	can_place_square(char *matrix, char c, int i)
{
	int size = get_line_size(matrix) + 1;

	if (matrix[i] != '.')
		return (0);
	if (matrix[i] == '.' && matrix[i + 1] == '.'
		&& matrix[i + size] == '.' 
		&& matrix[i + size + 1] == '.')
	{
		matrix[i] = c;
		matrix[i + 1] = c;
		matrix[i + size] = c;
		matrix[i + size + 1] = c;
		return (1);
	}
	return (0);
}
// int 	can_place_weird_shit(*matrix, char c, int i)
int 	can_place_stick(char *matrix, char c, int i)
{
	if (matrix[i] != '.')
		return (0);
	if (matrix[i] == matrix[i+1]
		&& matrix[i+1] == matrix[i + 2]
		&& matrix[i+2] == matrix[i + 3])
	{
		matrix[i] = c;
		matrix[i+1] = c;
		matrix[i+2] = c;
		matrix[i+3] = c;
		return (2);
	}
	return (0);
}
int 	can_place_side_stick(char *matrix, char c, int i)
{
	if (matrix[i] != '.')
		return (0);
	int size = get_line_size(matrix) + 1;
	if (matrix[i] == matrix[i + size]
		&& matrix[i + size] == matrix[i + size*2]
		&& matrix[i+size*2] == matrix[i + size*3])
	{
		matrix[i] = c;
		matrix[i+size] = c;
		matrix[i+size*2] = c;
		matrix[i+size*3] = c;
		return (3);
	}
	return (0);
}
int 	can_place_l_stick(char *matrix, char c, int i)
{
	int size = get_line_size(matrix) + 1;
	if (matrix[i] != '.' || i < size)
		return (0);
	if (matrix[i] == matrix[i+1]
		&& matrix[i+1] == matrix[i + 2]
		&& matrix[i+2] == matrix[i + 2 - size])
	{
		matrix[i] = c;
		matrix[i+1] = c;
		matrix[i+2] = c;
		matrix[i + 2 - size] = c;
		return (8);
	}
	return (0);
}

int 	can_place_j_stick(char *matrix, char c, int i)
{

}
// int 	can_place_lego(*matrix, char c, int i)

int		can_place(char *matrix, tetrimino *current, int i)
{
	int res;

	if (current->id == 1)
	{
		if (res = can_place_square(matrix, current->name, i))
			return (res);
		return (0);
	}
	if (current->id == 2)
	{
		if (res = can_place_stick(matrix, current->name, i))
			return (res);
		return (0);
	}
	if (current->id == 3)
	{
		if (res = can_place_side_stick(matrix, current->name, i))
			return (res);
		return (0);
	}

	if (current->id == 8)
	{
		if (res = can_place_l_stick(matrix, current->name, i))
			return (res);
		return (0);
	}

	return (0);
}
