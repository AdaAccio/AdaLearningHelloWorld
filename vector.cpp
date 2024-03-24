#include<vector>
#include<iostream>
#include<string>
using namespace std;//Ãû³Æ¿Õ¼ä
int main()
{
	int n;
	cin >> n;
	vector<int>v(n);
	int t;
	for (int i = 0; i < n; i++)
	{
		cin >> t;
		switch (t)
		{
		case 0:
		{
			int num;
			cin >> num;
			v.push_back(num);
			break;
		}
		case 1:
		{
			int k;
			cin >> k;
			cout << v[n + k] << endl;
			break;
		}
		case 2:
		{
			v.pop_back();
			break;
		}
		}
	}
	return 0;
}