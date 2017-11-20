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

int		can_place(char *matrix, int id, char c)
{
	int 	*dotarray;
	int 	i;
	int		count;

	i = 0;
	count = 0;
	while (matrix[i])
	{
		if (matrix[i] == '.')
			dotarray[count++] = i;
		i++;
	}
	i = 0;
	while (dotarray[i+3])
	{
		if (is_tetrimino(dotarray) == id)
			return (1);
		i++;
	}
}
