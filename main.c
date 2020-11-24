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
	int flip_number;
	 
	int east = gameboard [y][x+1];
	int west = gameboard [y][x-1];
	int north = gameboard [y-1][x];
	int south = gameboard [y+1][x];
	int northeast = gameboard [y-1][x+1];
	int northwest = gameboard [y-1][x-1];
	int southeast = gameboard [y+1][x+1];
	int southwest = gameboard [y+1][x-1]; //방향에 대한 정의  
	
	int flipnum_east;
	int flipnum_west;
	int flipnum_north;
	int flipnum_south;
	int flipnum_northeast;
	int flipnum_northwest;
	int flipnum_southeast;
	int flipnum_southwest;
	
	int total_black;
	int total_white;
	
    int check_full;
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
	
	printf("This is initial state.\n"); 
    for(i=0; i<N; i++)
    {
    	for(j=0; j<N; j++)
    	 printf("%d", gameboard[i][j]);
    	printf("\n");
	} //게임판 초기 상태 출력  
	 
	//game 종료 조건 적 기  
	
	while(1)
	
	{
	  if (turn==1)  //하얀색 돌을 놓을 차례 
	  
	    // for문을 돌려서 게임보드에 0(빈 공간)이 있는 지 먼저 확인 없으면 break걸 기 
	    
       //flip이 가능한지 여부 먼저 파악 
    
    /*flip이 불가능한 경우 turn을 2로 바꿈 */
    printf("There is no space available for new white othello.\n");
    printf("So the turn goes to black player.\n");
    turn=2; break;
	 
    /*flip이 가능한 경우*/ 
        printf("This is current state.\n");
		 
         for(i=0; i<N; i++)
         {
    	   for(j=0; j<N; j++)
    	     printf("%d", gameboard[i][j]);
    	   printf("\n");
	     } //게임판 출력  
	
	    {
		printf("Put new white(1) othello.\n");
	    scanf("%d %d", gameboard[y][x]);
	    }
	    
		else (gameboard[y][x] !=0)
	    {
	    	printf("You have placed othello on wrong spot. Try again. (already occupied) \n"); //다른 오델로가 이미 있는 곳에 오델로를 놓을려고 한 경우, 다시하세요. 
		}
		 
		
		/*플레이어가 입력한 곳이flip 이 불가능하다면, 다시 시대해보세요 출력*/
		
		/*플레이어가 입력한 곳이 flip이 가능하다면, flip 하고 그 횟수 출력*/
		
		flip_number = flipnum_east + flipnum_west + flipnum_north + flipnum_south + flipnum_northeast + flipnum_northwest + flipnum_southeast + flipnum_southwest;
		
		printf("Result of this turn.\n");
		
		for(i=0; i<N; i++)
         {
    	   for(j=0; j<N; j++)
    	     printf("%d", gameboard[i][j]);
    	   printf("\n");
	     }
	     
		printf("East: %d, West: %d, North: %d, South: %d, Northeast: %d, Northwest: %d, Southeast: %d, Southwest: %d\n", 
		 flipnum_east, flipnum_west, flipnum_north, flipnum_south, flipnum_northeast, flipnum_northwest, flipnum_southeast, flipnum_southwest);
		
		printf("you have flipped %d othellos\n", flip_number); 
		
		 
	    
	    
	    
	    for(a=0;a<N; a++)
	    {
		   for(b=0; b<N; b++)
		
		   if(gameboard[a][b]!=0)
	    {
		  check_full++;
	    } 
	   }
	
	   if(check_full==N*N)
	    break;
	
	   else
	     turn ++; //게임판이 가득 차서 끝나게 하는 함수, 1이면 게임끝나게 설정함. 
	
	    
	    
	    
	    
	    
	     if (turn== 2)  //검은색 돌을 놓을 차례 
    	{
		printf("put new black(2)\n");
		scanf("%d %d", gameboard[y][x]);
	    }
		//위에 하얀색 코딩한 거 복사 붙여넣기 
		 
		turn --;
		}
	
	
	
	
	
	
	
	
	
	
	/*이제 누가 이겼는지 결과 확인*/ 
    for(i=0;i<N;i++)
    {
    	for(j=0;j<N;j++)
    	
    	if(gameboard [i][j] ==1)
    	{
    		total_white++;
		}
	}
	
	printf("Number of White Othello is %d\n", total_white);
	 
	 
	 for(i=0;i<N;i++)
    {
    	for(j=0;j<N;j++)
    	
    	if(gameboard [i][j] ==2)
    	{
    		total_black++;
		}
	} //따로 실행해본 결과 검은색 개수가 이상하게 나옴. 다시 확인해볼 것 
		
    printf("Number of Black Othello is %d\n", total_black); //검은색 돌 하얀색 돌 각각 개수 확 인 
		
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
	
	return 0;
}
