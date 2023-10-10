#!/bin/bash
files=(*)                 # put the list of matching files in an array
for file in "${files[@]}"; do  # loop through the array
    sed -n '1p' "$file"
done