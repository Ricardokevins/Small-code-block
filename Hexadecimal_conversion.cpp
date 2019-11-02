#include<vector>
#include<stack> 
#include<iostream>
using namespace std;
int change1(int a,int val)
{
	if(a==0)
		return 0;
	change1(a/val,val);
	cout<<a%val<<" ";
	return 0; 
 } 
 int change2(int b,int val)
 {
 	stack<int>result;
 	while(b!=0)
 	{
 		result.push(b%val);
 		b=b/val;
	 }
	 while(result.size()!=0)
	 {
	 	cout<<result.top()<<" ";
	 	result.pop();
	 }
	 cout<<endl;
	 return 0;
 }
 int main()
 {
 	change2(53,2);
 	change1(53,2);
 	cout<<endl;
 	return 0;
 }
