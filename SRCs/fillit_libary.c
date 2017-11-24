#include "libft.h"
#include "fillit.h"

int     *malloc_tetrimino_array(int a, int b, int c, int d)
{
    int     *array;

    if (a < 0 || b < 0 || c < 0 || d < 0)
        return (NULL);
    if(!(array = malloc(sizeof(int) * 4)))
        return (NULL);
    array[0] = a;
    array[1] = b;
    array[2] = c;
    array[3] = d;    
    return (array);
}

int		get_line_size(char *matrix)
{
	int i;

	i = 0;
	while (*matrix++ != '\n')
		i++;
	return (i + 1);
}

void    modify_matrix(char *matrix, int *a, char c)
{
    matrix[a[0]] = c;
    matrix[a[1]] = c;
    matrix[a[2]] = c;
    matrix[a[3]] = c;
}

int     compare(char *matrix, int *i)
{
    if (matrix[i[0]] != '.')
        return (0);
    if (matrix[i[0]] == matrix[i[1]]
        && matrix[i[1]] == matrix[i[2]]
        && matrix[i[2]] == matrix[i[3]])
    {
        return (TRUE);
    }
    return (FALSE);
}
