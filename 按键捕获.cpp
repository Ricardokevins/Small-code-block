#include<stdio.h>
#include<conio.h>
int main() 
{
	char ch;
	while((ch=getch())!=0x1B) 
	{ /* ESC to quit */
		printf("%d \n", ch);
	}
}
