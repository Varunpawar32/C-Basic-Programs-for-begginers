#include<iostream>
using namespace std;
int main()
{
	int a=20,b=30,c=50;
	
	if(a>>b)
	{
		if(a>>c)
		{
			cout<<"a = "<<a;
		}
		else
		{
			cout<<"c = "<<c;
		}
	}

	else
	{
		if(b>>c)
		{
			cout<<"b = "<<b;
		}
		else
		{
			cout<<"c = "<<c;
		}
	}
	return 0;
}
