#!/bin/bash
COMAND=$1
INTERFACE_NAME="I${2}"
PATH=$3
MAYUS="${INTERFACE_NAME_NAME}_hpp"
if [ $COMAND = "create" ]
then
 	echo "#ifndef ${MAYUS^^}
# define ${MAYUS^^}

class $INTERFACE_NAME
{
        public:
                        virtual ~$INTERFACE_NAME(){}


};


#endif" > $PATH/$INTERFACE_NAME.hpp

else
	echo Invalid comand
fi
