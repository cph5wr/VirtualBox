#!/bin/bash

# Colin Harfst
# cph5wr
# 10/27/16
# lab 103

echo "Enter the exponent for counter.cpp (1-9):"
read n

sum=0

if [ "$n" == "quit" ]
then
    exit 0
else
    for i in {1..5} ; do
	RT=`./a.out ${n} | tail -1`
	echo "Running time iteration ${i}:"
	echo "time recorded was ${RT} ms."
	sum=$(( sum + RT ))
    done
fi
x=5
ans=$(( sum / x ))
echo "The average time was ${ans} ms."
