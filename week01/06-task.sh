#!/bin/bash
options=$(getopt -o "" -l "dir_path:,start_point:" -- "$@")
if [ $? -ne 0 ]
then
  echo "BAD"
fi

eval set -- "$options"
while [ $# -gt 0 ]
do
  case "$1" in
    --dir_path) DIRPATH=$2; shift;;
    --start_point) START_POINT=$2; shift;;
    --) shift;;
  esac
  shift
done

echo "I WILL NUMERATE FILES IN: $DIRPATH"
echo "I WILL START FROM: $START_POINT"
counter=$START_POINT

for filename in $(ls $DIRPATH)
do
  echo $counter: $filename
  counter=$(( counter + 1 ))
done
