#include<iostream>
using namespace std;

class Bank{
    string userid,password;
    double balance;
    public:
    Bank(){
        balance=0.0;
    }
    void CreateAcc()
    {
        cout<<"Create User-Id: ";
        cin>>userid;
        cout<<"\nCreate Password: ";
        cin>>password;
        cout<<"Account creaeted successfully.\n";
    }
    void login(){
        string id,pass;
        cout<<"Enter User-Id: ";
        cin>>id;
        cout<<"\nEnter Password: ";
        cin>>pass;
        if(id==userid && pass==password)
            cout<<" \nLogin successfull";
    }

        void deposit(){
            double amt;
            cout<<"Enter the amount you want to deposit: ";
            cin>>amt;
            balance+=amt;
            cout <<"\nRS "<<amt<<" Amount Deposited SUCCESSFULLY"<<endl;
            
        }

        void withdraw(){
            double amt;
            cout<<"Enter the amount you want to withdraw: ";
            cin>>amt;
            if(amt<=balance){
                balance-=amt;
                cout<<"\nRS "<<amt<<" Withdrrawn SUCCESSFULLY."<<endl;
            }

        }
        void showbalance(){
            cout<<"your current balance is: "<<balance<<endl;

        }

    
};
int main(){
    Bank b1;
    int choice;
    cout<<"Enter 1 To CREATE ACCOUNT\n";
    cout<<"Enter 2 To LOGIN\n";
    cout<<"Enter 3 To Quit\n";
    cin>>choice;
    switch (choice)
    {
    case 1:
        b1.CreateAcc();
        break;
    case 2:
        b1.login();
        int op;
        while(true){
            cout<<"\n-----BANK MENU-----\n";
            cout<<"ENTER YOUR CHOICE 1,2,3,4"<<endl;
            cout<<"1.Deposit\n";
            cout<<"2.Withdraw\n";
            cout<<"3.Check Balance\n";
            cout<<"4. Logout\n";
            cin>>op;
            if(op==1)
              b1.deposit();
            else if(op==2)
              b1.withdraw();
            else if(op==3)
              b1.showbalance();
            else if(op==4)
              break;
            else
              cout<<"---INVALID CHOICE---";

        }
        break;
    case 3:
      cout<<"Goodbye"<<endl;
      break;
    default:
      cout<<"Invalid Choice Enter 1 , 2 or 3 ";
        break;
    }
    return 0;
}