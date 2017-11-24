/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursion.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 04:51:50 by mvukolov          #+#    #+#             */
/*   Updated: 2017/11/24 04:51:51 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

char	*recursion(char *matrix, t_etrimino *current)
{
	int		i;
	char	*temp;

	i = 0;
	if (current == NULL)
		return (matrix);
	temp = ft_strdup(matrix);
	while (matrix[i])
	{
		if (matrix[i] == '.')
			if (can_place_2(temp, current, i))
			{
				if (*(temp = recursion(temp, current->next)) != '\0')
					return (temp);
			}
		if (*temp != FALSE)
			free(temp);
		temp = ft_strdup(matrix);
		i++;
	}
	return ("\0");
}
