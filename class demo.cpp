#include<iostream>
using namespace std;
class demo
{
	private:
		int a,b;
		public:
		void input()
		{
			cout<<"enter name"<<endl;
			cin>>a>>b;
		}
		void show()
		{
			cout<<a<<b;
		};
		void main()
		{
		
		demo ob;
		ob.input();
		ob.show();
	}
	
};
