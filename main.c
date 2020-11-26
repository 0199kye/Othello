#include <stdio.h>
#include <stdlib.h>
#define N 6

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int flipwhite(int gameboard[N][N], int y, int x)
{
	if(gameboard[y][x+1] ==2 && gameboard[y][x+2]==1)
	{
		gameboard[y][x+1]=1;
	}
	
	else if(gameboard[y][x+1] ==2 && gameboard[y][x+2]==2 && gameboard[y][x+3]==1)
	{
		gameboard[y][x+1]=1;
		gameboard[y][x+2]=1;
	}
	
	else if(gameboard[y][x+1] ==2 && gameboard[y][x+2]==2 && gameboard[y][x+3]==2 && gameboard[y][x+4]==1)
	{
		gameboard[y][x+1]=1;
		gameboard[y][x+2]=1;
		gameboard[y][x+3]=1;
	}
	
	else if(gameboard[y][x+1] ==2 && gameboard[y][x+2]==2 && gameboard[y][x+3]==2 && gameboard[y][x+4]==2 && gameboard[y][x+5]==1)
	{
		gameboard[y][x+1]=1;
		gameboard[y][x+2]=1;
		gameboard[y][x+3]=1;
		gameboard[y][x+4]=1;
	}
	
	else if(gameboard[y][x-1] ==2 && gameboard[y][x-2]==1)
	{
		gameboard[y][x-1]=1;
	}
	
	else if(gameboard[y][x-1] ==2 && gameboard[y][x-2]==2 && gameboard[y][x-3]==1)
	{
		gameboard[y][x-1] =1;
		gameboard[y][x-2] =1;
	}
	
	else if(gameboard[y][x-1] ==2 && gameboard[y][x-2]==2 && gameboard[y][x-3]==2 && gameboard[y][x-4]==1)
	{
		gameboard[y][x-1] =1;
		gameboard[y][x-2] =1;
		gameboard[y][x-3] =1;
	}
	
	else if(gameboard[y][x-1] ==2 && gameboard[y][x-2]==2 && gameboard[y][x-3]==2 && gameboard[y][x-4]==2 && gameboard[y][x-5]==1)
	{
		gameboard[y][x-1]=1;
		gameboard[y][x-2]=1;
		gameboard[y][x-3]=1;
		gameboard[y][x-4]=1;
	}
	
	else if(gameboard[y-1][x] ==2 && gameboard[y-2][x]==1)
	{
		gameboard[y-1][x]=1;
	}
	
	else if(gameboard[y-1][x] ==2 && gameboard[y-2][x]==2 && gameboard[y-3][x]==1)
	{
		gameboard[y-1][x] =1;
		gameboard[y-2][x]=1;
	}
	
	else if(gameboard[y-1][x] ==2 && gameboard[y-2][x]==2 && gameboard[y-3][x]==2 && gameboard[y-4][x]==1)
	{
		gameboard[y-1][x] =1;
		gameboard[y-2][x]=1;
		gameboard[y-3][x]=1;
	}
	
	else if(gameboard[y-1][x] ==2 && gameboard[y-2][x]==2 && gameboard[y-3][x]==2 && gameboard[y-4][x]==2 && gameboard[y-5][x]==1)
	{
		gameboard[y-1][x] =1;
		gameboard[y-2][x]=1;
		gameboard[y-3][x]=1;
		gameboard[y-4][x]=1; 
	}
	
	else if(gameboard[y+1][x] ==2 && gameboard[y+2][x]==1)
	{
		gameboard[y+1][x]=1;
	}
	
	else if(gameboard[y+1][x] ==2 && gameboard[y+2][x]==2 && gameboard[y+3][x]==1)
	{
		gameboard[y+1][x] =1;
		gameboard[y+2][x]=1;
	}
	
	else if(gameboard[y+1][x] ==2 && gameboard[y+2][x]==2 && gameboard[y+3][x]==2 && gameboard[y+4][x]==1)
	{
		gameboard[y+1][x] =1;
		gameboard[y+2][x]=1;
		gameboard[y+3][x]=1;
	}
	
	else if(gameboard[y+1][x] ==2 && gameboard[y+2][x]==2 && gameboard[y+3][x]==2 && gameboard[y+4][x]==2 && gameboard[y+5][x]==1 )
	{
		gameboard[y+1][x] =1;
		gameboard[y+2][x]=1;
		gameboard[y+3][x]=1;
		gameboard[y+4][x]=1; 
	}
	
	else if(gameboard[y-1][x+1] ==2 && gameboard[y-2][x+2]==1)
	{
		gameboard[y-1][x+1]=1;
	}
	
	else if(gameboard[y-1][x+1] ==2 && gameboard[y-2][x+2]==2 && gameboard[y-3][x+3]==1)
	{
		gameboard[y-1][x+1] =1;
		gameboard[y-2][x+2]= 1;
	}
	
	else if(gameboard[y-1][x+1] ==2 && gameboard[y-2][x+2]==2 && gameboard[y-3][x+3]==2 && gameboard[y-4][x+4]==1)
	{
		gameboard[y-1][x+1] =1;
		gameboard[y-2][x+2]= 1;
		gameboard[y-3][x+3]=1;
	}
	
	else if(gameboard[y-1][x+1] ==2 && gameboard[y-2][x+2]==2 && gameboard[y-3][x+3]==2 && gameboard[y-4][x+4]==2 && gameboard[y-5][x+5]==1)
	{
		gameboard[y-1][x+1] =1;
		gameboard[y-2][x+2]= 1;
		gameboard[y-3][x+3]=1;
		gameboard[y-4][x+4]=1;
	}

	else if(gameboard[y-1][x-1] ==2 && gameboard[y-2][x-2]==1)
	{
		gameboard[y-1][x-1]=1;
	}
	
	else if(gameboard[y-1][x-1] ==2 && gameboard[y-2][x-2]==2 && gameboard[y-3][x-3]==1)
	{
		gameboard[y-1][x-1] =1;
		gameboard[y-2][x-2]= 1;
	}
	
	else if(gameboard[y-1][x-1] ==2 && gameboard[y-2][x-2]==2 && gameboard[y-3][x-3]==2 && gameboard[y-4][x-4]==1)
	{
		gameboard[y-1][x-1] =1;
		gameboard[y-2][x-2]= 1;
		gameboard[y-3][x-3]=1;
	}
	
	else if(gameboard[y-1][x-1] ==2 && gameboard[y-2][x-2]==2 && gameboard[y-3][x-3]==2 && gameboard[y-4][x-4]==2 && gameboard[y-5][x-5]==1)
	{
		gameboard[y-1][x-1] =1;
		gameboard[y-2][x-2]= 1;
		gameboard[y-3][x-3]=1;
		gameboard[y-4][x-4]=1;
	}

	if(gameboard[y+1][x+1] ==2 && gameboard[y+2][x+2]==1)
	{
		gameboard[y+1][x+1]=1;
	}
	
	else if(gameboard[y+1][x+1] ==2 && gameboard[y+2][x+2]==2 && gameboard[y+3][x+3]==1)
	{
		gameboard[y+1][x+1] =1;
		gameboard[y+2][x+2]= 1;
	}
	
	else if(gameboard[y+1][x+1] ==2 && gameboard[y+2][x+2]==2 && gameboard[y+3][x+3]==2 && gameboard[y+4][x+4]==1)
	{
		gameboard[y+1][x+1] =1;
		gameboard[y+2][x+2]= 1;
		gameboard[y+3][x+3]=1;
	}
	
	else if(gameboard[y+1][x+1] ==2 && gameboard[y+2][x+2]==2 && gameboard[y+3][x+3]==2 && gameboard[y+4][x+4]==2 && gameboard[y+5][x+5]==1)
	{
		gameboard[y+1][x+1] =1;
		gameboard[y+2][x+2]= 1;
		gameboard[y+3][x+3]=1;
		gameboard[y+4][x+4]=1;
	}
	
	else if(gameboard[y+1][x-1] ==2 && gameboard[y+2][x-2]==1)
	{
		gameboard[y+1][x-1]=1;
	}
	
	else if(gameboard[y+1][x-1] ==2 && gameboard[y+2][x-2]==2 && gameboard[y+3][x-3]==1)
	{
		gameboard[y+1][x-1] =1;
		gameboard[y+2][x-2]= 1;
	}
	
	else if(gameboard[y+1][x-1] ==2 && gameboard[y+2][x-2]==2 && gameboard[y+3][x-3]==2 && gameboard[y+4][x-4]==1)
	{
		gameboard[y+1][x-1] =1;
		gameboard[y+2][x-2]= 1;
		gameboard[y+3][x-3]=1;
	}
	
	else if(gameboard[y+1][x-1] ==2 && gameboard[y+2][x-2]==2 && gameboard[y+3][x-3]==2 && gameboard[y+4][x-4]==2 && gameboard[y+5][x-5]==1)
	{
		gameboard[y+1][x-1] =1;
		gameboard[y+2][x-2]= 1;
		gameboard[y+3][x-3]=1;
		gameboard[y+4][x-4]=1;
	}
	return gameboard[N][N];
}

int nflipwhite_east(int gameboard[N][N], int y, int x)
{
	int flipnum;
	
	if(gameboard[y][x+1] ==2 && gameboard[y][x+2]==1)
	{
		gameboard[y][x+1]=1;
		flipnum +=1;
	}
	
	else if(gameboard[y][x+1] ==2 && gameboard[y][x+2]==2 && gameboard[y][x+3]==1)
	{
		gameboard[y][x+1]=1;
		gameboard[y][x+2]=1;
		flipnum +=2;
	}
	
	else if(gameboard[y][x+1] ==2 && gameboard[y][x+2]==2 && gameboard[y][x+3]==2 && gameboard[y][x+4]==1)
	{
		gameboard[y][x+1]=1;
		gameboard[y][x+2]=1;
		gameboard[y][x+3]=1;
		flipnum+=3;
	}
	
	else if(gameboard[y][x+1] ==2 && gameboard[y][x+2]==2 && gameboard[y][x+3]==2 && gameboard[y][x+4]==2 && gameboard[y][x+5]==1)
	{
		gameboard[y][x+1]=1;
		gameboard[y][x+2]=1;
		gameboard[y][x+3]=1;
		gameboard[y][x+4]=1;
		flipnum+=4;
	}
	
	else 
	   flipnum = 0;
	   
	return flipnum;
} 


int nflipwhite_west(int gameboard[N][N], int y, int x)
{
	int flipnum;
	
	if(gameboard[y][x-1] ==2 && gameboard[y][x-2]==1)
	{
		gameboard[y][x-1]=1;
		flipnum+=1;
	}
	
	else if(gameboard[y][x-1] ==2 && gameboard[y][x-2]==2 && gameboard[y][x-3]==1)
	{
		gameboard[y][x-1] =1;
		gameboard[y][x-2] =1;
		flipnum+=2;
	}
	
	else if(gameboard[y][x-1] ==2 && gameboard[y][x-2]==2 && gameboard[y][x-3]==2 && gameboard[y][x-4]==1)
	{
		gameboard[y][x-1] =1;
		gameboard[y][x-2] =1;
		gameboard[y][x-3] =1;
		flipnum+=3;
	}
	
	else if(gameboard[y][x-1] ==2 && gameboard[y][x-2]==2 && gameboard[y][x-3]==2 && gameboard[y][x-4]==2 && gameboard[y][x-5]==1)
	{
		gameboard[y][x-1]=1;
		gameboard[y][x-2]=1;
		gameboard[y][x-3]=1;
		gameboard[y][x-4]=1;
		flipnum +=4;
	}
	
	else
	   flipnum= 0;
	   
	return flipnum;
} 



int nflipwhite_north(int gameboard[N][N], int y, int x)
{
	int flipnum;
	
	if(gameboard[y-1][x] ==2 && gameboard[y-2][x]==1)
	{
		gameboard[y-1][x]=1;
		flipnum +=1;
	}
	
	else if(gameboard[y-1][x] ==2 && gameboard[y-2][x]==2 && gameboard[y-3][x]==1)
	{
		gameboard[y-1][x] =1;
		gameboard[y-2][x]=1;
		flipnum+=2;
	}
	
	else if(gameboard[y-1][x] ==2 && gameboard[y-2][x]==2 && gameboard[y-3][x]==2 && gameboard[y-4][x]==1)
	{
		gameboard[y-1][x] =1;
		gameboard[y-2][x]=1;
		gameboard[y-3][x]=1;
		flipnum +=3;
	}
	
	else if(gameboard[y-1][x] ==2 && gameboard[y-2][x]==2 && gameboard[y-3][x]==2 && gameboard[y-4][x]==2 && gameboard[y-5][x]==1)
	{
		gameboard[y-1][x] =1;
		gameboard[y-2][x]=1;
		gameboard[y-3][x]=1;
		gameboard[y-4][x]=1; 
		flipnum+=4;
	}
	
	else
	   flipnum= 0;
	   
	return flipnum;
} 


int nflipwhite_south(int gameboard[N][N], int y, int x)
{
	int flipnum;
	
	if(gameboard[y+1][x] ==2 && gameboard[y+2][x]==1)
	{
		gameboard[y+1][x]=1;
		flipnum+=1;
	}
	
	else if(gameboard[y+1][x] ==2 && gameboard[y+2][x]==2 && gameboard[y+3][x]==1)
	{
		gameboard[y+1][x] =1;
		gameboard[y+2][x]=1;
		flipnum+=2;
	}
	
	else if(gameboard[y+1][x] ==2 && gameboard[y+2][x]==2 && gameboard[y+3][x]==2 && gameboard[y+4][x]==1)
	{
		gameboard[y+1][x] =1;
		gameboard[y+2][x]=1;
		gameboard[y+3][x]=1;
		flipnum+=3;
	}
	
	else if(gameboard[y+1][x] ==2 && gameboard[y+2][x]==2 && gameboard[y+3][x]==2 && gameboard[y+4][x]==2 && gameboard[y+5][x]==1 )
	{
		gameboard[y+1][x] =1;
		gameboard[y+2][x]=1;
		gameboard[y+3][x]=1;
		gameboard[y+4][x]=1; 
		flipnum+=4;
	}
	
	else
	   flipnum= 0;
	   
	return flipnum;
} 

int nflipwhite_northeast(int gameboard[N][N], int y, int x)
{
	int flipnum;
	
	if(gameboard[y-1][x+1] ==2 && gameboard[y-2][x+2]==1)
	{
		gameboard[y-1][x+1]=1;
		flipnum +=1;
	}
	
	else if(gameboard[y-1][x+1] ==2 && gameboard[y-2][x+2]==2 && gameboard[y-3][x+3]==1)
	{
		gameboard[y-1][x+1] =1;
		gameboard[y-2][x+2]= 1;
		flipnum+=2;
	}
	
	else if(gameboard[y-1][x+1] ==2 && gameboard[y-2][x+2]==2 && gameboard[y-3][x+3]==2 && gameboard[y-4][x+4]==1)
	{
		gameboard[y-1][x+1] =1;
		gameboard[y-2][x+2]= 1;
		gameboard[y-3][x+3]=1;
		flipnum +=3;
	}
	
	else if(gameboard[y-1][x+1] ==2 && gameboard[y-2][x+2]==2 && gameboard[y-3][x+3]==2 && gameboard[y-4][x+4]==2 && gameboard[y-5][x+5]==1)
	{
		gameboard[y-1][x+1] =1;
		gameboard[y-2][x+2]= 1;
		gameboard[y-3][x+3]=1;
		gameboard[y-4][x+4]=1;
		flipnum +=4;
	}
	
	else
	   flipnum = 0;
	   
	return flipnum;
} 

int nflipwhite_northwest(int gameboard[N][N], int y, int x)
{
	int flipnum;
	
	if(gameboard[y-1][x-1] ==2 && gameboard[y-2][x-2]==1)
	{
		gameboard[y-1][x-1]=1;
		flipnum +=1;
	}
	
	else if(gameboard[y-1][x-1] ==2 && gameboard[y-2][x-2]==2 && gameboard[y-3][x-3]==1)
	{
		gameboard[y-1][x-1] =1;
		gameboard[y-2][x-2]= 1;
		flipnum+=2;
	}
	
	else if(gameboard[y-1][x-1] ==2 && gameboard[y-2][x-2]==2 && gameboard[y-3][x-3]==2 && gameboard[y-4][x-4]==1)
	{
		gameboard[y-1][x-1] =1;
		gameboard[y-2][x-2]= 1;
		gameboard[y-3][x-3]=1;
		flipnum +=3;
	}
	
	else if(gameboard[y-1][x-1] ==2 && gameboard[y-2][x-2]==2 && gameboard[y-3][x-3]==2 && gameboard[y-4][x-4]==2 && gameboard[y-5][x-5]==1)
	{
		gameboard[y-1][x-1] =1;
		gameboard[y-2][x-2]= 1;
		gameboard[y-3][x-3]=1;
		gameboard[y-4][x-4]=1;
		flipnum +=4;
	}
	
	else
	   flipnum= 0;
	   
	return flipnum;
} 


int nflipwhite_southeast(int gameboard[N][N], int y, int x)
{
	int flipnum;
	
	if(gameboard[y+1][x+1] ==2 && gameboard[y+2][x+2]==1)
	{
		gameboard[y+1][x+1]=1;
		flipnum+=1;
	}
	
	else if(gameboard[y+1][x+1] ==2 && gameboard[y+2][x+2]==2 && gameboard[y+3][x+3]==1)
	{
		gameboard[y+1][x+1] =1;
		gameboard[y+2][x+2]= 1;
		flipnum +=2;
	}
	
	else if(gameboard[y+1][x+1] ==2 && gameboard[y+2][x+2]==2 && gameboard[y+3][x+3]==2 && gameboard[y+4][x+4]==1)
	{
		gameboard[y+1][x+1] =1;
		gameboard[y+2][x+2]= 1;
		gameboard[y+3][x+3]=1;
		flipnum+=3;
	}
	
	else if(gameboard[y+1][x+1] ==2 && gameboard[y+2][x+2]==2 && gameboard[y+3][x+3]==2 && gameboard[y+4][x+4]==2 && gameboard[y+5][x+5]==1)
	{
		gameboard[y+1][x+1] =1;
		gameboard[y+2][x+2]= 1;
		gameboard[y+3][x+3]=1;
		gameboard[y+4][x+4]=1;
		flipnum+=4;
	}
	
	else
	   flipnum= 0;
	   
	return flipnum;
} 


int nflipwhite_southwest(int gameboard[N][N], int y, int x)
{
	int flipnum;
	
	if(gameboard[y+1][x-1] ==2 && gameboard[y+2][x-2]==1)
	{
		gameboard[y+1][x-1]=1;
		flipnum +=1;
	}
	
	else if(gameboard[y+1][x-1] ==2 && gameboard[y+2][x-2]==2 && gameboard[y+3][x-3]==1)
	{
		gameboard[y+1][x-1] =1;
		gameboard[y+2][x-2]= 1;
		flipnum+=2;
	}
	
	else if(gameboard[y+1][x-1] ==2 && gameboard[y+2][x-2]==2 && gameboard[y+3][x-3]==2 && gameboard[y+4][x-4]==1)
	{
		gameboard[y+1][x-1] =1;
		gameboard[y+2][x-2]= 1;
		gameboard[y+3][x-3]=1;
		flipnum +=3;
	}
	
	else if(gameboard[y+1][x-1] ==2 && gameboard[y+2][x-2]==2 && gameboard[y+3][x-3]==2 && gameboard[y+4][x-4]==2 && gameboard[y+5][x-5]==1)
	{
		gameboard[y+1][x-1] =1;
		gameboard[y+2][x-2]= 1;
		gameboard[y+3][x-3]=1;
		gameboard[y+4][x-4]=1;
		flipnum +=4;
	}
	
	else
	   flipnum = 0;
	   
	return flipnum;
}//하얀색 8방향에 대한 뒤집기 과 뒤집힌 돌 개수 세기 

int flipblack(int gameboard[N][N], int y, int x)
{
	
	if(gameboard[y][x+1] ==1 && gameboard[y][x+2]==2)
	{
		gameboard[y][x+1]=2;
	}
	
	else if(gameboard[y][x+1] ==1 && gameboard[y][x+2]==1 && gameboard[y][x+3]==2)
	{
		gameboard[y][x+1]=2;
		gameboard[y][x+2]=2;
	}
	
	else if(gameboard[y][x+1] ==1 && gameboard[y][x+2]==1 && gameboard[y][x+3]==1 && gameboard[y][x+4]==2)
	{
		gameboard[y][x+1]=2;
		gameboard[y][x+2]=2;
		gameboard[y][x+3]=2;
	}
	
	else if(gameboard[y][x+1] ==1 && gameboard[y][x+2]==1 && gameboard[y][x+3]==1 && gameboard[y][x+4]==1 && gameboard[y][x+5]==2)
	{
		gameboard[y][x+1]=2;
		gameboard[y][x+2]=2;
		gameboard[y][x+3]=2;
		gameboard[y][x+4]=2;
	}
	
	
	else if(gameboard[y][x-1] ==1 && gameboard[y][x-2]==2)
	{
		gameboard[y][x-1]=2;
	}
	
	else if(gameboard[y][x-1] ==1 && gameboard[y][x-2]==1 && gameboard[y][x-3]==2)
	{
		gameboard[y][x-1] =2;
		gameboard[y][x-2] =2;
	}
	
	else if(gameboard[y][x-1] ==1 && gameboard[y][x-2]==1 && gameboard[y][x-3]==1 && gameboard[y][x-4]==2)
	{
		gameboard[y][x-1] =2;
		gameboard[y][x-2] =2;
		gameboard[y][x-3] =2;
	}
	
	else if(gameboard[y][x-1] ==1 && gameboard[y][x-2]==1 && gameboard[y][x-3]==1 && gameboard[y][x-4]==1 && gameboard[y][x-5]==2)
	{
		gameboard[y][x-1]=2;
		gameboard[y][x-2]=2;
		gameboard[y][x-3]=2;
		gameboard[y][x-4]=2;
	}
	
	else if(gameboard[y-1][x] ==1 && gameboard[y-2][x]==2)
	{
		gameboard[y-1][x]=2;
	}
	
	else if(gameboard[y-1][x] ==1 && gameboard[y-2][x]==1 && gameboard[y-3][x]==2)
	{
		gameboard[y-1][x] =2;
		gameboard[y-2][x]=2;
	}
	
	else if(gameboard[y-1][x] ==1 && gameboard[y-2][x]==1 && gameboard[y-3][x]==1 && gameboard[y-4][x]==2)
	{
		gameboard[y-1][x] =2;
		gameboard[y-2][x]=2;
		gameboard[y-3][x]=2;
	}
	
	else if(gameboard[y-1][x] ==1 && gameboard[y-2][x]==1 && gameboard[y-3][x]==1 && gameboard[y-4][x]==1 && gameboard[y-5][x]==2)
	{
		gameboard[y-1][x] =2;
		gameboard[y-2][x]=2;
		gameboard[y-3][x]=2;
		gameboard[y-4][x]=2;
	}
	
	
	else if(gameboard[y+1][x] ==1 && gameboard[y+2][x]==2)
	{
		gameboard[y+1][x]=2;
	}
	
	else if(gameboard[y+1][x] ==1 && gameboard[y+2][x]==1 && gameboard[y+3][x]==2)
	{
		gameboard[y+1][x] =2;
		gameboard[y+2][x]=2;
	}
	
	else if(gameboard[y+1][x] ==1 && gameboard[y+2][x]==1 && gameboard[y+3][x]==1 && gameboard[y+4][x]==2)
	{
		gameboard[y+1][x] =2;
		gameboard[y+2][x]=2;
		gameboard[y+3][x]=2;
	}
	
	else if(gameboard[y+1][x] ==1 && gameboard[y+2][x]==1 && gameboard[y+3][x]==1 && gameboard[y+4][x]==1 && gameboard[y+5][x]==2 )
	{
		gameboard[y+1][x] =2;
		gameboard[y+2][x]=2;
		gameboard[y+3][x]=2;
		gameboard[y+4][x]=2; 
	}
	
	
	else if(gameboard[y-1][x+1] ==1 && gameboard[y-2][x+2]==2)
	{
		gameboard[y-1][x+1]=2;
	}
	
	else if(gameboard[y-1][x+1] ==1 && gameboard[y-2][x+2]==1 && gameboard[y-3][x+3]==2)
	{
		gameboard[y-1][x+1] =2;
		gameboard[y-2][x+2]= 2;
	}
	
	else if(gameboard[y-1][x+1] ==1 && gameboard[y-2][x+2]==1 && gameboard[y-3][x+3]==1 && gameboard[y-4][x+4]==2)
	{
		gameboard[y-1][x+1] =2;
		gameboard[y-2][x+2]= 2;
		gameboard[y-3][x+3]=2;
	}
	
	else if(gameboard[y-1][x+1] ==1 && gameboard[y-2][x+2]==1 && gameboard[y-3][x+3]==1 && gameboard[y-4][x+4]==1 && gameboard[y-5][x+5]==2)
	{
		gameboard[y-1][x+1] =2;
		gameboard[y-2][x+2]= 2;
		gameboard[y-3][x+3]=2;
		gameboard[y-4][x+4]=2;
	}

	else if(gameboard[y-1][x-1] ==1 && gameboard[y-2][x-2]==2)
	{
		gameboard[y-1][x-1]=2;
	}
	
	else if(gameboard[y-1][x-1] ==1 && gameboard[y-2][x-2]==1 && gameboard[y-3][x-3]==2)
	{
		gameboard[y-1][x-1] =2;
		gameboard[y-2][x-2]= 2;
	}
	
	else if(gameboard[y-1][x-1] ==1 && gameboard[y-2][x-2]==1 && gameboard[y-3][x-3]==1 && gameboard[y-4][x-4]==2)
	{
		gameboard[y-1][x-1] =2;
		gameboard[y-2][x-2]= 2;
		gameboard[y-3][x-3]=2;
	}
	
	else if(gameboard[y-1][x-1] ==1 && gameboard[y-2][x-2]==1 && gameboard[y-3][x-3]==1 && gameboard[y-4][x-4]==1 && gameboard[y-5][x-5]==2)
	{
		gameboard[y-1][x-1] =2;
		gameboard[y-2][x-2]= 2;
		gameboard[y-3][x-3]=2;
		gameboard[y-4][x-4]=2;
	}
	
    
	else if(gameboard[y+1][x+1] ==1 && gameboard[y+2][x+2]==2)
	{
		gameboard[y+1][x+1]=1;
	}
	
	else if(gameboard[y+1][x+1] ==1 && gameboard[y+2][x+2]==1 && gameboard[y+3][x+3]==2)
	{
		gameboard[y+1][x+1] =2;
		gameboard[y+2][x+2]= 2;
	}
	
	else if(gameboard[y+1][x+1] ==1 && gameboard[y+2][x+2]==1 && gameboard[y+3][x+3]==1 && gameboard[y+4][x+4]==2)
	{
		gameboard[y+1][x+1] =2;
		gameboard[y+2][x+2]= 2;
		gameboard[y+3][x+3]=2;
	}
	
	else if(gameboard[y+1][x+1] ==1 && gameboard[y+2][x+2]==1 && gameboard[y+3][x+3]==1 && gameboard[y+4][x+4]==1 && gameboard[y+5][x+5]==2)
	{
		gameboard[y+1][x+1] =2;
		gameboard[y+2][x+2]= 2;
		gameboard[y+3][x+3]=2;
		gameboard[y+4][x+4]=2;
	}
   
	
    else if(gameboard[y+1][x-1] ==1 && gameboard[y+2][x-2]==2)
	{
		gameboard[y+1][x-1]=2;
	}
	
	else if(gameboard[y+1][x-1] ==1 && gameboard[y+2][x-2]==1 && gameboard[y+3][x-3]==2)
	{
		gameboard[y+1][x-1] =2;
		gameboard[y+2][x-2]= 2;
	}
	
	else if(gameboard[y+1][x-1] ==1 && gameboard[y+2][x-2]==1 && gameboard[y+3][x-3]==1 && gameboard[y+4][x-4]==2)
	{
		gameboard[y+1][x-1] =2;
		gameboard[y+2][x-2]= 2;
		gameboard[y+3][x-3]=2;
	}
	
	else if(gameboard[y+1][x-1] ==1 && gameboard[y+2][x-2]==1 && gameboard[y+3][x-3]==1 && gameboard[y+4][x-4]==1 && gameboard[y+5][x-5]==2)
	{
		gameboard[y+1][x-1] =2;
		gameboard[y+2][x-2]= 2;
		gameboard[y+3][x-3]=2;
		gameboard[y+4][x-4]=2;
	}
	
	return gameboard[N][N];
}

int nflipblack_north(int gameboard[N][N], int y, int x) 
{
	int flipnum;
	
	if(gameboard[y-1][x] ==1 && gameboard[y-2][x]==2)
	{
		gameboard[y-1][x]=2;
		flipnum +=1;
	}
	
	else if(gameboard[y-1][x] ==1 && gameboard[y-2][x]==1 && gameboard[y-3][x]==2)
	{
		gameboard[y-1][x] =2;
		gameboard[y-2][x]=2;
		flipnum +=2;
	}
	
	else if(gameboard[y-1][x] ==1 && gameboard[y-2][x]==1 && gameboard[y-3][x]==1 && gameboard[y-4][x]==2)
	{
		gameboard[y-1][x] =2;
		gameboard[y-2][x]=2;
		gameboard[y-3][x]=2;
		flipnum +=3;
	}
	
	else if(gameboard[y-1][x] ==1 && gameboard[y-2][x]==1 && gameboard[y-3][x]==1 && gameboard[y-4][x]==1 && gameboard[y-5][x]==2)
	{
		gameboard[y-1][x] =2;
		gameboard[y-2][x]=2;
		gameboard[y-3][x]=2;
		gameboard[y-4][x]=2; 
		flipnum+=4;
	}
	
	else
	   flipnum = 0;
	
	return flipnum;
} 

int nflipblack_south(int gameboard[N][N], int y, int x)
{
	int flipnum;
	
	if(gameboard[y+1][x] ==1 && gameboard[y+2][x]==2)
	{
		gameboard[y+1][x]=2;
		flipnum +=1;
	}
	
	else if(gameboard[y+1][x] ==1 && gameboard[y+2][x]==1 && gameboard[y+3][x]==2)
	{
		gameboard[y+1][x] =2;
		gameboard[y+2][x]=2;
		flipnum +=2;
	}
	
	else if(gameboard[y+1][x] ==1 && gameboard[y+2][x]==1 && gameboard[y+3][x]==1 && gameboard[y+4][x]==2)
	{
		gameboard[y+1][x] =2;
		gameboard[y+2][x]=2;
		gameboard[y+3][x]=2;
		flipnum +=3;
	}
	
	else if(gameboard[y+1][x] ==1 && gameboard[y+2][x]==1 && gameboard[y+3][x]==1 && gameboard[y+4][x]==1 && gameboard[y+5][x]==2 )
	{
		gameboard[y+1][x] =2;
		gameboard[y+2][x]=2;
		gameboard[y+3][x]=2;
		gameboard[y+4][x]=2; 
		flipnum +=4;
	}
	
	else
	   flipnum = 0;
	   
	return flipnum;
} 
int nflipblack_east(int gameboard[N][N], int y, int x)
{
	int flipnum;
	
	if(gameboard[y][x+1] ==1 && gameboard[y][x+2]==2)
	{
		gameboard[y][x+1]=2;
		flipnum +=1;
	}
	
	else if(gameboard[y][x+1] ==1 && gameboard[y][x+2]==1 && gameboard[y][x+3]==2)
	{
		gameboard[y][x+1]=2;
		gameboard[y][x+2]=2;
		flipnum+=2;
	}
	
	else if(gameboard[y][x+1] ==1 && gameboard[y][x+2]==1 && gameboard[y][x+3]==1 && gameboard[y][x+4]==2)
	{
		gameboard[y][x+1]=2;
		gameboard[y][x+2]=2;
		gameboard[y][x+3]=2;
		flipnum +=3;
	}
	
	else if(gameboard[y][x+1] ==1 && gameboard[y][x+2]==1 && gameboard[y][x+3]==1 && gameboard[y][x+4]==1 && gameboard[y][x+5]==2)
	{
		gameboard[y][x+1]=2;
		gameboard[y][x+2]=2;
		gameboard[y][x+3]=2;
		gameboard[y][x+4]=2;
		flipnum+=4;
	}
	
	else
	   flipnum= 0;
	   
	return flipnum;
	
} 
int nflipblack_west(int gameboard[N][N], int y, int x)
{
	int flipnum;
	
	if(gameboard[y][x-1] ==1 && gameboard[y][x-2]==2)
	{
		gameboard[y][x-1]=2;
		flipnum +=1;
	}
	
	else if(gameboard[y][x-1] ==1 && gameboard[y][x-2]==1 && gameboard[y][x-3]==2)
	{
		gameboard[y][x-1] =2;
		gameboard[y][x-2] =2;
		flipnum +=2;
	}
	
	else if(gameboard[y][x-1] ==1 && gameboard[y][x-2]==1 && gameboard[y][x-3]==1 && gameboard[y][x-4]==2)
	{
		gameboard[y][x-1] =2;
		gameboard[y][x-2] =2;
		gameboard[y][x-3] =2;
		flipnum +=3;
	}
	
	else if(gameboard[y][x-1] ==1 && gameboard[y][x-2]==1 && gameboard[y][x-3]==1 && gameboard[y][x-4]==1 && gameboard[y][x-5]==2)
	{
		gameboard[y][x-1]=2;
		gameboard[y][x-2]=2;
		gameboard[y][x-3]=2;
		gameboard[y][x-4]=2;
		flipnum+=4;
	}
	
	else
	   flipnum = 0;
	   
	return flipnum;
} 
int nflipblack_northeast(int gameboard[N][N], int y, int x)
{
	int flipnum;
	
	if(gameboard[y-1][x+1] ==1 && gameboard[y-2][x+2]==2)
	{
		gameboard[y-1][x+1]=2;
		flipnum +=1;
	}
	
	else if(gameboard[y-1][x+1] ==1 && gameboard[y-2][x+2]==1 && gameboard[y-3][x+3]==2)
	{
		gameboard[y-1][x+1] =2;
		gameboard[y-2][x+2]= 2;
		flipnum +=2;
	}
	
	else if(gameboard[y-1][x+1] ==1 && gameboard[y-2][x+2]==1 && gameboard[y-3][x+3]==1 && gameboard[y-4][x+4]==2)
	{
		gameboard[y-1][x+1] =2;
		gameboard[y-2][x+2]= 2;
		gameboard[y-3][x+3]=2;
		flipnum +=3;
	}
	
	else if(gameboard[y-1][x+1] ==1 && gameboard[y-2][x+2]==1 && gameboard[y-3][x+3]==1 && gameboard[y-4][x+4]==1 && gameboard[y-5][x+5]==2)
	{
		gameboard[y-1][x+1] =2;
		gameboard[y-2][x+2]= 2;
		gameboard[y-3][x+3]=2;
		gameboard[y-4][x+4]=2;
		flipnum +=4;
	}
	
	else
	   flipnum = 0;
	   
	return flipnum;
} 


int nflipblack_northwest(int gameboard[N][N], int y, int x)
{

	int flipnum;
	
	if(gameboard[y-1][x-1] ==1 && gameboard[y-2][x-2]==2)
	{
		gameboard[y-1][x-1]=2;
		flipnum+=1;
	}
	
	else if(gameboard[y-1][x-1] ==1 && gameboard[y-2][x-2]==1 && gameboard[y-3][x-3]==2)
	{
		gameboard[y-1][x-1] =2;
		gameboard[y-2][x-2]= 2;
		flipnum+=2;
	}
	
	else if(gameboard[y-1][x-1] ==1 && gameboard[y-2][x-2]==1 && gameboard[y-3][x-3]==1 && gameboard[y-4][x-4]==2)
	{
		gameboard[y-1][x-1] =2;
		gameboard[y-2][x-2]= 2;
		gameboard[y-3][x-3]=2;
		flipnum+=3;
	}
	
	else if(gameboard[y-1][x-1] ==1 && gameboard[y-2][x-2]==1 && gameboard[y-3][x-3]==1 && gameboard[y-4][x-4]==1 && gameboard[y-5][x-5]==2)
	{
		gameboard[y-1][x-1] =2;
		gameboard[y-2][x-2]= 2;
		gameboard[y-3][x-3]=2;
		gameboard[y-4][x-4]=2;
		flipnum+=4;
	}
	
	else
	   flipnum = 0;
	   
	return flipnum;
} 

int nflipblack_southeast(int gameboard[N][N], int y, int x)
{
	int flipnum;
	
	if(gameboard[y+1][x+1] ==1 && gameboard[y+2][x+2]==2)
	{
		gameboard[y+1][x+1]=1;
		flipnum +=1;
	}
	
	else if(gameboard[y+1][x+1] ==1 && gameboard[y+2][x+2]==1 && gameboard[y+3][x+3]==2)
	{
		gameboard[y+1][x+1] =2;
		gameboard[y+2][x+2]= 2;
		flipnum+=2;
	}
	
	else if(gameboard[y+1][x+1] ==1 && gameboard[y+2][x+2]==1 && gameboard[y+3][x+3]==1 && gameboard[y+4][x+4]==2)
	{
		gameboard[y+1][x+1] =2;
		gameboard[y+2][x+2]= 2;
		gameboard[y+3][x+3]=2;
		flipnum +=3;
	}
	
	else if(gameboard[y+1][x+1] ==1 && gameboard[y+2][x+2]==1 && gameboard[y+3][x+3]==1 && gameboard[y+4][x+4]==1 && gameboard[y+5][x+5]==2)
	{
		gameboard[y+1][x+1] =2;
		gameboard[y+2][x+2]= 2;
		gameboard[y+3][x+3]=2;
		gameboard[y+4][x+4]=2;
		flipnum +=4;
	}
	
	else
	   flipnum = 0;
	   
	return flipnum;
} 

int nflipblack_southwest(int gameboard[N][N], int y, int x)
{
	int flipnum;
	
	if(gameboard[y+1][x-1] ==1 && gameboard[y+2][x-2]==2)
	{
		gameboard[y+1][x-1]=2;
		flipnum +=1;
	}
	
	else if(gameboard[y+1][x-1] ==1 && gameboard[y+2][x-2]==1 && gameboard[y+3][x-3]==2)
	{
		gameboard[y+1][x-1] =2;
		gameboard[y+2][x-2]= 2;
		flipnum +=2;
	}
	
	else if(gameboard[y+1][x-1] ==1 && gameboard[y+2][x-2]==1 && gameboard[y+3][x-3]==1 && gameboard[y+4][x-4]==2)
	{
		gameboard[y+1][x-1] =2;
		gameboard[y+2][x-2]= 2;
		gameboard[y+3][x-3]=2;
		flipnum +=3;
	}
	
	else if(gameboard[y+1][x-1] ==1 && gameboard[y+2][x-2]==1 && gameboard[y+3][x-3]==1 && gameboard[y+4][x-4]==1 && gameboard[y+5][x-5]==2)
	{
		gameboard[y+1][x-1] =2;
		gameboard[y+2][x-2]= 2;
		gameboard[y+3][x-3]=2;
		gameboard[y+4][x-4]=2;
		flipnum +=4;
	}
	
	else
	   flipnum = 0;
	   
	return flipnum;
} //검은색 8방향 뒤집기 조건과 뒤집히는 돌 개수 세기 




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
			
	
	printf("white is number1, black is number2, empty space is 0\n");//검은색 하얀색을 숫자로 대신함. 
	printf("Refer to the following coordinate of gameboard.\n"); 
	printf("\n");
	printf("[0][0] [0][1] [0][2] [0][3] [0][4] [0][5]\n");
	printf("[1][0] [1][1] [1][2] [1][3] [1][4] [1][5]\n");
	printf("[2][0] [2][1] [2][2] [2][3] [2][4] [2][5]\n");
	printf("[3][0] [3][1] [3][2] [3][3] [3][4] [3][5]\n");
	printf("[4][0] [4][1] [4][2] [4][3] [4][4] [4][5]\n");
	printf("[5][0] [5][1] [5][2] [5][3] [5][4] [5][5]\n"); //gameboard 판 좌표 (othello위치 입력할 때 헷갈림 방지용) 
	printf("\n");
	printf("\n");
	
	
	for(a=0;a<N; a++)
	    {
		   for(b=0; b<N; b++)
		
		   if(gameboard[a][b]!=0)
	       
		      Gameend_check++;    
	    } //게임판에 놓인 오델로 개수 세는 과정. 추후에 꽉 차면 게임 종료되게끔 설 정 
	     
	
	while(Gameend_check == N*N)
	
	{
		if (turn==1)  //하얀색 돌을 놓을 차례 
		{  
		     /*flip이 불가능한 경우 turn을 2로 바꿈 */
			for(x=0;x<N;x++)
		    {
		    	for(y=0;y<N;y++)
		    	
				 
		    	if (nflipwhite_east(gameboard[N][N], y,x) ==0 && nflipwhite_west(gameboard[N][N], y,x) ==0 && nflipwhite_north(gameboard[N][N], y,x) ==0 && 
				    nflipwhite_south(gameboard[N][N], y,x)==0 &&  nflipwhite_northeast(gameboard[N][N], y,x)==0 && nflipwhite_northwest(gameboard[N][N], y,x)==0
					 && nflipwhite_southeast(gameboard[N][N], y,x) ==0 && nflipwhite_southeast(gameboard[N][N], y,x )==0) 
				    
		            turn =2;
			}
	       
	          printf("There is no space available for new white othello.\n");
              printf("So the turn goes to black player.\n");
	 
            /*flip이 가능한 경우*/ 
            printf("This is current state.\n");
		 
            for(i=0; i<N; i++)
            {
    	       for(j=0; j<N; j++)
    	       printf("%d", gameboard[i][j]);
    	       printf("\n");
	        } //게임판 출력  
	     
	       for(i=0;i<N;i++)
           {
    	    for(j=0;j<N;j++)
    	
    	    if(gameboard [i][j] ==1)
    	    
    		  count_white++;
		
    	     else if(gameboard [i][j] ==2)
    	
    		 count_black++;
		   } 
		
		   printf("Current number of White Othello is %d\n", count_white); //현재 상태 하얀돌 개수 
           printf("Current number of Black Othello is %d\n", count_black); //검은색 돌 하얀색 돌 각각 개수 확 인 
           printf("\n");
        

		   printf("Put new white(1) othello.\n");
	       scanf("%d %d", &y,&x); //좌표입력 받 기
		
	    
		  if (x<0 || x>5 || y<0 || y<5)
	    	{
	    		printf("Wrong coordinate. Try again: \n");
			    scanf("%d %d", &y,&x);
			}
			
		  else if(gameboard[y][x] !=0) 
		    {
		    	printf("Already occupied. Try again: \n");
		        scanf("%d %d", &y,&x);
			}
		     
		  else if(nflipwhite_east(gameboard[N][N], y,x) ==0 && nflipwhite_west(gameboard[N][N], y,x) ==0 && nflipwhite_north(gameboard[N][N], y,x) ==0 && 
				    nflipwhite_south(gameboard[N][N], y,x)==0 &&  nflipwhite_northeast(gameboard[N][N], y,x)==0 && nflipwhite_northwest(gameboard[N][N], y,x)==0
					 && nflipwhite_southeast(gameboard[N][N], y,x) ==0 && nflipwhite_southeast(gameboard[N][N], y,x )==0) 
		    {
			    printf("No possible flip. Try again: \n");
		        scanf("%d %d", &y, &x); //좌표 입력에 오류가 있을 경우, 다시 받기
			}
		    
		    
		
		    /*플레이어가 입력한 곳이 flip이 가능하다면, flip 하고 그 횟수 출력*/
		    flipwhite(gameboard[N][N], y, x);
			
		    flip1_number = nflipwhite_east(gameboard[N][N], y,x) + nflipwhite_west(gameboard[N][N], y,x) + nflipwhite_north(gameboard[N][N], y,x) + 
				    nflipwhite_south(gameboard[N][N], y,x) +  nflipwhite_northeast(gameboard[N][N], y,x) + nflipwhite_northwest(gameboard[N][N], y,x)
					 + nflipwhite_southeast(gameboard[N][N], y,x) +nflipwhite_southeast(gameboard[N][N], y,x ) ;
		
		    printf("Result of this turn.\n");
		
		    for(i=0; i<N; i++)
            {
    	   for(j=0; j<N; j++)
    	     printf("%d", gameboard[i][j]);
    	     printf("\n");
	        }
	     
		    printf("East: %d, West: %d, North: %d, South: %d, Northeast: %d, Northwest: %d, Southeast: %d, Southwest: %d\n", 
		    nflipwhite_east(gameboard[N][N], y,x),nflipwhite_west(gameboard[N][N], y,x), nflipwhite_north(gameboard[N][N], y,x), 
				    nflipwhite_south(gameboard[N][N], y,x),  nflipwhite_northeast(gameboard[N][N], y,x), nflipwhite_northwest(gameboard[N][N], y,x),
					 nflipwhite_southeast(gameboard[N][N], y,x), nflipwhite_southeast(gameboard[N][N], y,x )==0);
		
	 	    printf("you have flipped %d othellos\n", flip1_number); 
		
		
		 turn ++; //검은색 돌 차 례 로 넘어가기 
	    
	    }
	    
	
	    
	    
	    
	    
	    
	     if (turn== 2)  //검은색 돌을 놓을 차례 
         {
         	 /*flip이 불가능한 경우 turn을 2로 바꿈 */
			for(x=0;x<N;x++)
		    {
		    	for(y=0;y<N;y++)
				
		    	if (nflipblack_east(gameboard[N][N], y,x) ==0 && nflipblack_west(gameboard[N][N], y,x) == 0 && nflipblack_north(gameboard[N][N], y,x) == 0 && 
			    	nflipblack_south(gameboard[N][N], y,x) == 0 && nflipblack_northeast(gameboard[N][N], y,x == 0 && nflipblack_southeast(gameboard[N][N], y,x) == 0 
					&& nflipblack_northwest(gameboard[N][N], y,x) == 0 && nflipblack_southwest(gameboard[N][N], y,x) == 0 ) )
				    
		            turn =1;
			}
	       
	          printf("There is no space available for new black othello.\n");
              printf("So the turn goes to white player.\n");
	 
            /*flip이 가능한 경우*/ 
            printf("This is current state.\n");
		 
            for(i=0; i<N; i++)
            {
    	       for(j=0; j<N; j++)
    	       printf("%d", gameboard[i][j]);
    	       printf("\n");
	        } //게임판 출력  
	     
	       for(i=0;i<N;i++)
           {
    	    for(j=0;j<N;j++)
    	
    	    if(gameboard [i][j] ==1)
    	    
    		  count_white++;
		
    	     else if(gameboard [i][j] ==2)
    	
    		 count_black++;
		   } 
		
		   printf("Current number of White Othello is %d\n", count_white); //현재 상태 하얀돌 개수 
           printf("Current number of Black Othello is %d\n", count_black); //검은색 돌 하얀색 돌 각각 개수 확 인 
           printf("\n");
        

		   printf("Put new black(2) othello.\n");
	       scanf("%d %d", &y,&x); //좌표입력 받 기
		
	    
		  if (x<0 || x>5 || y<0 || y<5)
		  {
		  	printf("Wrong coordinate. Try again: \n");
			scanf("%d %d", &y,&x);
		  }
	    
			
		  else if(gameboard[y][x] !=0) 
		  {
		  	printf("Already occupied. Try again: \n");
		    scanf("%d %d", &y,&x);
		  }
		    
		   else if (nflipblack_east(gameboard[N][N], y,x) ==0 && nflipblack_west(gameboard[N][N], y,x) == 0 && nflipblack_north(gameboard[N][N], y,x) == 0 && 
			    	nflipblack_south(gameboard[N][N], y,x) == 0 && nflipblack_northeast(gameboard[N][N], y,x == 0 && nflipblack_southeast(gameboard[N][N], y,x) == 0 
					&& nflipblack_northwest(gameboard[N][N], y,x) == 0 && nflipblack_southwest(gameboard[N][N], y,x) == 0 ) )
		   {
		   	printf("No possible flip. Try again: \n");
		    scanf("%d %d", &y, &x); //좌표 입력에 오류가 있을 경우, 다시 받기 
			} 
		    
		    
		
		    /*플레이어가 입력한 곳이 flip이 가능하다면, flip 하고 그 횟수 출력*/
		    flipblack(gameboard[N][N], y,x);
			
		    flip2_number=nflipblack_east(gameboard[N][N], y,x) + nflipblack_west(gameboard[N][N], y,x) + nflipblack_north(gameboard[N][N], y,x) + 
			    	nflipblack_south(gameboard[N][N], y,x) + nflipblack_northeast(gameboard[N][N], y,x) + nflipblack_southeast(gameboard[N][N], y,x)  +
				    nflipblack_northwest(gameboard[N][N], y,x) + nflipblack_southwest(gameboard[N][N], y,x)  ;
			
		    printf("Result of this turn.\n");
		
		    for(i=0; i<N; i++)
            {
    	   for(j=0; j<N; j++)
    	     printf("%d", gameboard[i][j]);
    	     printf("\n");
	        }
	     
		    printf("East: %d, West: %d, North: %d, South: %d, Northeast: %d, Northwest: %d, Southeast: %d, Southwest: %d\n", 
		    nflipblack_east(gameboard[N][N], y,x) , nflipblack_west(gameboard[N][N], y,x), nflipblack_north(gameboard[N][N], y,x) , 
			    	nflipblack_south(gameboard[N][N], y,x) , nflipblack_northeast(gameboard[N][N], y,x) , nflipblack_southeast(gameboard[N][N], y,x)  ,
				    nflipblack_northwest(gameboard[N][N], y,x) , nflipblack_southwest(gameboard[N][N], y,x)  );
		
	 	    printf("you have flipped %d othellos\n", flip2_number); 
		
		
		 turn =1; //하얀색 돌 차례로 넘어가기 
		 }
	
	
	
	
	
	
	/*이제 누가 이겼는지 결과 확인*/ 
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
    printf("Total number of Black Othello is %d\n", total_black); //검은색 돌 하얀색 돌 각각 개수 확 인 
		
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
	} //승패 결 과 
	
