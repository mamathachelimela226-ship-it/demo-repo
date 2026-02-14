#include <iostream>
using namespace std;
class Student
{
    private:
    int roll_no;
    int marks;
    public:
    string college_name;
    Student(int a,int b)
    {
        roll_no=a;
        marks=b;
    }
    void display()
    {
        cout<<"college name:"<<college_name<<endl;
        cout<<"roll no:"<<roll_no<<endl;
        cout<<"maximum marks=100"<<endl;
        cout<<"marks scored:"<<marks<<endl;
    }
};

int main() {
    Student st1(01,78);
    Student st2(02,85);
    Student st3(03,99);
    st1.college_name="CBIT";
    st1.display();
    st2.college_name="CBIT";
    st2.display();
    st3.college_name="CBIT";
    st3.display();

    return 0;
}
