#include<stdio.h>
#include<stdlib.h>
void display();
void enter();
char board[9][9];
int main()
{


for(int i=0;i<9;i++)
{
    for(int j=0;j<9;j++)
    {
        board[i][j]='$';

    }
}

while(1)
{
printf("MENU\n");
printf("1.Display\n2.Enter Values\n3.Quit\n");
int choice=0;
scanf("%d",&choice);
switch(choice)
{
   case 1:
   display();
   break;
   
   case 2:
   enter();
   break;

   case 3:
   printf("Game terminated\n");
   exit(0);

}



}
}
void display()
{
for(int i=0;i<9;i++)
{
    for(int j=0;j<9;j++)
    {
        printf("%c",board[i][j]);
        printf("|");

    }
 printf("\n");
}

}
void enter()
{
    int t=0;
    printf("Enter number of boxs to be filled\n");
    scanf("%d",&t);
    while(t--)
    {
    int i=0,j=0;
printf("Enter row and column location\n");

scanf("%d%d",&i,&j);
scanf(" %c",&board[i][j]);
printf("prev line ran\n");
    }




}







