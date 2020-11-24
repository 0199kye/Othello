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
	int southwest = gameboard [y+1][x-1]; //���⿡ ���� ����  
	
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
	
	printf("This is initial state.\n"); 
    for(i=0; i<N; i++)
    {
    	for(j=0; j<N; j++)
    	 printf("%d", gameboard[i][j]);
    	printf("\n");
	} //������ �ʱ� ���� ���  
	 
	//game ���� ���� �� ��  
	
	while(1)
	
	{
	  if (turn==1)  //�Ͼ�� ���� ���� ���� 
	  
	    // for���� ������ ���Ӻ��忡 0(�� ����)�� �ִ� �� ���� Ȯ�� ������ break�� �� 
	    
       //flip�� �������� ���� ���� �ľ� 
    
    /*flip�� �Ұ����� ��� turn�� 2�� �ٲ� */
    printf("There is no space available for new white othello.\n");
    printf("So the turn goes to black player.\n");
    turn=2; break;
	 
    /*flip�� ������ ���*/ 
        printf("This is current state.\n");
		 
         for(i=0; i<N; i++)
         {
    	   for(j=0; j<N; j++)
    	     printf("%d", gameboard[i][j]);
    	   printf("\n");
	     } //������ ���  
	
	    {
		printf("Put new white(1) othello.\n");
	    scanf("%d %d", gameboard[y][x]);
	    }
	    
		else (gameboard[y][x] !=0)
	    {
	    	printf("You have placed othello on wrong spot. Try again. (already occupied) \n"); //�ٸ� �����ΰ� �̹� �ִ� ���� �����θ� �������� �� ���, �ٽ��ϼ���. 
		}
		 
		
		/*�÷��̾ �Է��� ����flip �� �Ұ����ϴٸ�, �ٽ� �ô��غ����� ���*/
		
		/*�÷��̾ �Է��� ���� flip�� �����ϴٸ�, flip �ϰ� �� Ƚ�� ���*/
		
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
	     turn ++; //�������� ���� ���� ������ �ϴ� �Լ�, 1�̸� ���ӳ����� ������. 
	
	    
	    
	    
	    
	    
	     if (turn== 2)  //������ ���� ���� ���� 
    	{
		printf("put new black(2)\n");
		scanf("%d %d", gameboard[y][x]);
	    }
		//���� �Ͼ�� �ڵ��� �� ���� �ٿ��ֱ� 
		 
		turn --;
		}
	
	
	
	
	
	
	
	
	
	
	/*���� ���� �̰���� ��� Ȯ��*/ 
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
	} //���� �����غ� ��� ������ ������ �̻��ϰ� ����. �ٽ� Ȯ���غ� �� 
		
    printf("Number of Black Othello is %d\n", total_black); //������ �� �Ͼ�� �� ���� ���� Ȯ �� 
		
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
