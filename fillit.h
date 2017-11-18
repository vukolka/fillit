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
# define BOOL int
# define TRUE 1 
# define FALSE 0 

/*	
	Functions for input validation.
	Prints out errors if found	 
*/

char	*get_input_data(int fd);
void	file_input_error();
void 	input_validation(char* filename);
int 	is_tetrimino(char *matrix);

/* end of input validation */

int 	validate_tetris(char const *tetris);
t_list	*get_tetris_list(char const *filename);
void	file_input_error();

#endif