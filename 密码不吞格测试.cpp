#include <stdio.h>
#include <string.h>
#include <conio.h>
#define _PassWord "NUPT" //��ȷ�������ڴ�
void Password(const char * PW_SAVED); //Password��������
int main() {
	Password(_PassWord); //��������
	return 0;
}
void Password(const char * PW_SAVED) {
	char password[20];
	char ch;
	int i = 0;
	printf(" Please Enter the Password : ");
	ch = _getch();
	while ( (ch & 0xff) != 13) { //�����ַ�ch��ΪCarriage Return
		if ( (ch & 0xff) == 8) { //�����ַ�chΪBack Space
			printf("%c %c",ch,ch);
			i--;
		} else {
			printf("*");;
			password[i] = ch;
			i++;
		}
		ch = _getch(); //���������ַ�ch
	}
	password[i]='\0';
	if ( 0 == strncmp(PW_SAVED,password,strlen(PW_SAVED))) { //������ͬ
		printf("\n Access granted !\n");
	} else if ( 0 != strncmp(PW_SAVED,password,strlen(PW_SAVED))) { //���벻��ͬ
		printf("\n Access aborted...\n");
	}
}
