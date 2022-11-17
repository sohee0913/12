#include <stdlib.h>
#include <time.h>
#include "bingoBoard.h"
#define N_SIZE 5
#define BINGONUM_HOLE -1

static int bingoBoard[N_SIZE][N_SIZE];
static int numberStatus[N_SIZE*N_SIZE];

void bingo_init(void)
{
	int i,j;
	int cnt=1;
	
	for(i=0;i<N_SIZE;i++)
		for(j=0;j<N_SIZE;j++)
		{
			if(cnt==15)
			{
			bingoBoard[i][j]=BINGONUM_HOLE;
			numberStatus[cnt-1]=BINGONUM_HOLE;
			cnt++;
			}
			
			else
			{
			numberStatus[cnt-1]=N_SIZE*i+j;
			bingoBoard[i][j]=cnt++;
			}
		}
	
}

void bingo_print(void)
{
	int i,j;
	printf("=======================================\n");
	for(i=0;i<N_SIZE;i++){
		for(j=0;j<N_SIZE;j++)
		{
			if(bingoBoard[i][j]>0)
				printf("%i\t", bingoBoard[i][j]);
			else
				printf("X\t");
		}
		
		printf("\n");
	}
	
	printf("======================================\n\n");
}

void bingo_inputNum(int sel)
{
	int i,j;
	
	i=numberStatue[sel-1]/N_SIZE;
	J=numberStatues[sel-1]%N_SIZE;
	bingoBoard[i][j]=BINGONUM_HOLE;
}

int bingo_countCompletedLine(void)
{
 
}

