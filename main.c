/**
 * main.c
 * 
 * The main entrypoint of the "I really love robots" program.  The
 * program prints the phrase "I really love robots!" to the screen.
 *
 * @author Tanya L. Crenshaw
 * @since August 2013
 *
 */
#include "robot.h"
<<<<<<< HEAD
#include "corbettn17.h"
=======
#include "chener16.h"

>>>>>>> 69d7c9a5d0c967191e7c2df876d536fabb2b3a91
/**
 * main()
 *
 * The main entrypoint of the program.
 * 
 * @param command line arguments.
 * 
 * @returns nothing.
 */
int main(int argc, const char * argv[])
{
  // Check the command line arguments.
  if(argc != 2) {
    printf("usage: %s <number> \n", argv[0]);
    return -1;
  }

  // Convert the command-line argument to a number.
  int num = atoi(argv[1]);

  username();

  robPrintAscii();

  chener16();

  robPrintMessage(num);

  return 0;
}
