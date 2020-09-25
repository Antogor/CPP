#!/bin/bash/

if clang++ -Wall -Werror -Wextra *.cpp; then
	./a.out
else
	echo -e "\e[31m Error \e[0m"
fi
