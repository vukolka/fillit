#include <libft.h>
#include <fillit.h>

tetrimino	*get_tetrimino_list(char *filename)
{
	int 		fd;
	tetrimino	*res;
	int			bytes_read;
	char		*buff;
	char		a;

	a = 'A';
	buff = ft_strnew(BUFFSIZE);
	res = NULL;
	fd = open(filename, O_RDONLY);
	while ((bytes_read = read(fd, buff, BUFFSIZE - 1)))
	{
		push_end_tetrimino(&res, a++, is_tetrimino(buff));
		bytes_read = read(fd, buff, 1);
	}
	free(buff);
	return (res);
}
