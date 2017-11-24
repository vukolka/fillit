NAME=fillit
FLAGS=-Wall -Wextra -Werror
SOURCE= fillit.c \
		list_libary.c \
		libftlibary.c \
		libftlibary2.c \
		list_libary.c \
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
all: $(NAME)

$(NAME):
	gcc -c $(SOURCE) -I.
	gcc -g -o $(NAME) *.o
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: fclean all

