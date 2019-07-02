#include <stdio.h>
#include <string.h>
#include <conio.h>
#define _PassWord "NUPT" //正确密码存放于此
void Password(const char * PW_SAVED); //Password函数申明
int main() {
	Password(_PassWord); //函数调用
	return 0;
}
void Password(const char * PW_SAVED) {
	char password[20];
	char ch;
	int i = 0;
	printf(" Please Enter the Password : ");
	ch = _getch();
	while ( (ch & 0xff) != 13) { //输入字符ch不为Carriage Return
		if ( (ch & 0xff) == 8) { //输入字符ch为Back Space
			printf("%c %c",ch,ch);
			i--;
		} else {
			printf("*");;
			password[i] = ch;
			i++;
		}
		ch = _getch(); //继续输入字符ch
	}
	password[i]='\0';
	if ( 0 == strncmp(PW_SAVED,password,strlen(PW_SAVED))) { //密码相同
		printf("\n Access granted !\n");
	} else if ( 0 != strncmp(PW_SAVED,password,strlen(PW_SAVED))) { //密码不相同
		printf("\n Access aborted...\n");
	}
}
