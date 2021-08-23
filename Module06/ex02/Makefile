NAME = real_type

FLAGS = clang++ -Wall -Wextra -Werror

INCLUDES = *.hpp

CLASSES = main.cpp Base.cpp A.cpp B.cpp C.cpp

OBJ = $(CLASSES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDES)
	@$(FLAGS) $(CLASSES) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: clean fclean all