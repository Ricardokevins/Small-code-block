#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>
using namespace std;
int main1()
{
	char data[100];
	ofstream output;
	output.open("test.dat");
	cout<<"hello world"<<endl;
	cin.getline(data,100);
	output<<data<<endl;
	cout << "Enter your age: "; 
    cin >> data;
    cin.ignore();
    output << data << endl;
    output.close();
 
   // 以读模式打开文件
    ifstream infile; 
    infile.open("afile.dat"); 
    if(infile.fail())
    	cout<<"some error!!!"<<endl;
 
    cout << "Reading from the file" << endl; 
    infile >> data; 
   
    // 在屏幕上写入数据
    cout << data << endl;
   
    // 再次从文件读取数据，并显示它
    infile >> data; 
    cout << data << endl; 
 
    infile.close();
 
	
}


//对于KTV文件读写代码的尝试书写
int main()
{
	fstream myoperate;
	myoperate.open("ktvsong.txt",ofstream::out);
	if(myoperate.fail())
		cout<<"error"<<endl;
	for(int i(0);i<3;i++)
	{
		myoperate<<i<<" ";
		myoperate<<"歌手"<<" ";
		cout<<"input singer name"<<endl; 
		string singer;
		cin>>singer;
		myoperate<<singer<<endl;
		myoperate<<"歌曲名"<<" ";
		string song+;
		cin>>song;
		myoperate<<song<<endl;
		
	}
 } 
