/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fil_validate_tetrimino.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 20:59:41 by mvukolov          #+#    #+#             */
/*   Updated: 2017/11/17 20:59:42 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		stick_tetrimino(char const *tetris)
{
	int		i;

	i = 0;
	while (tetris[i])
	if (tetris[i] == '#')
	{
		if (tetris[i+1])
		{
			/* code */
		}
	}
}

int 	validate_tetris(char const *tetris)
{
	int 	i;

}
