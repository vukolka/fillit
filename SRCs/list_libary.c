/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_libary.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 04:49:43 by mvukolov          #+#    #+#             */
/*   Updated: 2017/11/24 04:49:44 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

t_etrimino	*new_tetrimino(char a, int id)
{
	t_etrimino *res;

	if (!(res = (t_etrimino*)malloc(sizeof(t_etrimino))))
		return (NULL);
	res->id = id;
	res->name = a;
	res->next = NULL;
	return (res);
}

void		push_end_tetrimino(t_etrimino **list, char a, int id)
{
	t_etrimino *temp;

	temp = *list;
	if (*list == NULL)
	{
		*list = new_tetrimino(a, id);
		return ;
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_tetrimino(a, id);
}
