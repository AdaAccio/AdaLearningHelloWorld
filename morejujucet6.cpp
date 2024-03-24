#include<iostream>
#include<string>
#include<queue>
#include<deque>
#include<cstdbool>
using namespace std;
class word {
private:
	string a;
	string b;
	int num;
public:
	word();
	word(string, string, int);
	void setA(string);
	void setB(string);
	void setNum(int);
	string getA();
	string getB();
	int getNum();
};
word::word()
{
	;
}
word::word(string aa, string bb, int cc)
{
	a = aa;
	b = bb;
	num = cc;
}
void word::setA(string aa)
{
	a = aa;
}
void word::setB(string bb)
{
	b = bb;
}
void word::setNum(int cc)
{
	num=cc;
}
string word::getA()
{
	return a;
}
string word::getB()
{
	return b;
}
int word::getNum()
{
	return num;
}
int main()
{
	
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		vector<word>test(n);
		word temp;
		for (int j = 0; j < n; j++)
		{
			string aa, bb;
			//int cc=i+1;
			cin >> aa;
			cin >> bb;
			int cc = j + 1;
			test[j].setA(aa);
			test[j].setB(bb);
			test[j].setNum(cc);
			if (j>=1&&(test[j-1].getA()>test[j].getA()))
			{
				temp = test[j];
				test[j] = test[j - 1];
				test[j - 1] = temp;
			}
		}
		for (int k = n-1; k>=0; k++)
		{
			cout << "NO." << test[k].getNum() << ":" << test[k].getB()<<endl;
		}
	}
	return 0;
}