##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC	=	./src/main.c \
		./src/load_map.c \
		./src/draw_result.c \
		./src/scan_around.c \
		./src/scan_start_point.c

LIB	=	./lib/my_get_nbr.c \
		./lib/my_put_nbr.c \
		./lib/my_putstr.c \
		./lib/my_strlen.c \
		./lib/my_putchar.c \
		./lib/char_to_int.c \
		./lib/fs_get_nbr_from_first_line.c \
		./lib/fs_open_file.c \
		./lib/find_nb_cols.c \
		./lib/mem_alloc_array.c \
		./lib/getchar.c

OBJ	=	$(SRC:.c=.o)

OBJLIB	=	$(LIB:.c=.o)

NAME	=	bsq

NAMELIB = libmy.a

GFLAGS	=	-Wextra -I include -

all : $(NAMELIB) $(NAME) clean

$(NAME):
	gcc -g -L./lib $(SRC) -lmy -Wall -o $(NAME)

$(NAMELIB):
	gcc -c -g $(LIB) -Wall
	mv *.o ./lib
	ar rc $(NAMELIB) $(OBJLIB)
	mv $(NAMELIB) ./lib/libmy.a
	rm -f ./lib/*.o

clean:
	rm -f $(OBJ)
	rm -f $(OBJLIB)

fclean: clean
	rm -f $(NAME)
	rm -f ./lib/libmy.a

re: fclean all
