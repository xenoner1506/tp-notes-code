#!/bin/bash
EXECUTABLE=$1
ARGS=$@
 
 
start_time=$(date +%s)
echo "PROGRAM IS STARTING: $EXECUTABLE"
$ARGS
echo "PROGRAM IS OVER"
end_time=$(date +%s)

echo "TIME OF EXECUTION IS: $((end_time - start_time))"
echo "TIME OF STRART: $(date --date=@$start_time)"
echo "TIME OF END: $(date --date=@$end_time)"
