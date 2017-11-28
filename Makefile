NAME=fillit
FLAGS=-Wall -Wextra -Werror
SOURCE= fillit.c \
		list_libary.c \
		libftlibary.c \
		libftlibary2.c \
		recursion.c \
		fillit_libary.c \
		can_place_2.c \
		generate_matrix.c \
		get_tetrimino_list.c \
		errors.c \
		is_tetrimino.c \
		is_tetrimino2.c \
		input_validation.c \
		main.c
OBJ = $(SOURCE:%.c=%.o)
all: $(NAME)

$(NAME):
	gcc -c $(SOURCE) -I. $(FLAGS)
	gcc -g -o $(NAME) $(OBJ)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all

