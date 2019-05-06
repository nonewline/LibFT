NAME = libft.a

SRC = srcs/*.c

INCS = incl/ 

all: $(NAME)

$(NAME):
	@gcc -c -Wall -Werror -Wextra $(SRC) -I $(INCS)
	@ar rc $(NAME) *.o
	@ranlib $(NAME)

clean:
	@/bin/rm -f *.o
	
fclean:		clean
	@/bin/rm -f $(NAME)
	
re: fclean all
