#!/bin/bash
gcc -c *.c -o .o
ar cr liball.a *.o
