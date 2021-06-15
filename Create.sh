#/bin/bash

TYPE=$1
NAME=$2
PATH=$3
COMAND="create"

if [ $TYPE = "class"  ]
then
	./CreateClass.sh $COMAND $NAME $PATH
	echo "Class created"
elif [ $TYPE = "interface" ]
then
	./CreateInterface.sh $COMAND $NAME $PATH
	echo "Interface created"
else
	echo Invalid comand
fi

