//This program is used to convert kilometer into meter & meter into kilometer
#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c,d,e;
 clrscr();
 printf("For meter to kilometer, enter 1\nFor kilometer to meter, enter 2\n");
 scanf("%d",&a);
  if ( a==1 || a==2 )
  {
   switch(a)
   {
    case 1:
     printf("Enter the number in meter\n");
     scanf("%d",&b);

     printf("b = %d",b);
     c = b/1000;
     printf("%d meter = %d kilometer\n",b,c);
    break;

    case 2:
     printf("Enter the number in kilometer\n");
     scanf("%d",&d);
     e = d*1000;
     printf("%d kilometer = %d meter\n",d,e);
    break;
   }
  }
  else
  {
   printf("Enter the number from  above given option");
  }
 getch();
}