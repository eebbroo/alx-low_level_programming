#!/bin/bash

gcc -l . -c *.c
ar -rc liballa.a *.o
gcc main.c liballa.a -o liballa
