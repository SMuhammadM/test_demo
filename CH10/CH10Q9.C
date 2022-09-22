//This program will calculate the area of the circle using radius.
#include<stdio.h>
#include<conio.h>
#define PI 22/7
void main()
{
 float r,area;
 clrscr();
 printf("Enter the radius of the circle\n");
 scanf("%f",&r);
 area = PI*(r*r);
 printf("The area of the circle is %f",area);
 getch();
}