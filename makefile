# This is a makefile for ~/robots
# Author: Tanya L. Crenshaw
CC=gcc

robots.out:	main.c robot.o robot.h corbettn17.o corbettn17.h
	$(CC) -o robots.out main.c robot.o corbettn17.o

corbettn17.o:	corbettn17.c corbettn17.h
	$(CC) -c corbettn17.c

robot.o:	robot.c robot.h
	$(CC) -c robot.c
