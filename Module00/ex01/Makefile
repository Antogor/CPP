NAME = phone.a

CFLAGS = clang++ -I -Wall -Wextra -Werror

FUN = main.cpp Contact.cpp #./Agend.cpp

OBJ = $(FUN:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) Contact.hpp
	@$(CFLAGS) $(FUN) -o $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
