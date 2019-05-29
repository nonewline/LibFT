NAME = libft.a
SRC = *.c
INC = libft.h
FLAGS = -Wall -Werror -Wextra
OBJ = *.o

all: $(NAME)

$(NAME): libft.h
	@gcc $(FLAGS) -c $(SRC) -I $(INC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJ)
	
fclean:	clean
	@/bin/rm -f $(NAME)
	
re: fclean all
