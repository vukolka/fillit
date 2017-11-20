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
#include "libft.h"

/* 
	function checkes whether is the matrix a tetrimino or not
	if one it returns its id 
*/
int 	is_stick(int *a)
{
	if (a[0] == a[1] - 1 &&
		a[1] == a[2] - 1 && 
		a[2] == a[3] - 1)
	{
		return (2);
	}
	if (a[0] == a[1] - 5 &&
		a[1] == a[2] - 5 && 
		a[2] == a[3] - 5)
	{
		return (3);
	}
	return (0);
}

int 	is_square(int *a)
{
	if (a[0] == a[1] - 1 &&
		a[1] == a[3] - 5 &&
		a[0] == a[2] - 5)
	{
		return (1);
	}
	return (0);
}

int 	is_weird_shit(int *a)
{

	if (a[0] == a[2] - 5 &&
		a[1] == a[2] - 1 &&
		a[1] == a[3] - 5)
	{
		return (12);
	}
	if (a[0] == a[1] - 1 &&
		a[1] == a[2] - 5 &&
		a[2] == a[3] - 1)
	{
		return (13);
	}
	if (a[0] == a[1] - 1 &&
		a[0] == a[3] - 5 &&
		a[2] == a[3] - 1)
	{
		return (14);
	}
	if (a[0] == a[1] - 5 &&
		a[1] == a[2] - 1 &&
		a[2] == a[3] - 5)
	{
		return (15);
	}
	return (0);
}

int 	is_right_side_stick(int *a)
{
	if (a[0] == a[1] - 1 &&
		a[1] == a[2] - 1 &&
		a[2] == a[3] - 5)
	{
		return (4);
	}
	if (a[1] == a[2] - 1 &&
		a[2] == a[3] - 1 &&
		a[0] == a[1] - 5)
	{
		return (5);
	}
	if (a[0] == a[1] - 5 &&
		a[1] == a[3] - 5 &&
		a[2] == a[3] - 1)
	{
		return (6);
	}
	if (a[0] == a[1] - 1 &&
		a[0] == a[2] - 5 &&
		a[2] == a[3] - 5)
	{
		return (7);
	}
	return (0);
}

int 	is_lego(int *a)
{
	if (a[0] == a[1] - 5 &&
		a[1] == a[2] - 1 &&
		a[1] == a[3] - 5)
	{
		return (16);
	}
	if (a[0] == a[1] - 4 &&
		a[1] == a[2] - 1 &&
		a[2] == a[3] - 5)
	{
		return (17);
	}
	if (a[0] == a[2] - 5 &&
		a[1] == a[2] - 1 &&
		a[2] == a[3] - 1)
	{
		return (18);
	}
	if (a[0] == a[1] - 1 &&
		a[1] == a[2] - 1 &&
		a[1] == a[3] - 5)
	{
		return (19);
	}
	return (0);
}

int 	is_left_side_stick(int *a)
{
	if (a[1] == a[2] - 1 &&
		a[2] == a[3] - 1 &&
		a[0] == a[3] - 5)
	{
		return (8);
	}
	if (a[0] == a[1] - 1 &&
		a[1] == a[2] - 1 &&
		a[0] == a[3] - 5)
	{
		return (9);
	}
	if (a[0] == a[1] - 5 &&
		a[1] == a[2] - 5 &&
		a[2] == a[3] - 1)
	{
		return (10);
	}
	if (a[0] == a[1] - 1 &&
		a[1] == a[2] - 5 &&
		a[2] == a[3] - 5)
	{
		return (11);
	}
	return (0);
}

int 	identify_tetrimino(int *indexes)
{
	int res;

	res = 0;
	if ((res = is_stick(indexes)))
		return (res);
	if ((res = is_right_side_stick(indexes)))
		return (res);
	if ((res = is_left_side_stick(indexes)))
		return (res);
	if ((res = is_weird_shit(indexes)))
		return (res);
	if ((res = is_square(indexes)))
		return (res);
	if ((res = is_lego(indexes)))
		return (res);
	return (res);
}

int 	is_tetrimino(char *matrix)
{
	int i;
	int j;
	int indexes[4];

	i = 0;
	j = 0;
	while(matrix[i] == '.' || matrix[i] == '#' 
		|| matrix[i] == '\n')
	{
		if (j > 4)
			file_input_error();
		if (matrix[i] == '#')
		{
			indexes[j] = i;
			j++;
		}
		i++;
	}
	if (i < BUFFSIZE - 2 && i != 0)
	{
		printf("i: %d\ni is less then bufsize \n", i);
		file_input_error();
	}
	return (identify_tetrimino(indexes));
}
