#include<iostream>
#include<list>
using namespace std;

void printList(list<int>&l)
{
	for (const auto& num : l)
	{
		std::cout << num << endl;
	}
}
int main()
{
	list<int> l;
	auto p=l.end();
	int q;
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		int index;
		cin >> index;
		switch (index)
		{
		case 0:
		{
			long long int x;
			cin >> x;
			p=l.insert(p,x);
			break;
		}
		case 1:
		{
			int d;
			cin >> d;
			if(d>=0)
			{
				for (int j = 0; j < d&&p!=l.end(); j++)
				{
					p++;
				}
			}
			else
			{
				for (int j = 0; j < -d&&p!=l.begin(); j++)
				{
					p--;
				}
			}
			break;
		}
		case 2:
		{
			if (p != l.end())
			{
				p=l.erase(p);
				
				break;
			}
		}
		}
	}
	printList(l);
	return 0;
}