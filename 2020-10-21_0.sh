if [[ "$#" -ne 2 ]]; then
	echo [device] [value]
	exit 1
fi

while : ; do
	echo "send"
	echo -e "x$2\ny$2\nz$2\nw$2" > $1;
done
