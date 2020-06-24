#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int t, x;
	cin>>t;
	while(t--)
	{
		cin>>x;
		if(x == 0)
		{
			cout<<"NULL\n";
		}
		else if(x>0)
		{
			if(x % 2 == 0)
			{
				cout<<"EVEN POSITIVE\n";
			}
			else if (x % 2 != 0)
			{
				cout<<"ODD POSITIVE\n";
			}
		}
		else if(x < 0)
		{
			if(x % 2 == 0)
			{
				cout<<"EVEN NEGATIVE\n";
			}
			else if (x % 2 != 0)
			{
				cout<<"ODD NEGATIVE\n";
			}
		}
	}
	return 0;
}
