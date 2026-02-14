#include<iostream>
#include<string>
using namespace std;
class Employee
{
	public:
		int empID;
		string name;
		float salary;
		void getEmployeedetails()
		{
			cout<<"Enter employee ID";
			cin>>empID;
			cout<<"Enter name";
			cin>>name;
			cout<<"Enter basic salary";
			cin>>salary;
		}
		void display()
		{
			cout<<"Employee Details"<<endl;
			cout<<"ID"<<empID<<endl;
			cout<<"Name"<<name<<endl;
			cout<<"Basic salary"<<salary<<endl;
		}
		
};
class Manager:public Employee
{
	public:
	float allowance;
	void getManagerDetails()
	{
		cout<<"Enter manager allowance";
		cin>>allowance;
	}
	void calculateSalary(Employee e)
	{
		e.salary+=allowance;
		cout<<"total salary"<<e.salary;
		
		
	}
};
int main()
{
	Employee e;
	Manager m;
	e.getEmployeedetails();
	m.getManagerDetails();
	e.display();
	m.calculateSalary(e);
	return 0;
}
