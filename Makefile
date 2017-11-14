NAME=fillit
FLAGS=-Wall -Wextra -Werror
all: $(NAME)

$(NAME): 
	gcc -c *.c -I.
	gcc -o $(NAME) *.o libft.a
clean:
	rm -rf $(NAME)
fclean: clean
	rm -rf *.o
re: fclean all
