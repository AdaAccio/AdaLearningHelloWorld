#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	ofstream output;
	//����open����
	output.open("num.txt");//����һ����numbers.txt���ļ�
	for (int i = 0; i < 100; i++)
	{
		output << i * i - 2<<" "<<endl;
	}
	output.close();//������ɣ�
}