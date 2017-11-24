#include "fillit.h"
#include "libft.h"

char	*recursion(char *matrix, tetrimino *current)
{
	int		i = 0;
	char	*tempmatrix;

	if (current == NULL)
		return (matrix);
	tempmatrix = ft_strdup(matrix);
	while (matrix[i])
	{
		if (matrix[i] == '.')
			if (can_place_2(tempmatrix, current, i))
			{
				if(*(tempmatrix = recursion(tempmatrix, current->next)) != '\0')
					return (tempmatrix);
			}
		if (*tempmatrix != FALSE)
			free(tempmatrix);
		tempmatrix = ft_strdup(matrix);
		i++;
	}
	return ("\0");

}
