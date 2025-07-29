#!/bin/bash
#you pass the postional argument that is the name of the file 
gcc -o $1 $1.c
./$1
exit 0