#include<iostream>
using namespace std;
int main()
{
	float x,y;
	cout<<"Enter the amount you want to withdraw and your account balance:\n";
	cin>>x>>y;
	if(y<x)
	{
		cout<<"Insufficient Balance!!";
	}
	else if(y>x)
	{
		if(0<x&&x<2000)
			y=y-x-0.50;
		else
		{
		cout<<"\nWithdrawl limit is Rs.2000";
		}	
	}
	
	cout<<"\nBalance:"<<y;
}
