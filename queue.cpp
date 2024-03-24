#include<iostream>
#include<vector>
#include<queue>
#include<list>
using namespace std;
int main()
{
	int m;
	cin >> m;
	vector<queue<int>>Q(m);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int index;
		cin >> index;
		switch (index)
		{
		case 0:
		{
			int t, x;
			cin >> t;
			cin >> x;
			Q[t].push(x);
			break;
		}
		case 1:
		{
			int t;
			cin >> t;
			if (!Q[t].empty())
			{
				int k = Q[t].front();
				cout << k<<endl;
			}
			break;
		}
		case 2:
		{
			int t;
			cin >> t;
			if (!Q[t].empty())
			{
				Q[t].pop();
			}
			break;
		}
		}
	}
	return 0;
}