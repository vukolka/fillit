/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvukolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 05:19:32 by mvukolov          #+#    #+#             */
/*   Updated: 2017/11/24 05:19:33 by mvukolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <string.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# define BUFFSIZE 21
# define BOOL int
# define TRUE 1
# define FALSE 0

typedef struct			s_newlist
{
	char				name;
	int					id;
	struct s_newlist	*next;
}						t_etrimino;

size_t					ft_strlen(const char *s);
int						count_tetrimino(t_etrimino *list);
char					*ft_strnew(size_t size);
void					ft_putstr(char const *s);
char					*ft_strdup(const char *s1);
void					ft_putendl(char const *s);
int						is_stick(int *a);
int						is_square(int *a);
int						is_weird_shit(int *a);
int						is_right_side_stick(int *a);
int						*malloc_tetrimino_array(int a, int b, int c, int d);
int						get_line_size(char *matrix);
void					modify_matrix(char *matrix, int *a, char c);
int						compare(char *a, int *b);
int						*get_tetrimino_array(int id, int line_size, int index);
void					fillit(char *filename);
char					*recursion(char *matrix, t_etrimino *list);
char					*generate_matrix(int size);
t_etrimino				*new_tetrimino(char a, int id);
void					push_end_tetrimino(t_etrimino **list, char a, int id);
int						can_place_2(char *matrix, t_etrimino *current, int i);
t_etrimino				*get_tetrimino_list(char *filename);
char					*get_input_data(int fd);
void					file_input_error();
void					input_validation(char *filename);
int						is_tetrimino(char *matrix);
int						validate_tetris(char const *tetris);
void					file_input_error();
#endif
