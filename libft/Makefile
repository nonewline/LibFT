NAME = libft.a
SRC = srcs/*.c
INC = includes/
FLAGS = -Wall -Werror -Wextra
OBJ = *.o

all: $(NAME)

$(NAME): includes/libft.h
	@gcc $(FLAGS) -c $(SRC) -I $(INC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJ)
	
fclean:	clean
	@/bin/rm -f $(NAME)
	
re: fclean all
