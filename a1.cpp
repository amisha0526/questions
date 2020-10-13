#include<iostream>
using namespace std;
int main()  
{ 
	int n = 7,i,j,k;
	for(i = 1;i<=n;i++)
	{
		for(j=1;j<i;j++)
		{
			cout<<" ";
		}
		for(k = j;k<=n;k++)
		{
			cout<<k<<" ";
		}
		cout<<endl;
	}
		for(i = 6;i>0;i--)
		{
		for(j=1;j<i;j++)
		{
			cout<<" ";
		}
		for(k = j;k<=n;k++)
		{
			cout<<k<<" ";
		}
		cout<<endl;
	}
	return 0; 
} 


