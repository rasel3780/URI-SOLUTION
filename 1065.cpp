#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int even = 0;
	int num;
	for(int i = 0; i < 5; i++)
	{
		cin>>num;
		if(num % 2 == 0)
		{
			even ++;
		}
	}
	cout<<even<<" valores pares\n";

	return 0;
}
