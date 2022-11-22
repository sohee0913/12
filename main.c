#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bingoBoard.h"

#define BINGO_RES_UNFINISHED -1
#define BINGO_RES_FINISHED 0
#define N_LINE 3
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int check_gameEnd(void)
{
	int res=BINGO_RES_UNFINISHED;
	
	if(bingo_countCompletedLine()>=N_LINE)
		res=BINGO_RES_FINISHED;
		
	return res;
}


int get_number(void)
{
	int selNum=0;
		
	do{
		printf("select a number : ");
		scanf("%d", &selNum);
		fflush(stdin);
			
		if(selNum <1  || selNum>N_SIZE*N_SIZE || bingo_checkNum(selNum)==BINGO_NUMSTATUS_ABSENT)
		{
			printf("%i is not on the board! select other one. \n", selNum); 
		}
	}while(selNum <1  || selNum>N_SIZE*N_SIZE || bingo_checkNum(selNum)==BINGO_NUMSTATUS_ABSENT);
		
	return selNum;
}

int main(int argc, char *argv[]) {
	
	int selNum;
	srand((unsigned)(time(NULL)));
	
	printf("================================================\n");
	printf("************************************************\n");
	printf("                   BINGO GAME                   \n");
	
	bingo_init();

	
	while(check_gameEnd()==BINGO_RES_UNFINISHED)//while(check_gameEnd()==)
	{ 
		bingo_print();
		printf("No. of completed Line: %i\n", bingo_countCompletedLine());
		selNum=get_number();
		bingo_inputNum(selNum);
	}
	//printf("%i",check_gameEnd());
		


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
