#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	 int j=0,i=0;
    while(j++<10)
    {
               printf("这是第%d次输出------",j);
               for(i=0;i<1000000000;i++);
               printf("\r"); 
    }
}

