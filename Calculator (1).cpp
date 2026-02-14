#include<iostream>
using namespace std;
class Calculator
{
	public:
		int a,b;
		void add(int a,int b)
		{
			int add_value;
			add_value=a+b;
			cout<<"Addition:"<<add_value<<endl;
		}
		void sub(int a,int b)
		{
			int sub_value;
			sub_value=a-b;
			cout<<"Subtraction:"<<sub_value<<endl;
		}
		void mul(int a,int b)
		{
			int mul_value;
			mul_value=a*b;
			cout<<"Multiplication:"<<mul_value<<endl;
		}
		void div(int a,int b)
		{
			int div_value;
			div_value=a/b;
			cout<<"Division:"<<div_value<<endl;
		}
};
int main()
{
	int a,b;
	Calculator c1;
	cout<<"Enter two values:";
	cin>>a>>b;
	c1.add(a,b);
	c1.sub(a,b);
	c1.mul(a,b);
	c1.div(a,b);
	return 0;
}
