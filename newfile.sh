#!/bin/bash

if [[ $# == 1 ]]; then
	FILE_EXT="$1"
else
	read -r -p "File Extension: " FILE_EXT
fi

NUM=0
DATE="$(date '+%Y-%m-%d')"

while : ; do
	f=${DATE}_${NUM}.${FILE_EXT}

	if [ ! -e "$f" ]; then
		break
	fi

	NUM=$(( NUM + 1 ))
done

export f

# backward-compat
export FILENAME="$f"

echo "New file openned: $f"

vim "$f"
