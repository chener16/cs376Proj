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

#include "corbettn17.h"

#include "chener16.h"


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
  if(argc == 1)
    {
      robPrintAscii();
      return;
    }

  
  if(argc != 2 && argc != 1) {
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
