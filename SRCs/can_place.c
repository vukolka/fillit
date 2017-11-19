#include "fillit.h"
#include "libft.h"

char	*scip_to_dot(char *matrix)
{
	while (*matrix != '.' && *matrix)
		matrix++;
	if (*matrix == 0)
		return (matrix - 1);
	return (matrix);
}

int		can_place_two(char *matrix, char c)
{
	int counter;
	int i;

	counter = 0;
	i = 0;
	while (matrix[i])
	{
		if (matrix[i] == '.')
			counter++;
		else
			counter = 0;
		if (matrix[i] == '\n')
			counter = 0;
		if (counter == 4)
		{
			while(counter-- > 0)
				matrix[i--] = c;
			return (1);
		}
		i++;
	}
	return (0);
}

int		can_place_one(char *matrix, char c)
{
	int size;
	int i;

	i = 0;
	size = ft_strlen(matrix);
	while(*matrix)
	{
		if (*matrix != '.')
			matrix = scip_to_dot(matrix);
		if (i + 6 + 1 < size)
		{
			if (*matrix == *(matrix + 1) == 
				*(matrix + 5) == *(matrix + 6))
			{
				*matrix = c;
				*(matrix+1) = c;
				*(matrix+5) = c;
				*(matrix+6) = c;
				return (1);
			}
		}
		i++;
		matrix++;
	}
	return (0);
}

int		can_place(char *matrix, int id, char c)
{
	if (id == 1)
		return (can_place_one(matrix, c));
	if (id == 2)
		return (can_place_two(matrix, c));
}