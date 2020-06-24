#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int even = 0;
	int odd = 0;
	int positive = 0;
	int negative = 0;
	int number;

	for(int i = 0; i < 5; i++)
	{
		cin>>number;

		if(number % 2 == 0)
		{
			even ++;
			if(number > 0)
			{
				positive++;
			}
			else if(number < 0)
			{
				negative++;
			}
		}
		else if(number % 2 != 0)
		{
			odd++;
			if(number > 0)
			{
				positive ++;
			}
			else if(number < 0)
			{
				negative ++;
			}
		}

	}
	cout<<even<<" valor(es) par(es)\n";
	cout<<odd<<" valor(es) impar(es)\n";
	cout<<positive<<" valor(es) positivo(s)\n";
	cout<<negative<<" valor(es) negativo(s)\n";

	return 0;
}
