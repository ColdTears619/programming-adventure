#! /bin/bash
#
target_memory_mb=600

# Calculate the number of 1MB blocks to allocate
num_blocks=$((target_memory_mb / 1))

array=()
for ((i = 0; i < num_blocks; i++)); do
    array[i]="$(printf ' %.0s' {1..1048576})" 
done

read -p "Script is running. Press Enter to exit and release memory." 

unset array
