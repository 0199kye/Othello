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
	int isGameEnd; //���� ���� ���ǿ� ���� �� �ڵ��ϱ�
	 
	int east = gameboard [x+1][y];
	int west = gameboard [x-1][y];
	int north = gameboard [x][y+1];
	int south = gameboard [x][y-1];
	int northeast = gameboard [x+1][y+1];
	int northwest = gameboard [x-1][y+1];
	int southeast = gameboard [x+1][y-1];
	int southwest = gameboard [x-1][y-1]; //���⿡ ���� ����  
	
	
	
	printf("white is number1, black is number2\n"); //������ �Ͼ���� ��� ��Ÿ�������� ���� ���ڷ� �����. 
	printf("\n");
	 
    for(i=0; i<N; i++)
    {
    	for(j=0; j<N; j++)
    	 printf("%d", gameboard[i][j]);
    	printf("\n");
	} //������ ���  
	 
	//game ���� ���� �� ��  
	
	while(1)
	
	{
	  if (turn==1)  //�Ͼ�� ���� ���� ���� 
	  
    //flip�� �������� ���� ���� �ľ�
    
    /*flip�� �Ұ����� ���*/
	 
    /*flip�� ������ ���, ���� �� ���� ����ؾ���*/ 
	 
	    {
		printf("put new white\n");
	    scanf("%d %d", &gameboard[x][y]);
	    }
	    
		
		 
		
		/*�÷��̾ �Է��� ����flip �� �Ұ����ϴٸ�, �ٽ� �ô��غ����� ���*/
		
		/*�÷��̾ �Է��� ���� flip�� �����ϴٸ�, flip �ϰ� �� Ƚ�� ���*/
		 
		flip number++;
		 
		printf("you have flipped %d othellos\n", flip number); 
		 
	    turn ++;
	    
    	}
	
	
	  if (turn== 2)  //������ ���� ���� ���� 
    	{
		printf("put new black\n");
		scanf("%d %d", &gameboard[x][y]);
	    }
		//���� �Ͼ�� �ڵ��� �� ���� �ٿ��ֱ� 
		 
		turn --;
		
    	else (gameboard[x][y] !=0)
	    {
	    	printf("You have placed othello on wrong spot. Try again. (already occupied) \n"); //�ٸ� �����ΰ� �̹� �ִ� ���� �����θ� �������� �� ���, �ٽ��ϼ���. 
		}
      
       //���� ������ ���� ���� �� �������� ����� ������ 
	     
	
	
	return 0;
}
