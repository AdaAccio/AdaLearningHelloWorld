#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<stack<int>>a(n);
	int q;
	cin >> q;
	for (int i = 0; i <q; i++)
	{
		int ask;
		cin >> ask;
		switch (ask)
		{
		case 0:
		{
			int t;
			int x;
			cin >> t;
			cin >> x;
			a[t].push(x);
			break;
		}
		case 1:
		{
			int t;
			cin >> t;
			if (!a[t].empty())
			{
				cout << a[t].top() << endl;
				
			}
			break;
		}
		case 2:
		{
			int t;
			cin >> t;
			if (!a[t].empty())
			{
				a[t].pop();
				break;
			}
		}
		}
	}
	return 0;
}