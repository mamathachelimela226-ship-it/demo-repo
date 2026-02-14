#include<iostream>
using namespace std;
class bank_account
{
	private:
		float balance;
	public:
		bank_account(int baln)
		{
			balance=baln;
		}
	friend class accnt_mang;
};
class accnt_mang
{
	public:
		
		void add_money(float a,bank_account q)
		{
			q.balance+=a;
			cout<<"total balance after adding"<<q.balance<<endl;
		}
		void ded_money(float b,bank_account q)
		{
			q.balance-=b;
			cout<<"total balance after deducting"<<q.balance<<endl;
		}
		void display(bank_account q)
		{
			cout<<"total balance:"<<q.balance<<endl;
		}
		
	
};
int main()
{
	bank_account q(5000);
	accnt_mang acc;
	acc.display(q);
	acc.add_money(1000,q);
	acc.ded_money(500,q);
	return 0;
}
