NAME = abstractAnimal

FLAGS = clang++ -Wall -Wextra -Werror

INCLUDES = *.hpp

CLASSES = Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp main.cpp Brain.cpp

OBJ = $(CLASSES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDES) 
	@$(FLAGS) $(CLASSES) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: clean fclean all