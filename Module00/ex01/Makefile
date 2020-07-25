NAME = phone

INCLUDES = Contact.hpp Agend.hpp

CFLAGS = clang++ -Wall -Wextra -Werror

FUN = main.cpp Contact.cpp Agend.cpp

OBJ = $(FUN:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDES) 
	@$(CFLAGS) $(FUN) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
