#include<iostream>
#include<string>
using namespace std;
class Hostel_Room
{
	public:
		int room_no;
		string student_name;
		bool is_occupied;
		void room_allocate(string st,int rn)
		{
			student_name=st;
			room_no=rn;
			is_occupied=true;
		}
		void room_vacate()
		{
			is_occupied=false;
		}
		void display()
		{
			cout<<"room number:"<<room_no<<endl;
			if(is_occupied)
			{
				cout<<"student:"<<student_name<<endl;
				cout<<"Room is booked"<<endl;
			}
			else
			{
				cout<<"student:"<<student_name<<endl;
				cout<<"Room is vacated"<<endl;
			}
			
			
		}	
};
int main()
{
	Hostel_Room st;
	st.room_allocate("Sai Sreeja",101);
	st.display();
	st.room_vacate();
	st.display();
	st.room_allocate("Sai Sreeja",102);
	st.display();
}
