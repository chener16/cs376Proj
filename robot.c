/**
 * robot.c
 *
 * A file that contains the supporting functions for main() in the
 * ~/robots example source for Software Engineering.
 *
 * @author Tanya L. Crenshaw
 * @author Eric Chen
 * @author Nathan Corbett
 * @since August 2013
 *
 */

#include "robot.h"


/**
 * robPrintMessage
 *
 * This function prints the message, "I really* love robots!"
 *
 * @param num the number of times the message should print the word
 * "really"
 *
 * @returns none 
 */
void robPrintMessage(int num)
{
  int i = 0;


  printf("Nathan and Eric ");

  for(i; i < num; i++)
    {
      printf("really ");
    }

  printf("love robots!\n");

  return;
}

/**
 * robPrintAscii
 *
 */
void robPrintAscii(void)
{
<<<<<<< HEAD
  printf("     i_i     \n"
         "    [@_@] \n"
         "   /|___|\\ \n" 
         "    d   b \n"
            
         "              i_i     \n"
         "             [@_@] \n"
         "            /|___|\\ \n"
         "             d   b \n"

         "                           i_i     \n"
         "                          [@_@] \n"
         "                         /|___|\\ \n"
         "                          d   b \n");  
                   








=======
  printf("    i_i    \n"
	 "   [x_x]   \n"
	 "  /|___|\\  \n"
         "   d   b   "); 
  
>>>>>>> 91d6f71cc32e166f2a7f97b3c0462f8e110e854f
}
