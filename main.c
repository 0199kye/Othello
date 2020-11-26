#include <stdio.h>
#include <stdlib.h>
#define N 6

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void flipwhite_east(void)
{
	int y,x;
	int gameboard[N][N];
	int flipnum1_east;
	
	if(gameboard[y][x+1] ==2 && gameboard[y][x+2]==1)
	{
		gameboard[y][x+1]=1;
		flipnum1_east +=1;
	}
	
	else if(gameboard[y][x+1] ==2 && gameboard[y][x+2]==2 && gameboard[y][x+3]==1)
	{
		gameboard[y][x+1]=1;
		gameboard[y][x+2]=1;
		flipnum1_east +=2;
	}
	
	else if(gameboard[y][x+1] ==2 && gameboard[y][x+2]==2 && gameboard[y][x+3]==2 && gameboard[y][x+4]==1)
	{
		gameboard[y][x+1]=1;
		gameboard[y][x+2]=1;
		gameboard[y][x+3]=1;
		flipnum1_east +=3;
	}
	
	else if(gameboard[y][x+1] ==2 && gameboard[y][x+2]==2 && gameboard[y][x+3]==2 && gameboard[y][x+4]==2 && gameboard[y][x+5]==1)
	{
		gameboard[y][x+1]=1;
		gameboard[y][x+2]=1;
		gameboard[y][x+3]=1;
		gameboard[y][x+4]=1;
		flipnum1_east +=4;
	}
	
	else
	   flipnum1_east = 0;
} 

void flipwhite_west(void)
{
	int y,x;
	int gameboard[N][N];
	int flipnum1_west;
	
	if(gameboard[y][x-1] ==2 && gameboard[y][x-2]==1)
	{
		gameboard[y][x-1]=1;
		flipnum1_west +=1;
	}
	
	else if(gameboard[y][x-1] ==2 && gameboard[y][x-2]==2 && gameboard[y][x-3]==1)
	{
		gameboard[y][x-1] =1;
		gameboard[y][x-2] =1;
		flipnum1_west +=2;
	}
	
	else if(gameboard[y][x-1] ==2 && gameboard[y][x-2]==2 && gameboard[y][x-3]==2 && gameboard[y][x-4]==1)
	{
		gameboard[y][x-1] =1;
		gameboard[y][x-2] =1;
		gameboard[y][x-3] =1;
		flipnum1_west +=3;
	}
	
	else if(gameboard[y][x-1] ==2 && gameboard[y][x-2]==2 && gameboard[y][x-3]==2 && gameboard[y][x-4]==2 && gameboard[y][x-5]==1)
	{
		gameboard[y][x-1]=1;
		gameboard[y][x-2]=1;
		gameboard[y][x-3]=1;
		gameboard[y][x-4]=1;
		flipnum1_west +=4;
	}
	
	else
	   flipnum1_west = 0;
} 


void flipwhite_north(void)
{
	int y,x;
	int gameboard[N][N];
	int flipnum1_north;
	
	if(gameboard[y-1][x] ==2 && gameboard[y-2][x]==1)
	{
		gameboard[y-1][x]=1;
		flipnum1_north +=1;
	}
	
	else if(gameboard[y-1][x] ==2 && gameboard[y-2][x]==2 && gameboard[y-3][x]==1)
	{
		gameboard[y-1][x] =1;
		gameboard[y-2][x]=1;
		flipnum1_north +=2;
	}
	
	else if(gameboard[y-1][x] ==2 && gameboard[y-2][x]==2 && gameboard[y-3][x]==2 && gameboard[y-4][x]==1)
	{
		gameboard[y-1][x] =1;
		gameboard[y-2][x]=1;
		gameboard[y-3][x]=1;
		flipnum1_north +=3;
	}
	
	else if(gameboard[y-1][x] ==2 && gameboard[y-2][x]==2 && gameboard[y-3][x]==2 && gameboard[y-4][x]==2 && gameboard[y-5][x]==1)
	{
		gameboard[y-1][x] =1;
		gameboard[y-2][x]=1;
		gameboard[y-3][x]=1;
		gameboard[y-4][x]=1; 
		flipnum1_north +=4;
	}
	
	else
	   flipnum1_north = 0;
} 

void flipwhite_south(void)
{
	int y,x;
	int gameboard[N][N];
	int flipnum1_south;
	
	if(gameboard[y+1][x] ==2 && gameboard[y+2][x]==1)
	{
		gameboard[y+1][x]=1;
		flipnum1_south +=1;
	}
	
	else if(gameboard[y+1][x] ==2 && gameboard[y+2][x]==2 && gameboard[y+3][x]==1)
	{
		gameboard[y+1][x] =1;
		gameboard[y+2][x]=1;
		flipnum1_south +=2;
	}
	
	else if(gameboard[y+1][x] ==2 && gameboard[y+2][x]==2 && gameboard[y+3][x]==2 && gameboard[y+4][x]==1)
	{
		gameboard[y+1][x] =1;
		gameboard[y+2][x]=1;
		gameboard[y+3][x]=1;
		flipnum1_south +=3;
	}
	
	else if(gameboard[y+1][x] ==2 && gameboard[y+2][x]==2 && gameboard[y+3][x]==2 && gameboard[y+4][x]==2 && gameboard[y+5][x]==1 )
	{
		gameboard[y+1][x] =1;
		gameboard[y+2][x]=1;
		gameboard[y+3][x]=1;
		gameboard[y+4][x]=1; 
		flipnum1_south +=4;
	}
	
	else
	   flipnum1_south = 0;
} 

void flipwhite_northeast(void)
{
	int y,x;
	int gameboard[N][N];
	int flipnum1_northeast;
	
	if(gameboard[y-1][x+1] ==2 && gameboard[y-2][x+2]==1)
	{
		gameboard[y-1][x+1]=1;
		flipnum1_northeast +=1;
	}
	
	else if(gameboard[y-1][x+1] ==2 && gameboard[y-2][x+2]==2 && gameboard[y-3][x+3]==1)
	{
		gameboard[y-1][x+1] =1;
		gameboard[y-2][x+2]= 1;
		flipnum1_northeast +=2;
	}
	
	else if(gameboard[y-1][x+1] ==2 && gameboard[y-2][x+2]==2 && gameboard[y-3][x+3]==2 && gameboard[y-4][x+4]==1)
	{
		gameboard[y-1][x+1] =1;
		gameboard[y-2][x+2]= 1;
		gameboard[y-3][x+3]=1;
		flipnum1_northeast +=3;
	}
	
	else if(gameboard[y-1][x+1] ==2 && gameboard[y-2][x+2]==2 && gameboard[y-3][x+3]==2 && gameboard[y-4][x+4]==2 && gameboard[y-5][x+5]==1)
	{
		gameboard[y-1][x+1] =1;
		gameboard[y-2][x+2]= 1;
		gameboard[y-3][x+3]=1;
		gameboard[y-4][x+4]=1;
		flipnum1_northeast +=4;
	}
	
	else
	   flipnum1_northeast = 0;
} 

void flipwhite_northwest(void)
{
	int y,x;
	int gameboard[N][N];
	int flipnum1_northwest;
	
	if(gameboard[y-1][x-1] ==2 && gameboard[y-2][x-2]==1)
	{
		gameboard[y-1][x-1]=1;
		flipnum1_northwest +=1;
	}
	
	else if(gameboard[y-1][x-1] ==2 && gameboard[y-2][x-2]==2 && gameboard[y-3][x-3]==1)
	{
		gameboard[y-1][x-1] =1;
		gameboard[y-2][x-2]= 1;
		flipnum1_northwest +=2;
	}
	
	else if(gameboard[y-1][x-1] ==2 && gameboard[y-2][x-2]==2 && gameboard[y-3][x-3]==2 && gameboard[y-4][x-4]==1)
	{
		gameboard[y-1][x-1] =1;
		gameboard[y-2][x-2]= 1;
		gameboard[y-3][x-3]=1;
		flipnum1_northwest +=3;
	}
	
	else if(gameboard[y-1][x-1] ==2 && gameboard[y-2][x-2]==2 && gameboard[y-3][x-3]==2 && gameboard[y-4][x-4]==2 && gameboard[y-5][x-5]==1)
	{
		gameboard[y-1][x-1] =1;
		gameboard[y-2][x-2]= 1;
		gameboard[y-3][x-3]=1;
		gameboard[y-4][x-4]=1;
		flipnum1_northwest +=4;
	}
	
	else
	   flipnum1_northwest = 0;
} 

void flipwhite_southeast(void)
{
	int y,x;
	int gameboard[N][N];
	int flipnum1_southeast;
	
	if(gameboard[y+1][x+1] ==2 && gameboard[y+2][x+2]==1)
	{
		gameboard[y+1][x+1]=1;
		flipnum1_southeast +=1;
	}
	
	else if(gameboard[y+1][x+1] ==2 && gameboard[y+2][x+2]==2 && gameboard[y+3][x+3]==1)
	{
		gameboard[y+1][x+1] =1;
		gameboard[y+2][x+2]= 1;
		flipnum1_southeast +=2;
	}
	
	else if(gameboard[y+1][x+1] ==2 && gameboard[y+2][x+2]==2 && gameboard[y+3][x+3]==2 && gameboard[y+4][x+4]==1)
	{
		gameboard[y+1][x+1] =1;
		gameboard[y+2][x+2]= 1;
		gameboard[y+3][x+3]=1;
		flipnum1_southeast +=3;
	}
	
	else if(gameboard[y+1][x+1] ==2 && gameboard[y+2][x+2]==2 && gameboard[y+3][x+3]==2 && gameboard[y+4][x+4]==2 && gameboard[y+5][x+5]==1)
	{
		gameboard[y+1][x+1] =1;
		gameboard[y+2][x+2]= 1;
		gameboard[y+3][x+3]=1;
		gameboard[y+4][x+4]=1;
		flipnum1_southeast +=4;
	}
	
	else
	   flipnum1_southeast = 0;
} 

void flipwhite_southwest(void)
{
	int y,x;
	int gameboard[N][N];
	int flipnum1_southwest;
	
	if(gameboard[y+1][x-1] ==2 && gameboard[y+2][x-2]==1)
	{
		gameboard[y+1][x-1]=1;
		flipnum1_southwest +=1;
	}
	
	else if(gameboard[y+1][x-1] ==2 && gameboard[y+2][x-2]==2 && gameboard[y+3][x-3]==1)
	{
		gameboard[y+1][x-1] =1;
		gameboard[y+2][x-2]= 1;
		flipnum1_southwest +=2;
	}
	
	else if(gameboard[y+1][x-1] ==2 && gameboard[y+2][x-2]==2 && gameboard[y+3][x-3]==2 && gameboard[y+4][x-4]==1)
	{
		gameboard[y+1][x-1] =1;
		gameboard[y+2][x-2]= 1;
		gameboard[y+3][x-3]=1;
		flipnum1_southwest +=3;
	}
	
	else if(gameboard[y+1][x-1] ==2 && gameboard[y+2][x-2]==2 && gameboard[y+3][x-3]==2 && gameboard[y+4][x-4]==2 && gameboard[y+5][x-5]==1)
	{
		gameboard[y+1][x-1] =1;
		gameboard[y+2][x-2]= 1;
		gameboard[y+3][x-3]=1;
		gameboard[y+4][x-4]=1;
		flipnum1_southwest +=4;
	}
	
	else
	   flipnum1_southwest = 0;
}//�Ͼ�� 8���⿡ ���� ������ 

void flipblack_east(void)
{
	int y,x;
	int gameboard[N][N];
	int flipnum2_east;
	
	if(gameboard[y][x+1] ==1 && gameboard[y][x+2]==2)
	{
		gameboard[y][x+1]=2;
		flipnum2_east +=1;
	}
	
	else if(gameboard[y][x+1] ==1 && gameboard[y][x+2]==1 && gameboard[y][x+3]==2)
	{
		gameboard[y][x+1]=2;
		gameboard[y][x+2]=2;
		flipnum2_east +=2;
	}
	
	else if(gameboard[y][x+1] ==1 && gameboard[y][x+2]==1 && gameboard[y][x+3]==1 && gameboard[y][x+4]==2)
	{
		gameboard[y][x+1]=2;
		gameboard[y][x+2]=2;
		gameboard[y][x+3]=2;
		flipnum2_east +=3;
	}
	
	else if(gameboard[y][x+1] ==1 && gameboard[y][x+2]==1 && gameboard[y][x+3]==1 && gameboard[y][x+4]==1 && gameboard[y][x+5]==2)
	{
		gameboard[y][x+1]=2;
		gameboard[y][x+2]=2;
		gameboard[y][x+3]=2;
		gameboard[y][x+4]=2;
		flipnum2_east +=4;
	}
	
	else
	   flipnum2_east = 0;
} 

void flipblack_west(void)
{
	int y,x;
	int gameboard[N][N];
	int flipnum2_west;
	
	if(gameboard[y][x-1] ==1 && gameboard[y][x-2]==2)
	{
		gameboard[y][x-1]=2;
		flipnum2_west +=1;
	}
	
	else if(gameboard[y][x-1] ==1 && gameboard[y][x-2]==1 && gameboard[y][x-3]==2)
	{
		gameboard[y][x-1] =2;
		gameboard[y][x-2] =2;
		flipnum2_west +=2;
	}
	
	else if(gameboard[y][x-1] ==1 && gameboard[y][x-2]==1 && gameboard[y][x-3]==1 && gameboard[y][x-4]==2)
	{
		gameboard[y][x-1] =2;
		gameboard[y][x-2] =2;
		gameboard[y][x-3] =2;
		flipnum2_west +=3;
	}
	
	else if(gameboard[y][x-1] ==1 && gameboard[y][x-2]==1 && gameboard[y][x-3]==1 && gameboard[y][x-4]==1 && gameboard[y][x-5]==2)
	{
		gameboard[y][x-1]=2;
		gameboard[y][x-2]=2;
		gameboard[y][x-3]=2;
		gameboard[y][x-4]=2;
		flipnum2_west +=4;
	}
	
	else
	   flipnum2_west = 0;
} 


void flipblack_north(void) 
{
	int y,x;
	int gameboard[N][N];
	int flipnum2_north;
	
	if(gameboard[y-1][x] ==1 && gameboard[y-2][x]==2)
	{
		gameboard[y-1][x]=2;
		flipnum2_north +=1;
	}
	
	else if(gameboard[y-1][x] ==1 && gameboard[y-2][x]==1 && gameboard[y-3][x]==2)
	{
		gameboard[y-1][x] =2;
		gameboard[y-2][x]=2;
		flipnum2_north +=2;
	}
	
	else if(gameboard[y-1][x] ==1 && gameboard[y-2][x]==1 && gameboard[y-3][x]==1 && gameboard[y-4][x]==2)
	{
		gameboard[y-1][x] =2;
		gameboard[y-2][x]=2;
		gameboard[y-3][x]=2;
		flipnum2_north +=3;
	}
	
	else if(gameboard[y-1][x] ==1 && gameboard[y-2][x]==1 && gameboard[y-3][x]==1 && gameboard[y-4][x]==1 && gameboard[y-5][x]==2)
	{
		gameboard[y-1][x] =2;
		gameboard[y-2][x]=2;
		gameboard[y-3][x]=2;
		gameboard[y-4][x]=2; 
		flipnum2_north +=4;
	}
	
	else
	   flipnum2_north = 0;
} 

void flipblack_south(void)
{
	int y,x;
	int gameboard[N][N];
	int flipnum2_south;
	
	if(gameboard[y+1][x] ==1 && gameboard[y+2][x]==2)
	{
		gameboard[y+1][x]=2;
		flipnum2_south +=1;
	}
	
	else if(gameboard[y+1][x] ==1 && gameboard[y+2][x]==1 && gameboard[y+3][x]==2)
	{
		gameboard[y+1][x] =2;
		gameboard[y+2][x]=2;
		flipnum2_south +=2;
	}
	
	else if(gameboard[y+1][x] ==1 && gameboard[y+2][x]==1 && gameboard[y+3][x]==1 && gameboard[y+4][x]==2)
	{
		gameboard[y+1][x] =2;
		gameboard[y+2][x]=2;
		gameboard[y+3][x]=2;
		flipnum2_south +=3;
	}
	
	else if(gameboard[y+1][x] ==1 && gameboard[y+2][x]==1 && gameboard[y+3][x]==1 && gameboard[y+4][x]==1 && gameboard[y+5][x]==2 )
	{
		gameboard[y+1][x] =2;
		gameboard[y+2][x]=2;
		gameboard[y+3][x]=2;
		gameboard[y+4][x]=2; 
		flipnum2_south +=4;
	}
	
	else
	   flipnum2_south = 0;
} 

void flipblack_northeast(void)
{
	int y,x;
	int gameboard[N][N];
	int flipnum2_northeast;
	
	if(gameboard[y-1][x+1] ==1 && gameboard[y-2][x+2]==2)
	{
		gameboard[y-1][x+1]=2;
		flipnum2_northeast +=1;
	}
	
	else if(gameboard[y-1][x+1] ==1 && gameboard[y-2][x+2]==1 && gameboard[y-3][x+3]==2)
	{
		gameboard[y-1][x+1] =2;
		gameboard[y-2][x+2]= 2;
		flipnum2_northeast +=2;
	}
	
	else if(gameboard[y-1][x+1] ==1 && gameboard[y-2][x+2]==1 && gameboard[y-3][x+3]==1 && gameboard[y-4][x+4]==2)
	{
		gameboard[y-1][x+1] =2;
		gameboard[y-2][x+2]= 2;
		gameboard[y-3][x+3]=2;
		flipnum2_northeast +=3;
	}
	
	else if(gameboard[y-1][x+1] ==1 && gameboard[y-2][x+2]==1 && gameboard[y-3][x+3]==1 && gameboard[y-4][x+4]==1 && gameboard[y-5][x+5]==2)
	{
		gameboard[y-1][x+1] =2;
		gameboard[y-2][x+2]= 2;
		gameboard[y-3][x+3]=2;
		gameboard[y-4][x+4]=2;
		flipnum2_northeast +=4;
	}
	
	else
	   flipnum2_northeast = 0;
} 

void flipblack_northwest(void)
{
	int y,x;
	int gameboard[N][N];
	int flipnum2_northwest;
	
	if(gameboard[y-1][x-1] ==1 && gameboard[y-2][x-2]==2)
	{
		gameboard[y-1][x-1]=2;
		flipnum2_northwest +=1;
	}
	
	else if(gameboard[y-1][x-1] ==1 && gameboard[y-2][x-2]==1 && gameboard[y-3][x-3]==2)
	{
		gameboard[y-1][x-1] =2;
		gameboard[y-2][x-2]= 2;
		flipnum2_northwest +=2;
	}
	
	else if(gameboard[y-1][x-1] ==1 && gameboard[y-2][x-2]==1 && gameboard[y-3][x-3]==1 && gameboard[y-4][x-4]==2)
	{
		gameboard[y-1][x-1] =2;
		gameboard[y-2][x-2]= 2;
		gameboard[y-3][x-3]=2;
		flipnum2_northwest +=3;
	}
	
	else if(gameboard[y-1][x-1] ==1 && gameboard[y-2][x-2]==1 && gameboard[y-3][x-3]==1 && gameboard[y-4][x-4]==1 && gameboard[y-5][x-5]==2)
	{
		gameboard[y-1][x-1] =2;
		gameboard[y-2][x-2]= 2;
		gameboard[y-3][x-3]=2;
		gameboard[y-4][x-4]=2;
		flipnum2_northwest +=4;
	}
	
	else
	   flipnum2_northwest = 0;
} 

void flipblack_southeast(void)
{
	int y,x;
	int gameboard[N][N];
	int flipnum2_southeast;
	
	if(gameboard[y+1][x+1] ==1 && gameboard[y+2][x+2]==2)
	{
		gameboard[y+1][x+1]=1;
		flipnum2_southeast +=1;
	}
	
	else if(gameboard[y+1][x+1] ==1 && gameboard[y+2][x+2]==1 && gameboard[y+3][x+3]==2)
	{
		gameboard[y+1][x+1] =2;
		gameboard[y+2][x+2]= 2;
		flipnum2_southeast +=2;
	}
	
	else if(gameboard[y+1][x+1] ==1 && gameboard[y+2][x+2]==1 && gameboard[y+3][x+3]==1 && gameboard[y+4][x+4]==2)
	{
		gameboard[y+1][x+1] =2;
		gameboard[y+2][x+2]= 2;
		gameboard[y+3][x+3]=2;
		flipnum2_southeast +=3;
	}
	
	else if(gameboard[y+1][x+1] ==1 && gameboard[y+2][x+2]==1 && gameboard[y+3][x+3]==1 && gameboard[y+4][x+4]==1 && gameboard[y+5][x+5]==2)
	{
		gameboard[y+1][x+1] =2;
		gameboard[y+2][x+2]= 2;
		gameboard[y+3][x+3]=2;
		gameboard[y+4][x+4]=2;
		flipnum2_southeast +=4;
	}
	
	else
	   flipnum2_southeast = 0;
} 

void flipblack_southwest(void)
{
	int y,x;
	int gameboard[N][N];
	int flipnum2_southwest;
	
	if(gameboard[y+1][x-1] ==1 && gameboard[y+2][x-2]==2)
	{
		gameboard[y+1][x-1]=2;
		flipnum2_southwest +=1;
	}
	
	else if(gameboard[y+1][x-1] ==1 && gameboard[y+2][x-2]==1 && gameboard[y+3][x-3]==2)
	{
		gameboard[y+1][x-1] =2;
		gameboard[y+2][x-2]= 2;
		flipnum2_southwest +=2;
	}
	
	else if(gameboard[y+1][x-1] ==1 && gameboard[y+2][x-2]==1 && gameboard[y+3][x-3]==1 && gameboard[y+4][x-4]==2)
	{
		gameboard[y+1][x-1] =2;
		gameboard[y+2][x-2]= 2;
		gameboard[y+3][x-3]=2;
		flipnum2_southwest +=3;
	}
	
	else if(gameboard[y+1][x-1] ==1 && gameboard[y+2][x-2]==1 && gameboard[y+3][x-3]==1 && gameboard[y+4][x-4]==1 && gameboard[y+5][x-5]==2)
	{
		gameboard[y+1][x-1] =2;
		gameboard[y+2][x-2]= 2;
		gameboard[y+3][x-3]=2;
		gameboard[y+4][x-4]=2;
		flipnum2_southwest +=4;
	}
	
	else
	   flipnum2_southwest = 0;
} //������ 8���� ������ ���� 




int main(int argc, char *argv[]) {
	
	int gameboard [N][N]= {
	{0,0,0,0,0,0},
	{0,0,0,0,0,0},
	{0,0,1,2,0,0},
	{0,0,2,1,0,0},
	{0,0,0,0,0,0},
	{0,0,0,0,0,0}
	};
	
	int x,y;
	int i,j;
	int turn = 1;
	int white = 1;
	int black = 2; 
	
	int flip1_number;
	int flip2_number;
	
	int count_black;
	int count_white;
	
	int total_black;
	int total_white;
	
    int Gameend_check;
	int a,b;
	
	
	printf("white is number1, black is number2, empty space is 0\n");//������ �Ͼ���� ���ڷ� �����. 
	printf("Refer to the following coordinate of gameboard.\n"); 
	printf("\n");
	printf("[0][0] [0][1] [0][2] [0][3] [0][4] [0][5]\n");
	printf("[1][0] [1][1] [1][2] [1][3] [1][4] [1][5]\n");
	printf("[2][0] [2][1] [2][2] [2][3] [2][4] [2][5]\n");
	printf("[3][0] [3][1] [3][2] [3][3] [3][4] [3][5]\n");
	printf("[4][0] [4][1] [4][2] [4][3] [4][4] [4][5]\n");
	printf("[5][0] [5][1] [5][2] [5][3] [5][4] [5][5]\n"); //gameboard �� ��ǥ (othello��ġ �Է��� �� �򰥸� ������) 
	printf("\n");
	printf("\n");
	
	
	for(a=0;a<N; a++)
	    {
		   for(b=0; b<N; b++)
		
		   if(gameboard[a][b]!=0)
	       
		      Gameend_check++;    
	    } //�����ǿ� ���� ������ ���� ���� ����. ���Ŀ� �� ���� ���� ����ǰԲ� �� �� 
	     
	
	while(Gameend_check == N*N)
	
	{
		if (turn==1)  //�Ͼ�� ���� ���� ���� 
		{  
		     /*flip�� �Ұ����� ��� turn�� 2�� �ٲ� */
			for(x=0;x<N;x++)
		    {
		    	for(y=0;y<N;y++)
		    	if (flipnum_east == 0 || flipnum_west == 0 || flipnum_north == 0 || flipnum_south == 0 || 
				    flipnum_northeast == 0 || flipnum_northwest == 0 || flipnum_southeast == 0 || flipnum_southwest == 0 ) 
		            turn =2;
			}
	       
	          printf("There is no space available for new white othello.\n");
              printf("So the turn goes to black player.\n");
	 
            /*flip�� ������ ���*/ 
            printf("This is current state.\n");
		 
            for(i=0; i<N; i++)
            {
    	       for(j=0; j<N; j++)
    	       printf("%d", gameboard[i][j]);
    	       printf("\n");
	        } //������ ���  
	     
	       for(i=0;i<N;i++)
           {
    	    for(j=0;j<N;j++)
    	
    	    if(gameboard [i][j] ==1)
    	    
    		  count_white++;
		
    	     else if(gameboard [i][j] ==2)
    	
    		 count_black++;
		   } 
		
		   printf("Current number of White Othello is %d\n", count_white); //���� ���� �Ͼᵹ ���� 
           printf("Current number of Black Othello is %d\n", count_black); //������ �� �Ͼ�� �� ���� ���� Ȯ �� 
           printf("\n");
        

		   printf("Put new white(1) othello.\n");
	       scanf("%d %d", &y,&x); //��ǥ�Է� �� ��
		
	    
		  if (x<0 || X>5 || y<0 || y<5)
	    	printf("Wrong coordinate. Try again: \n");
			scanf("%d %d", &y,&x);
			
		  else if(gameboard[y][x] !=0) 
		    printf("Already occupied. Try again: \n");
		    scanf("%d %d", &y,&x);
		     
		  else if(flipnum1_east == 0 || flipnum1_west == 0 || flipnum1_north == 0 || flipnum1_south == 0 || 
				    flipnum1_northeast == 0 || flipnum1_northwest == 0 || flipnum1_southeast == 0 || flipnum1_southwest == 0 ) 
		    printf("No possible flip. Try again: \n");
		    scanf("%d %d", &y, &x); //��ǥ �Է¿� ������ ���� ���, �ٽ� �ޱ� 
		    
		    
		
		    /*�÷��̾ �Է��� ���� flip�� �����ϴٸ�, flip �ϰ� �� Ƚ�� ���*/
		    //flip �϶�°� �Է��ؾ��ϴµ�... 
		    flip1_number = flipnum1_east + flipnum1_west + flipnum1_north + flipnum1_south + flipnum1_northeast + flipnum1_northwest + flipnum1_southeast + flipnum1_southwest;
		
		    printf("Result of this turn.\n");
		
		    for(i=0; i<N; i++)
            {
    	   for(j=0; j<N; j++)
    	     printf("%d", gameboard[i][j]);
    	     printf("\n");
	        }
	     
		    printf("East: %d, West: %d, North: %d, South: %d, Northeast: %d, Northwest: %d, Southeast: %d, Southwest: %d\n", 
		    flipnum1_east, flipnum1_west, flipnum1_north, flipnum1_south, flipnum1_northeast, flipnum1_northwest, flipnum1_southeast, flipnum1_southwest);
		
	 	    printf("you have flipped %d othellos\n", flip1_number); 
		
		
		 turn ++; //������ �� �� �� �� �Ѿ�� 
	    
	    }
	    
	
	    
	    
	    
	    
	    
	     if (turn== 2)  //������ ���� ���� ���� 
         {
         	 /*flip�� �Ұ����� ��� turn�� 2�� �ٲ� */
			for(x=0;x<N;x++)
		    {
		    	for(y=0;y<N;y++)
		    	if (flipnum_east == 0 || flipnum_west == 0 || flipnum_north == 0 || flipnum_south == 0 || 
				    flipnum_northeast == 0 || flipnum_northwest == 0 || flipnum_southeast == 0 || flipnum_southwest == 0 ) 
		            turn =1;
			}
	       
	          printf("There is no space available for new black othello.\n");
              printf("So the turn goes to white player.\n");
	 
            /*flip�� ������ ���*/ 
            printf("This is current state.\n");
		 
            for(i=0; i<N; i++)
            {
    	       for(j=0; j<N; j++)
    	       printf("%d", gameboard[i][j]);
    	       printf("\n");
	        } //������ ���  
	     
	       for(i=0;i<N;i++)
           {
    	    for(j=0;j<N;j++)
    	
    	    if(gameboard [i][j] ==1)
    	    
    		  count_white++;
		
    	     else if(gameboard [i][j] ==2)
    	
    		 count_black++;
		   } 
		
		   printf("Current number of White Othello is %d\n", count_white); //���� ���� �Ͼᵹ ���� 
           printf("Current number of Black Othello is %d\n", count_black); //������ �� �Ͼ�� �� ���� ���� Ȯ �� 
           printf("\n");
        

		   printf("Put new black(2) othello.\n");
	       scanf("%d %d", &y,&x); //��ǥ�Է� �� ��
		
	    
		  if (x<0 || X>5 || y<0 || y<5)
	    	printf("Wrong coordinate. Try again: \n");
			scanf("%d %d", &y,&x);
			
		  else if(gameboard[y][x] !=0) 
		    printf("Already occupied. Try again: \n");
		    scanf("%d %d", &y,&x);
		     
		  else if(flipnum1_east == 0 || flipnum1_west == 0 || flipnum1_north == 0 || flipnum1_south == 0 || 
				    flipnum1_northeast == 0 || flipnum1_northwest == 0 || flipnum1_southeast == 0 || flipnum1_southwest == 0 ) 
		    printf("No possible flip. Try again: \n");
		    scanf("%d %d", &y, &x); //��ǥ �Է¿� ������ ���� ���, �ٽ� �ޱ� 
		    
		    
		
		    /*�÷��̾ �Է��� ���� flip�� �����ϴٸ�, flip �ϰ� �� Ƚ�� ���*/
		    //flip �϶�°� �Է��ؾ��ϴµ�... 
		    flip2_number = flipnum2_east + flipnum2_west + flipnum2_north + flipnum2_south + flipnum2_northeast + flipnum2_northwest + flipnum2_southeast + flipnum2_southwest;
		
		    printf("Result of this turn.\n");
		
		    for(i=0; i<N; i++)
            {
    	   for(j=0; j<N; j++)
    	     printf("%d", gameboard[i][j]);
    	     printf("\n");
	        }
	     
		    printf("East: %d, West: %d, North: %d, South: %d, Northeast: %d, Northwest: %d, Southeast: %d, Southwest: %d\n", 
		    flipnum2_east, flipnum2_west, flipnum2_north, flipnum2_south, flipnum2_northeast, flipnum2_northwest, flipnum2_southeast, flipnum2_southwest);
		
	 	    printf("you have flipped %d othellos\n", flip2_number); 
		
		
		 turn --; //�Ͼ�� �� ���ʷ� �Ѿ�� 
		 }
	
	
	
	
	
	
	/*���� ���� �̰���� ��� Ȯ��*/ 
    for(i=0;i<N;i++)
    {
    	for(j=0;j<N;j++)
    	
    	if(gameboard [i][j] ==1)
    	{
    		total_white++;
		}
		else if(gameboard [i][j] ==2)
    	{
    		total_black++;
		}
	}
	
	printf("Total number of White Othello is %d\n", total_white);	
    printf("Total number of Black Othello is %d\n", total_black); //������ �� �Ͼ�� �� ���� ���� Ȯ �� 
		
    if(total_white > total_black)
	{
		printf("White win\n");
	}  
	
    else if(total_black > total_white)
	{
		printf("Black win\n");
	}
      
    else 
	{
		printf("There is no winner or loser\n");
	} //���� �� �� 
	
	return 0;
}
