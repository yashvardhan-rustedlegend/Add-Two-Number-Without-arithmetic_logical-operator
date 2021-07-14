#include<iostream>
using namespace std;
int add(int a,int b)
{
	if(b<a)
	{
		while(b!=0)
		{
			b--;
			a++;
		}
		return a;
	}
	if(b>a)
	{
		while(a!=0)
		{
			a--;
			b++;
		}
		return b;
	}
	if(b==a)
	{
		while(b!=0)
		{
			b--;
			a++;
		}
		return a;
	}
}
int main()
{
	int a=10;
	int b=10;
	int sum=add(a,b);
	cout<<sum;
}
