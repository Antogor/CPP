NAME = serialize

FLAGS = clang++ -Wall -Wextra -Werror

INCLUDES = *.hpp

CLASSES = Serialize.cpp main.cpp

OBJ = $(CLASSES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDES)
	@$(FLAGS) $(CLASSES) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: clean fclean all