#include <stdio.h>
#include <stdlib.h>
#define N 6

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	
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
	int flip;
	int flip number;
	int isGameEnd; //게임 종료 조건에 관한 거 코딩하기
	 
	int east = gameboard [x+1][y];
	int west = gameboard [x-1][y];
	int north = gameboard [x][y+1];
	int south = gameboard [x][y-1];
	int northeast = gameboard [x+1][y+1];
	int northwest = gameboard [x-1][y+1];
	int southeast = gameboard [x+1][y-1];
	int southwest = gameboard [x-1][y-1]; //방향에 대한 정의  
	
	
	
	printf("white is number1, black is number2\n"); //검은색 하얀색을 어떻게 나타내야할지 몰라서 숫자로 대신함. 
	printf("\n");
	 
    for(i=0; i<N; i++)
    {
    	for(j=0; j<N; j++)
    	 printf("%d", gameboard[i][j]);
    	printf("\n");
	} //게임판 출력  
	 
	//game 종료 조건 적 기  
	
	while(1)
	
	{
	  if (turn==1)  //하얀색 돌을 놓을 차례 
	  
    //flip이 가능한지 여부 먼저 파악
    
    /*flip이 불가능한 경우*/
	 
    /*flip이 가능한 경우, 먼저 현 상태 출력해야함*/ 
	 
	    {
		printf("put new white\n");
	    scanf("%d %d", &gameboard[x][y]);
	    }
	    
		
		 
		
		/*플레이어가 입력한 곳이flip 이 불가능하다면, 다시 시대해보세요 출력*/
		
		/*플레이어가 입력한 곳이 flip이 가능하다면, flip 하고 그 횟수 출력*/
		 
		flip number++;
		 
		printf("you have flipped %d othellos\n", flip number); 
		 
	    turn ++;
	    
    	}
	
	
	  if (turn== 2)  //검은색 돌을 놓을 차례 
    	{
		printf("put new black\n");
		scanf("%d %d", &gameboard[x][y]);
	    }
		//위에 하얀색 코딩한 거 복사 붙여넣기 
		 
		turn --;
		
    	else (gameboard[x][y] !=0)
	    {
	    	printf("You have placed othello on wrong spot. Try again. (already occupied) \n"); //다른 오델로가 이미 있는 곳에 오델로를 놓을려고 한 경우, 다시하세요. 
		}
      
       //돌의 개수를 세서 누가 더 많은지로 우승자 가리기 
	     
	
	
	return 0;
}
