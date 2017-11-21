#include "fillit.h"
#include "libft.h"

char	*recursion(char *matrix, tetrimino *list)
{
	int i = 0;
	char *tempmatrix;

	if (list == NULL)
		return (matrix);
	tempmatrix = ft_strdup(matrix);

	while (matrix[i])
	{
		if (list->id == can_place(tempmatrix, list, i))
		{
			if(*(tempmatrix = recursion(tempmatrix, list->next)) != '\0');
				return (tempmatrix);
		}
		free(tempmatrix);
		tempmatrix = ft_strdup(matrix);
		i++;
	}
	return ("\0");

}