#include "libft.h"
#include "fillit.h"

void    fillit(char *filename)
{
    tetrimino	*list;
	int 		n;
	char 		*res;
	char 		*matrix;

	list = get_tetrimino_list(filename);
	n = 2;	
	while (TRUE)
	{
		matrix = generate_matrix(n);
		res = recursion(matrix, list);
		if (*res)
			break ;
		n++;
	}
	free(matrix);
	ft_putstr(res);
	free(res);
}