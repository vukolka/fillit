#include "libft.h"
#include "fillit.h"

int		main(int argc, char *argv[])
{
	int *res;
	char a = 'A';

	res = get_tetrimono_array(argv[1]);
	while (*res != 0)
		printf("%c %d\n",a++ ,*res++);
	input_validation(argv[1]);
	
	return (0);
}