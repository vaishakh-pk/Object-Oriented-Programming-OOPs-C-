#include<iostream>
using namespace std;

class Bank
{
private:
char name[20];
char account_type[20];
int account_number;
int balance;
public:
void initialize()
{
cout<<"\nEnter Account Holders Name:";
gets(name);
cout<<"\nEnter Account type:";
gets(account_type);
cout<<"\nEnter account number:";
cin>>account_number;
cout<<"Enter balance amount:";
cin>>balance;
}

void deposit()
{
int amt;
cout<<"\nEnter the amout to deposit:";
cin>>amt;
balance+=amt;
cout<<"\nAmount deposited successfuly\nYour New Balance:"<<balance;
}

void check()
{
int amt;
cout<<"\nYour balance :"<<balance<<"\nEnter amount to withdraw:";
cin>>amt;
if(amt<=balance)
{
balance-=amt;
cout<<"\nRemaining Balance:"<<balance;
}
else
{
exit(0);
}
}

void display()
{
cout<<"\nName :";
puts(name);
cout<<"\nBalance :"<<balance;
}
};

int main()
{
int i;
int j=0;
Bank bk;
bk.initialize();
do{
cout<<"\n1. Your Information\n2. Deposit\n3. Withdraw\nEnter your choice\n";
cin>>i;
if(i==1)
{
bk.display();
}
else if(i==2)
{
bk.deposit();
}
else if(i==3)
{
bk.check();
}
cout<<"\nEnter 1 to continue / 0 to exit : ";
cin>>j;
}while(j=1);
}