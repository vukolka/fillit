#include "libft.h"
#include "fillit.h"

int		main(int argc, char *argv[])
{
	tetrimino *res;
	int n = 1;
	res = get_tetrimino_list(argv[1]);
	print_list(res);
	char *b;
	char *a;	
	while (1)
	{
		a = generate_matrix(n);
		b = recursion(a, res);
		if (*b)
			break ;
		n++;
	}
	free(a);
	printf("res\n%s\n", b);
	// input_validation(argv[1]);
	
	return (0);
}