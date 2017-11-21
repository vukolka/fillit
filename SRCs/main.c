#include "libft.h"
#include "fillit.h"

int		main(int argc, char *argv[])
{
	tetrimino *res;
	int n = 5;
	res = get_tetrimino_list(argv[1]);
	print_list(res);
	char *b;

	char *a = generate_matrix(n);
	b = recursion(a, res);
	n++;
	free(a);
	printf("res\n%s\n", b);
	// input_validation(argv[1]);
	
	return (0);
}