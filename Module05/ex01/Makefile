NAME = forms

FLAGS = clang++ -Wall -Wextra -Werror

INCLUDES = *.hpp

CLASSES = Bureaucrat.cpp main.cpp Form.cpp

OBJ = $(CLASSES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDES) 
	@$(FLAGS) $(CLASSES) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: clean fclean all