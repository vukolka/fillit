#include "fillit.h"
#include "libft.h"

char	*recursion(char *matrix, tetrimino *list)
{
	int i = 0;
	char *tempmatrix;

	if (list == NULL)
		return (matrix);
	tempmatrix = ft_strdup(matrix);
	printf("%s\n", tempmatrix);
	while (matrix[i])
	{
		if (list->id == can_place(tempmatrix, list, i))
		{
			if(*(tempmatrix = recursion(tempmatrix, list->next)) != '\0')
				return (tempmatrix);
		}
		if (*tempmatrix != 0)
			free(tempmatrix);
		tempmatrix = ft_strdup(matrix);
		i++;
	}
	return ("\0");

}