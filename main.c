/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 05:00:21 by mvukolov          #+#    #+#             */
/*   Updated: 2017/11/24 05:00:22 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		main(int argc, char *argv[])
{
	if (argc != 2)
	{
		ft_putendl("usage ./fillit source_file");
		return (1);
	}
	input_validation(argv[1]);
	fillit(argv[1]);
	return (0);
}
