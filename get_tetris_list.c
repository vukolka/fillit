
#include "fillit.h"

/*This function takes a file and reads first BUFFSIZE-1 chars
and returns a pointer with the result of reading
BUt to be cool it actually should skip and \n chars first*/
static void printlist(t_list *list)
{
	ft_putendl(list->content);
}

static char	*get_current_tetris(int fd)
{
	int		bytes_read;
	char	*buf;

	buf = ft_strnew(BUFFSIZE);
	if ((bytes_read = read(fd, buf, BUFFSIZE - 1)))
	{
		buf[bytes_read] = 0;
		if (bytes_read < BUFFSIZE - 1)
		{
			free(buf);
			file_input_error();
			return (NULL);
		}
		return (buf);
	}
	return (NULL);
}

/* Function gives each tetris an index */
char 	*validate_tetris(char const *tetris, char c)
{
	char 	*res;
	int 	i;
}

t_list		*get_tetris_list(char const *filename)
{
	t_list  *tetris_list;
	char	*curr_tetris;
	int		fd;
	char 	c;

	c = 'A';
	tetris_list = NULL;
	/*actually I should not return null here, 
	instead I should print out the mistake and exit!!!!*/
	if (!(fd = open(filename, O_RDONLY))) 
		return (NULL);
	while ((curr_tetris = get_current_tetris(fd)) != NULL)
		if (curr_tetris)
		{
			ft_lstadd(&tetris_list, ft_lstnew(validate_tetris(curr_tetris, c), 4));
			read(fd, curr_tetris, 1);
			free(curr_tetris);
			c++;
		}
	close(fd);
	return (tetris_list);
}


