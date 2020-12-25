#!/bin/bash
trap HUP
exec 0< /dev/null
if [ -t 1 ]; then
	if [ -w . ]; then
		echo 'Enviant sortida a nohup.out'
		exec >> nohup.out
	else echo "Enviant sortida a $HOME/nohup.out" && exec >> $HOME/nohup.out
	fi
fi
[ -t 2 ] && echo 'Enviant sortida errors a nohup.out' && exec 2>&1
$@
exit 0 	
