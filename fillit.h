#ifndef FILLIT_H
# define FILLIT_H
# include <string.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "libft.h"
# define BUFFSIZE 21

t_list	*get_tetris_list(char const *filename);
void	file_input_error();

#endif