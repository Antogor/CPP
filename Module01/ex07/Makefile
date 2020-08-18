NAME = replace

INCLUDES = Change.hpp

FUN = main.cpp Change.cpp

OBJ = $(FUN:.cpp=.o)

FLAGS = clang++ -Wextra -Werror -Wall

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDES)
	@$(FLAGS) $(FUN) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
