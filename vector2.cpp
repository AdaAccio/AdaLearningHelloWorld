#include<vector>
#include<iostream>
#include<string>
using namespace std;//Ãû³Æ¿Õ¼ä
void printArray(vector<int>v)
{
	for (auto it = v.begin();it != v.end(); it++)
	{
		cout << *it;
		if (it + 1 != v.end())
		{
			cout << ' ';
		}
	}
	cout << endl;
}
int main()
{
	int n;
	cin >> n;
	vector<vector<int>>v(n, vector<int>());
	int q;
	cin >> q;
	auto it = v.begin();
	int t;
	for (int i = 0; i < q; i++)
	{
		cin >> t;
		switch (t)
		{
		case 0:
		{
			int num;
			cin >> num;
			int index;
			cin >> index;
			v[num].push_back(index);
			break;
		}
		case 1:
		{
			int k;
			cin >> k;
			printArray(v[k]);
			break;
		}
		case 2:
		{
			int m;
			cin >>m;
			if (!v[m].empty())
			{
				v[m].clear();
			}
			break;
		}
		}
	}
	return 0;
}