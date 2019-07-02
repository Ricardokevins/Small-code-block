#include<stdio.h>
#include<windows.h>	/*包含的所调用库函数的头文件*/

/*
*function: 在控制台指定的位置输出字符串

*参数：buf,输出的字符串；startX、startY为控制台的X，Y坐标 
*/ 
void printStr(char *buf, int startX, int startY)
{
	HANDLE hd;
	COORD pos;
	
	pos.X = startX;
	pos.Y = startY;
	hd = GetStdHandle(STD_OUTPUT_HANDLE);	/*获取标准输出的句柄*/ 
	SetConsoleCursorPosition(hd, pos);		/*设置控制台光标输出的位置*/
	printf("the string is : %s at console(%d, %d) position !\n", buf, pos.X, pos.Y);
}

int min()
{
	char showcontent[128];
	
	memset(showcontent, 0, sizeof(showcontent));
	printf("Input string :");
	gets(showcontent);
	
	printStr(showcontent, 1,1);
	printStr(showcontent, 5,5);
	
	return 0;
}

#include<iostream>
#include<windows.h>
 
using namespace std;
 
void gotoxy(int y,int x){  
    COORD pos;  
    pos.X=x;  
    pos.Y=y;  
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos); 
}  
 
int mihn(){
	gotoxy(5,20);//从第5行 第20列开始输出
	cout<<"输出跳到这里啦！"<<endl;
	
	return 0;}

#include <windows.h>
#include <winbase.h>
#include <iostream>

using namespace std;

int main()
// 光标定位
{
   HANDLE hStdout;
   // 光标位置
   COORD  cursorPos;
   
   // 标准输出句柄
   hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

   cout << "No1. lines....\n\n";
   cout << "No3. lines....\n\n";
   cout << "No5. lines....\n" << endl;

   // 等待2秒
   Sleep(2000);
   // 设置光标
   // 第2行输出
   cursorPos.X = 0;
   cursorPos.Y = 1;
   SetConsoleCursorPosition( hStdout, cursorPos );
   cout << "No2. lines...." <<endl;

   
   // 第4行输出
   cursorPos.X = 0;
   cursorPos.Y = 3;
   SetConsoleCursorPosition( hStdout, cursorPos );
   cout << "No4. lines...." <<endl;

   // 第6行输出
   cursorPos.X = 0;
   cursorPos.Y = 5;
   SetConsoleCursorPosition( hStdout, cursorPos );

   // 释放句柄
   CloseHandle(hStdout);
   return 0;
}
 
