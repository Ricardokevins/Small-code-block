#include<stdio.h>
#include<windows.h>	/*�����������ÿ⺯����ͷ�ļ�*/

/*
*function: �ڿ���ָ̨����λ������ַ���

*������buf,������ַ�����startX��startYΪ����̨��X��Y���� 
*/ 
void printStr(char *buf, int startX, int startY)
{
	HANDLE hd;
	COORD pos;
	
	pos.X = startX;
	pos.Y = startY;
	hd = GetStdHandle(STD_OUTPUT_HANDLE);	/*��ȡ��׼����ľ��*/ 
	SetConsoleCursorPosition(hd, pos);		/*���ÿ���̨��������λ��*/
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
	gotoxy(5,20);//�ӵ�5�� ��20�п�ʼ���
	cout<<"���������������"<<endl;
	
	return 0;}

#include <windows.h>
#include <winbase.h>
#include <iostream>

using namespace std;

int main()
// ��궨λ
{
   HANDLE hStdout;
   // ���λ��
   COORD  cursorPos;
   
   // ��׼������
   hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

   cout << "No1. lines....\n\n";
   cout << "No3. lines....\n\n";
   cout << "No5. lines....\n" << endl;

   // �ȴ�2��
   Sleep(2000);
   // ���ù��
   // ��2�����
   cursorPos.X = 0;
   cursorPos.Y = 1;
   SetConsoleCursorPosition( hStdout, cursorPos );
   cout << "No2. lines...." <<endl;

   
   // ��4�����
   cursorPos.X = 0;
   cursorPos.Y = 3;
   SetConsoleCursorPosition( hStdout, cursorPos );
   cout << "No4. lines...." <<endl;

   // ��6�����
   cursorPos.X = 0;
   cursorPos.Y = 5;
   SetConsoleCursorPosition( hStdout, cursorPos );

   // �ͷž��
   CloseHandle(hStdout);
   return 0;
}
 
