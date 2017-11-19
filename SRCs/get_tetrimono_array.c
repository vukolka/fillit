#include <libft.h>
#include <fillit.h>

int		*get_tetrimono_array(char *filename)
{
	int		fd;
	int		*res;
	int		bytes_read;
	char	*buff;
	int		i;

	i = 0;
	buff = ft_strnew(BUFFSIZE);
	res = ft_memalloc(BUFFSIZE * sizeof(int));
	fd = open(filename, O_RDONLY);
	while (bytes_read = read(fd, buff, BUFFSIZE - 1))
	{
		res[i++] = is_tetrimino(buff);
		bytes_read = read(fd, buff, 1);
	}
	res[i] = 0;
	free(buff);
	return (res);
}
