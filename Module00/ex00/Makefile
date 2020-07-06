NAME = megaphone
CFLAGS = clang++ -Wall -Wextra -Werror

FUN = megaphone.cpp

OBJ = $(FUN: .cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CFLAGS) $(FUN) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
