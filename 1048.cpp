#include<bits/stdc++.h>
using namespace std;
int main()
{

	double salary, newSalary, moneyEarn, percent;
	cin>>salary;

	if(salary >= 0 && salary <= 400)
	{
		moneyEarn = salary*0.15;
		newSalary = salary + moneyEarn;
		cout<<"Novo salario: "<<fixed<<setprecision(2)<<newSalary<<"\n";
		cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<moneyEarn<<"\n";
		cout<<"Em percentual: 15 %\n";
	}
	else if(salary > 400 && salary <= 800)
	{
		moneyEarn = salary*0.12;
		newSalary = salary + moneyEarn;
		cout<<"Novo salario: "<<fixed<<setprecision(2)<<newSalary<<"\n";
		cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<moneyEarn<<"\n";
		cout<<"Em percentual: 12 %\n";
	}
	else if(salary > 800 && salary <=1200)
	{
		moneyEarn = salary*0.10;
		newSalary = salary + moneyEarn;
		cout<<"Novo salario: "<<fixed<<setprecision(2)<<newSalary<<"\n";
		cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<moneyEarn<<"\n";
		cout<<"Em percentual: 10 %\n";
	}

	else if(salary > 1200 && salary <=2000)
	{
		moneyEarn = salary*0.07;
		newSalary = salary + moneyEarn;
		cout<<"Novo salario: "<<fixed<<setprecision(2)<<newSalary<<"\n";
		cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<moneyEarn<<"\n";
		cout<<"Em percentual: 7 %\n";
	}

	else if(salary > 2000)
	{
		moneyEarn = salary*0.04;
		newSalary = salary + moneyEarn;
		cout<<"Novo salario: "<<fixed<<setprecision(2)<<newSalary<<"\n";
		cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<moneyEarn<<"\n";
		cout<<"Em percentual: 4 %\n";
	}

	return 0;

}
