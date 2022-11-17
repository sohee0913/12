#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	srand((unsigned)(time(NULL)));
	
	printf("================================================\n");
	printf("************************************************\n");
	printf("                   BINGO GAME                   \n");
	
	bingo_init();
	bingo_print();
	bingo_inputNum(21);
	bingo_print();
	
	//generate numbers
	
	
	//initalize bingo boards
	
	
	//while (game is not end) //줄 수가 N_Bingo보다 작음 
	
	/*
	{
	
		//bingo board printing
		
		
		//print no.of completed lines
		
		
		//select a proper number
		
		
		//put the numver on the board
		
		
	}
	*/
	
	
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf("================================================\n");
	printf("************************************************\n");
	printf("                CONGRATULATION!!!!              \n");
	printf("!#@$%^)(*&^%$#)     *BINGO!!!#     @#%$^%&*&@#!)\n");
	printf("                    YOU WIN!!                   \n");
	printf("************************************************\n");
	printf("================================================\n\n");
	
	//bingo_printBoard();
	
	return 0;
}
