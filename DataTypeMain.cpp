#include<iostream>
using namespace std;
enum TYPE{INT,CHAR,FLOAT};
union data
{
	char c;
	int i;
	float f;
};
typedef union data DATA;
class DataType
{
private:
	DATA a;
	TYPE type;
public:
	DataType(){};
	DataType(int i)
	{
		a.i = i;
		type = INT;
	}
	DataType(char c)
	{
		a.c = c;
		type = CHAR;
	}
	DataType(float f)
	{
		a.f = f;
		type = FLOAT;
	}
	void printclass();
};
void DataType::printclass()
{
	if (type == INT)
		cout << a.i << endl;
	else if (type == CHAR)
		cout << a.c << endl;
	else if (type == FLOAT)
		cout << a.f << endl;
}
int main()
{
	char c = 'a';
	DataType testc(c);
	
	int i = 114;
	DataType testi(i);

	float f = 114.514;
	DataType testf(f);

	testc.printclass();
	testi.printclass();
	testf.printclass();
	
	return 0;
}