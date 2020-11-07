#!/bin/bash

# finalizer

if [[ ! $# -eq 1 ]]; then
	echo ./2020-11-08_0.sh [lrc filename]
	exit 1
fi

cat "$1" | cut  -c 1-10,23- | sed '/]$/d'

