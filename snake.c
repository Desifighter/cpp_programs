// #include<stdio.h>
// #include<conio.h>
// #include<windows.h>
// int main(){
//      int x = 30 , y = 10;
//      char ch;
//      gotoxy(x,y);
//      printf("*");
//      getch();
// return 0;
// }

// int gotoxy(int x,int y)
// {
    
//     COORD c;
//     c.X = x;
//     c.Y = y;
  
//     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
//      return 0;
// }
// C program for the above approach

#include <stdio.h>
#include<conio.h>
#include <windows.h>

// Driver Code
void main()
{
	// Input


     for (int i = 0; i < 15; i++)
     {
         for (int j = 0; j < 60; j++)
         {
           if (i==0||i==15-1||j==0||j==60-1)
           {
               printf("*");
           }
           else
           {
               printf(" ");
           }
           
           
          
         }
         
     printf("\n");
          
     }
     
	COORD c;
	c.X = 30;
	c.Y = 7;

	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE), c);

	printf("@");
     getch();
	
}
//keshav keshari 
