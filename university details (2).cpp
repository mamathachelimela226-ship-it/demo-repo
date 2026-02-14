#include<iostream>
#include <string>
using namespace std;
class Academic_Record
{
	public:
		int roll_no;
		float marks;
		void getacadetails()
		{
			cout<<"Enter roll number=";
			cin>>roll_no;
			cout<<"Total marks scored out of 750= ";
			cin>>marks;
		}
		void acadisplay()
		{
			cout<<"Roll number="<<roll_no<<endl;
			cout<<"Academics score="<<marks<<endl;
		}
};
class Sports_Record
{
	public:
	string sports_name;
	float sports_score;
	void getsprdetails()
	{
		cout<<"Enter sport name=";
		cin>>sports_name;
		cout<<"Enter sports score out of 250=";
		cin>>sports_score;
	}
	void sprdisplay()
	{
		cout<<"sports name="<<sports_name<<endl;
		cout<<"sports score"<<sports_score<<endl;
	}
};
class Student:public Academic_Record ,public Sports_Record
{
	public:
		int total_score;
		void readdetails()
		{
			getacadetails();
			getsprdetails();
		}
		void displaydetails()
		{
	        acadisplay();
	        sprdisplay();
		}
		void calculate()
		{

			total_score=marks+sports_score;
			cout<<"Total performance="<<total_score;
			
		}
		
};
int main()
{
	Student st;
	st.readdetails();
	st.displaydetails();
	st.calculate();
	return 0;
}
