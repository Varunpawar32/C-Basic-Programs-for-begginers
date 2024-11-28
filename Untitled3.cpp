#include<iostream>
using namespace std;
int main()
{
    	int a,b,c,add,sub,multi,div;
    	cout<<"enter a = ";
    	cin>>a;
    		cout<<"enter b = ";
    	cin>>b;
    		cout<<"enter c = ";
    	cin>>c;
    	
    	if(c==1)
    	{
    		add=a+b;
    		cout<<"addition of a and b is = "<<add;
		}
		else if(c==2)
		{
			sub=a-b;
    		cout<<"substraction of a and b is = "<<sub; 
		}
		else if(c==3)
		{
			multi=a*b;
    		cout<<"multiplication of a and b is = "<<multi;
		}
		else if(c==4)
		{
			div=a/b;
    		cout<<"divisoin of a and b is = "<<div;
		}
		else
		{
			cout<<"INVALID CODE";
		}
		return 0;
}
