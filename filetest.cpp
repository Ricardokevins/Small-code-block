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
 
   // �Զ�ģʽ���ļ�
    ifstream infile; 
    infile.open("afile.dat"); 
    if(infile.fail())
    	cout<<"some error!!!"<<endl;
 
    cout << "Reading from the file" << endl; 
    infile >> data; 
   
    // ����Ļ��д������
    cout << data << endl;
   
    // �ٴδ��ļ���ȡ���ݣ�����ʾ��
    infile >> data; 
    cout << data << endl; 
 
    infile.close();
 
	
}


//����KTV�ļ���д����ĳ�����д
int main()
{
	fstream myoperate;
	myoperate.open("ktvsong.txt",ofstream::out);
	if(myoperate.fail())
		cout<<"error"<<endl;
	for(int i(0);i<3;i++)
	{
		myoperate<<i<<" ";
		myoperate<<"����"<<" ";
		cout<<"input singer name"<<endl; 
		string singer;
		cin>>singer;
		myoperate<<singer<<endl;
		myoperate<<"������"<<" ";
		string song+;
		cin>>song;
		myoperate<<song<<endl;
		
	}
 } 
