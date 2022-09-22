//This program will convert temprature from farenheit to celcius
#include<stdio.h>
#include<conio.h>
void main()
{
 float a,b,c,f;
 clrscr();
 printf("Enter temprature in farenheit\n");
 scanf("%f",&f);
 a = f-32.0;
 b = 5.0/9.0;
 c = b*a;
 printf("Temprature in celcius = %.2f",c);
 getch();
}
