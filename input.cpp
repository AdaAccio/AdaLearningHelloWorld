#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	ofstream output;
	//运用open函数
	output.open("num.txt");//创建一个叫numbers.txt的文件
	for (int i = 0; i < 100; i++)
	{
		output << i * i - 2<<" "<<endl;
	}
	output.close();//输入完成；
}