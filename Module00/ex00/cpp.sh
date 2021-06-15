#!/bin/bash
MESSAGE=$1
if [ $MESSAGE ]
then
	#cd testGitJenkins/CPP/Module00/ex00/
	make re
	if [ $? -eq 0 ]
	then
		./megaphone $MESSAGE
		exit 0
	else
		exit 1
	fi
else
	echo Need an argument
	exit 0
fi
