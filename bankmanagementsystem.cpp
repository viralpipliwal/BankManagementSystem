  // Bank management system
#include<iostream>
using namespace std;
class bank
{
    char name[100],add[200],y;
    int balance;
    public:
        void open_account();
        void deposit_money();
        void withdraw_money();
        void display_account();
        };
  void bank :: open_account()
  {
  cout<<"Enter your full name ::";
  cin.ignore();
  cin.getline(name,100);
  cout<<"Enter your address ::";
  cin.ignore();
  cin.getline(add,100);
  cout<<"What type of account you want to open saving (s) or current (c)?";
  cin>>y;
  cout<<"Enter amount for deposit  ::";
  cin>>balance;
  cout<<"your account is created \n";
  }
  void bank :: deposit_money()
  {
  int a;
  cout<<"Enter how much you deposit ::";
  cin>>a;
  balance+=a;
  cout<<"total amount you deposited :: \t"<< balance;
  }
  void bank :: display_account()
  {
  cout<<"your full name :: \t"<< name;
  cout<<"\n your address :: \t"<< add;
  cout<<"\n type of account that you have opened :: \t"<< y;
  cout<<"\n amount you have deposited :: \t"<< balance;
  }
  void bank :: withdraw_money()
  {
  float amount;
  cout<<"withdraw :: \n";
  cout<<"enter amount to withdraw ::";
  cin>>amount;
  balance-=amount;
  cout<<"current balance ::"<< balance;
  }
int main()
{
  int ch;
  char x;
  bank obj;
  do
  {
   cout<<"1. Open account \n";
   cout<<"2. Deposit money \n";
   cout<<"3. Withdraw money \n";
   cout<<"4. Display account \n"; 
   cout<<"5. Exit \n";
   cout<<"select the option from above \n";
   cin>>ch;
   switch(ch)
   {
        case 1:
        cout<<"1. Open account  \n";
        obj.open_account();
        break;
        case 2:
        cout<<"2. Deposit money \n";
        obj.deposit_money();
        break;
        case 3:
        cout<<"3. Withdraw money \n";
        obj.withdraw_money();
        break;
        case 4:
        cout<<"4. Display account \n"; 
        obj.display_account();
        break;
        case 5:
             if(ch==5)
             {
               exit(1);
             }
             default:
             cout<<"\n this page doesn't exist try again";
   }
   cout<<"\n Do you want to select next option then press :: y \n";
   cout<<" if you want to exit then press :: N \n";
   cin>>x;
   if(x=='n'||x=='N')
   exit(0);
  } 
  while (x=='y'||x=='Y');

    cin>>x;
    return 0;
}


