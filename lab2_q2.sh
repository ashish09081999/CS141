#!/bin/bash
echo "what is your name ?"
read NAME #variable 
mkdir $NAME
cd $NAME
touch $NAME
for i in 1 2 3 4 5
do
touch $NAME$i.cpp
done
