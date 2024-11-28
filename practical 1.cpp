#include<iostream>
#include<conio.h>
using namespace std;
class complex 
{
	private : int a,b,c,d;
	public :
	void getvalue()
	{
		cout<<"for the first number "<<endl;
		cout<<"enter real part : ";
		cin>>a;
		cout<<"enter imaginary part : ";
		cin>>b;
		cout<<"for the second number "<<endl;
		cout<<"enter real part : ";
		cin>>c;
		cout<<"enter imaginary part : ";
		cin>>d;
	}
	friend void complexadd(complex s);
};
    void complexadd(complex s)
    {
    	int rl,i;
    	rl=s.a+s.c;
    	i=s.b+s.d;
    	cout <<"the addition is : "<<rl<<"+"<<i<<"i";
	}
	int main ()
	{
		complex x;
		x.getvalue();
		complexadd(x);
		getch();
		return 0;
	}
 
