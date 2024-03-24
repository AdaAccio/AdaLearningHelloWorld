#include<iostream>
#include<deque>
using namespace std;
int main()
{
	int getq;
	cin >> getq;
	deque<int>A;
	
	for (int i = 0; i < getq; i++)
	{
		int temp;
		cin >> temp;
		switch (temp)
		{
		case 0:
		{
			int d, x;
			cin >> d;
			cin >> x;
			if (d == 0)
			{
				A.push_front(x);
			}
			else if (d == 1)
			{
				A.push_back(x);
			}
			break;
		}
		case 1:
		{
			int index;
			cin >> index;
			cout<<A[index]<<endl;
			break;
		}
		case 2:
		{
			int d;
			cin >> d;
			if (d == 0)
			{
				A.pop_front();
			}
			if (d == 1)
			{
				A.pop_back();
			}
			break;
		}
		}
	}
	return 0;
}
