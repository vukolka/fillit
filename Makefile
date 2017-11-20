NAME=fillit
FLAGS=-Wall -Wextra -Werror
SOURCE=SRCs/list_libary.c SRCs/get_tetrimino_list.c SRCs/errors.c SRCs/is_tetrimino.c SRCs/input_validation.c SRCs/main.c
LIBSOURCE=libft/ft_atoi.c libft/ft_bzero.c libft/ft_isalnum.c libft/ft_isalpha.c libft/ft_isascii.c libft/ft_isdigit.c libft/ft_isprint.c libft/ft_itoa.c libft/ft_lstadd.c libft/ft_lstdel.c libft/ft_lstdelone.c libft/ft_lstiter.c libft/ft_lstmap.c libft/ft_lstnew.c libft/ft_memalloc.c libft/ft_memccpy.c libft/ft_memchr.c libft/ft_memcmp.c libft/ft_memcpy.c libft/ft_memdel.c libft/ft_memmove.c libft/ft_memset.c libft/ft_putchar.c libft/ft_putchar_fd.c libft/ft_putendl.c libft/ft_putendl_fd.c libft/ft_putnbr.c libft/ft_putnbr_fd.c libft/ft_putstr.c libft/ft_putstr_fd.c libft/ft_strcat.c libft/ft_strchr.c libft/ft_strclr.c libft/ft_strcmp.c libft/ft_strcpy.c libft/ft_strdel.c libft/ft_strdup.c libft/ft_strequ.c libft/ft_striter.c libft/ft_striteri.c libft/ft_strjoin.c libft/ft_strlcat.c libft/ft_strlen.c libft/ft_strmap.c libft/ft_strmapi.c libft/ft_strncat.c libft/ft_strncmp.c libft/ft_strncpy.c libft/ft_strnequ.c libft/ft_strnew.c libft/ft_strnstr.c libft/ft_strrchr.c libft/ft_strsplit.c libft/ft_strstr.c libft/ft_strsub.c libft/ft_strtrim.c libft/ft_tolower.c libft/ft_toupper.c
BINARIES=libft/ft_atoi.o libft/ft_bzero.o libft/ft_isalnum.o libft/ft_isalpha.o libft/ft_isascii.o libft/ft_isdigit.o libft/ft_isprint.o libft/ft_itoa.o libft/ft_lstadd.o libft/ft_lstdel.o libft/ft_lstdelone.o libft/ft_lstiter.o libft/ft_lstmap.o libft/ft_lstnew.o libft/ft_memalloc.o libft/ft_memccpy.o libft/ft_memchr.o libft/ft_memcmp.o libft/ft_memcpy.o libft/ft_memdel.o libft/ft_memmove.o libft/ft_memset.o libft/ft_putchar.o libft/ft_putchar_fd.o libft/ft_putendl.o libft/ft_putendl_fd.o libft/ft_putnbr.o libft/ft_putnbr_fd.o libft/ft_putstr.o libft/ft_putstr_fd.o libft/ft_strcat.o libft/ft_strchr.o libft/ft_strclr.o libft/ft_strcmp.o libft/ft_strcpy.o libft/ft_strdel.o libft/ft_strdup.o libft/ft_strequ.o libft/ft_striter.o libft/ft_striteri.o libft/ft_strjoin.o libft/ft_strlcat.o libft/ft_strlen.o libft/ft_strmap.o libft/ft_strmapi.o libft/ft_strncat.o libft/ft_strncmp.o libft/ft_strncpy.o libft/ft_strnequ.o libft/ft_strnew.o libft/ft_strnstr.o libft/ft_strrchr.o libft/ft_strsplit.o libft/ft_strstr.o libft/ft_strsub.o libft/ft_strtrim.o libft/ft_tolower.o libft/ft_toupper.o
all: $(NAME)

libft: $(BINARIES)
	gcc -c -Ilibft $(LIBSOURCE)
	ar rcs libft.a $(BINARIES)
	ranlib libft.a

$(NAME): libft
	gcc -c $(SOURCE) -I.
	gcc -o $(NAME) *.o libft.a
clean:
	rm -f *.o
	rm -f libft/*.o
fclean: clean
	rm -f $(NAME)
	rm -f libft.a
re: fclean all

