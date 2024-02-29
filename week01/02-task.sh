#!/bin/bash
DIRPATH=$1

function count_files_dir {
  echo $(find $1 -type f | wc -l)
}

echo $list_all_files
n_files=$( count_files_dir $DIRPATH)
# find /path/ -type f/d -- find only files or only directories recursively in /path/
# wc -l - count number of lines
echo "NUMBER OF FILES IN $DIRPATH: $n_files"

printf "\n\nNUMBER OF FILE BY DIRECTORY (recursively):\n"
for dirname in $(ls -d $DIRPATH/*/)
do
  n_files=$(count_files_dir $dirname)
  echo "NUMBER IF FILES IN $dirname: $n_files"
done

