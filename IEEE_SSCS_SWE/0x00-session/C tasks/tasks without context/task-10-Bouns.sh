#!/bin/bash
gcc -E file.c -o file.i; gcc -S file.i -o file.s; gcc -c file.s -o file.o; gcc file.o -o file.exe

