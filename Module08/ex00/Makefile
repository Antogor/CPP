NAME = easyfind

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror

INCLUDES = easyfind.hpp

CLASSES = main.cpp

OBJ = $(CLASSES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDES)
	@$(CXX) $(CXXFLAGS) $(CLASSES) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: clean fclean all

.PHONY: clean fclean re all
