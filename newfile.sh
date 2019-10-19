#!/bin/bash

read -p "File Extension: " FILE_EXT

NUM=0
DATE=`date '+%Y-%m-%d'`

while : ; do
	FILENAME=${DATE}_${NUM}.${FILE_EXT}

	if [ ! -e $FILENAME ]; then
		break
	fi

	NUM=$(( NUM + 1 ))
done

vim $FILENAME

