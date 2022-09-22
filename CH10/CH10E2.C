//This program is designed to calculate the area of square
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int length, area;
 printf("Enter the length of side of square\n");
 scanf("%d",&length);
 area = length*length;
 printf("The area of square is %d",area);
 getch();
}