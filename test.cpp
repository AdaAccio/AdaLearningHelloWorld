#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int binarySearch(int num[], int t, int low, int high,int count)
{
	count++;
	int mid = (low + high) / 2;
	if (count >= 100)
	{
		cout << "ÕæÃ»ÓÐ°¡"<<endl;
		return 114514;
	}
	else
	{
		if (t < num[mid])
		{
			high = mid - 1;
			return binarySearch(num, t, low, high, count);
		}
		else if (t == num[mid])
			return mid;
		else
		{
			low = mid + 1;

			return binarySearch(num, t, low, high, count);
		}
	}
}
int main()
{

	int t ;
	cin >> t;
	int num[100] = { 0 };


	ifstream input("num.txt");
	for (int i = 0; i < 100; i++)
	{
		input >> num[i];
	}
	input.close();
	int k = binarySearch(num, t, 0, 99,0);
	cout << k << endl;
	return 0;
	
}