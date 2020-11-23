#include <stdio.h>
#include <stdlib.h>
#define N 6

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	
int main(int argc, char *argv[]) {
	
	int gameboard [N][N];
	int x,y;
	int turn = 1;
	int white = 1;
	int black = 2; 
	int flip;
	int flip number;
	
	int east = gameboard [x+1][y];
	int west = gameboard [x-1][y];
	int north = gameboard [x][y+1];
	int south = gameboard [x][y-1];
	int northeast = gameboard [x+1][y+1];
	int northwest = gameboard [x-1][y+1];
	int southeast = gameboard [x+1][y-1];
	int southwest = gameboard [x-1][y-1]; //방향에 대한 정의  
	
	//그 가운데 4개 배열에다가 초기값으로 입력 넣어야함.
	 
    for(i=0; i<N, i++)
    {
    	for(j=0; j<N; j++)
    	 printf("%d", gameboard[i][j]);
    	printf("\n");
	} //게임판 출력  
	 
	while(1)
	{
	  if (turn==1)  //하얀색 돌을 놓을 차례 
	  
    //flip이 가능한지 여부 먼저 파악
    
    /*flip이 불가능한 경우*/
	 
    /*flip이 가능한 경우*/
	 
	    {
		printf("put new white\n");
	    scanf("%d %d", &gameboard[x][y]);
	    }
	    
	    if (gameboard[x][y] !=0)
	    {
	    	printf("You have placed othello on wrong spot. Try again. (already occupied) \n"); //다른 오델로가 이미 있는 곳에 오델로를 놓을려고 한 경우, 다시하세요. 
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
		
    	
       //돌을 다 놓아서 더 이상 놓을 자리가 없다면 게임 끝내야함 
       //돌의 개수를 세서 누가 더 많은지로 우승자 가리기 
	
	
	
	return 0;
}
