#include<iostream>
using namespace std;
class Vehicle
{
	public:
		int speed;
		void setspeed(int s)
		{
			speed=s;
		}
		void showspeed()
		{
			cout<<"speed:"<<speed<<"km/h"<<endl;
		}
};
class car:public Vehicle
{
	public:
		string brand;
		void setbrand(string b)
		
		{
			brand=b;
		}
		void showcarinfo()
		{
			cout<<"car brand:"<<brand<<endl;
			showspeed();
		}
		
		
};
int main()
{
	car mycar;
	mycar.setbrand("toyota");
	mycar.setspeed(120);
	mycar.showcarinfo();
	return 0;
	
}
