#include<iostream>
using namespace std;
int ak(int m,int n)
{
	if(m==0)
	{
		return n+1;
	}
	if(m>0&&n==0)
	{
		return ak(m-1,1);
	}
	if(m>0&&n>0)
	{
		return ak(m-1,ak(m,n-1));
	}
}
int main()
{
	cout<<ak(3,4)<<endl;
 } 
