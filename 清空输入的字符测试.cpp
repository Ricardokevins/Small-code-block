#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	 int j=0,i=0;
    while(j++<10)
    {
               printf("���ǵ�%d�����------",j);
               for(i=0;i<1000000000;i++);
               printf("\r"); 
    }
}

