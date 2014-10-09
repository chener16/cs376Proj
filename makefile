# This is a makefile for ~/robots
# Author: Tanya L. Crenshaw
CC=gcc

<<<<<<< HEAD
robots.out:	main.c robot.o robot.h corbettn17.o corbettn17.h
	$(CC) -o robots.out main.c robot.o corbettn17.o

corbettn17.o:	corbettn17.c corbettn17.h
	$(CC) -c corbettn17.c
=======
robots.out:	main.c chener16.o chener16.h robot.o robot.h
	$(CC) -o robots.out main.c chener16.o robot.o

chener16.o:	chener16.c chener16.h
	$(CC) -c chener16.c
>>>>>>> 69d7c9a5d0c967191e7c2df876d536fabb2b3a91

robot.o:	robot.c robot.h
	$(CC) -c robot.c
