//check given position is set or not
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,pos;
	cin>>num;
	cin>>pos;
	if(num&((pos-1)<<1))
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
	return 0;
}
