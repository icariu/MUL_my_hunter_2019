##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## my makefile
##


SRC		=	src/main.c			\
			src/init_val.c		\
			src/display_info.c	\
			src/display_cursor.c\
			src/main_loop.c		\

NAME	=	my_hunter

COMPIL	=	-Llib/my -lmy -l csfml-graphics -l csfml-audio -l csfml-system -l csfml-window

TFLAG	=	./tests/test_my_bistro.c -lcriterion --coverage -fprofile-arcs

CFLAGS	=	-I include/

all:		$(NAME)

$(NAME):	$(OBJ)
		make -C lib/my
		make clean -C lib/my
		gcc -o $(NAME) $(SRC) $(COMPIL) $(CFLAGS)

clean:
		rm -f $(OBJ)
		rm -f *.o

fclean: clean
		rm -f $(NAME)

re:		fclean all

tests_run:
		make -C ./lib/my re
		gcc -o $(NAME) $(SRC) $(TFLAG) $(COMPIL) $(CFLAGS)
		-./$(NAME)
		gcovr --exclude tests/
		rm -f *.gcno
		rm -f *.gcda
