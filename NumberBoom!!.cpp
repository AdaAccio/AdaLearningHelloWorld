#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	srand(time(0));
	int num = rand() % 100;
	
	int min = 0;
	int max = 100;
	while(1)
	{
		int x;
		cout << "£¨"<<min<<"~"<<max<<")\n";
		cin >> x;
		if (x > max || x < min)
			cout << "不讲武德！！！"<<endl;
		else if (x < num)
		{
			//cout << x << '~' << max<<endl;
			min = x;
		}
		else if (x > num)
		{
			//cout << min << "~" << x<<endl;
			max = x;
		}
		else if (x == num)
		{
			cout << "Boom!!"<<endl;
			break;
		}
		
	}
}
