#!/bin/bash

# Colin Harfst
# cph5wr
# 10/18/16
# lab103

echo "Type the .txt file that you wish to use as your dictionary."
read dict
echo "Type the .txt file that you wish to use as your grid."
read grid

RT1=`./a.out ${dict} ${grid} | tail -1`
RT2=`./a.out ${dict} ${grid} | tail -1`
RT3=`./a.out ${dict} ${grid} | tail -1`
RT4=`./a.out ${dict} ${grid} | tail -1`
RT5=`./a.out ${dict} ${grid} | tail -1`

sum=$(( RT1 + RT2 + RT3 + RT4 + RT5 ))
x=5
ans=$(( sum / x ))
echo "${ans}"
