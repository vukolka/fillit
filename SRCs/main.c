#include "libft.h"
#include "fillit.h"

int		main(int argc, char *argv[])
{
	input_validation(argv[1]);
	fillit(argv[1]);
	return (0);
}