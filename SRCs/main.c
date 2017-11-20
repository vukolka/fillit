#include "libft.h"
#include "fillit.h"

int		main(int argc, char *argv[])
{
	tetrimino *res;

	res = get_tetrimino_list(argv[1]);
	input_validation(argv[1]);
	
	return (0);
}