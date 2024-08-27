#bin/bash!


gcc -c -o slice.o slice.c
gcc -c -o main.o main.c

gcc -o slice slice.o main.o

find . -type f -name "*.o" -exec rm -f {} +

sleep 15