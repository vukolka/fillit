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

typedef	struct			newlist
{
	char				name;
	int					id;
	struct newlist		*next;
}						tetrimino;


char	*recursion(char *matrix, tetrimino *list);
char		*generate_matrix(int size);
void		print_list(tetrimino *list);
tetrimino	*new_tetrimino(char a, int id);
void		push_end_tetrimino(tetrimino **list, char a, int id);
/*	
	Functions for input validation.
	Prints out errors if found	 
*/
int		can_place(char *matrix, tetrimino *current, int i);


tetrimino	*get_tetrimino_list(char *filename);
char		*get_input_data(int fd);
void		file_input_error();
void	 	input_validation(char* filename);
int 		is_tetrimino(char *matrix);

/* end of input validation */

int 	validate_tetris(char const *tetris);
t_list	*get_tetris_list(char const *filename);
void	file_input_error();

#endif