#!/bin/bash

cd . #change the directory to the current and make sure the changes happens in current

echo "#include <stdio.h>
#include <stdlib.h>

int main(void){



    return 0;
}" > $1.c   # $1 means the positional argument and makes a file with the name passed when running 
# this script and kind of creates a demo or empty c file with bare minimum format!!
exit 0
