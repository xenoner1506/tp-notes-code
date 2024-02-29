#!/bin/bash
FIRST=$1
SECOND=$2
OPERATION=$3

echo "FLOATING:"
echo $(echo $FIRST $OPERATION $SECOND | bc -l)

printf "\n\nINTEGER:\n"
echo $(( $FIRST $OPERATION $SECOND ))
