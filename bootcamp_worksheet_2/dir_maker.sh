#!/bin/bash
amount=$1
if [ -z "$amount" ]; then
    echo "Provide amount of directories you want to make."
    exit 1;
fi
for ((i=1; i <= amount; i++))
do
    mkdir directory_${i}
done