#include <iostream>
using namespace std;

class Bank
{
    string userid, password;
    double balance;

public:
    Bank()
    {
        balance = 0.0;
    }
        int login()
        {
            cout << "Create User-Id: ";
            cin >> userid;
            cout << "\nCreate Password: ";
            cin >> password;
            cout << "Account creaeted successfully.\n";
            string id, pass;
            cout << "\nEnter User-Id: ";
            cin >> id;
            cout << "\nEnter Password: ";
            cin >> pass;
            if ((userid == id )&& (password==pass))
            {
                cout << " \nLogin successfull";
                return 1;
            }
            else
              return 0;
        }

    void deposit()
    {
        double amt;
        cout << "Enter the amount you want to deposit: ";
        cin >> amt;
        balance += amt;
        cout << "\nRS " << amt << " Amount Deposited SUCCESSFULLY" << endl;
    }

    void withdraw()
    {
        double amt;
        cout << "Enter the amount you want to withdraw: ";
        cin >> amt;
        if (amt <= balance)
        {
            balance -= amt;
            cout << "\nRS " << amt << " Withdrrawn SUCCESSFULLY." << endl;
        }
    }
    void showbalance()
    {
        cout << "your current balance is: " << balance << endl;
    }
};
int main()
{
    Bank b;
    int choice;
    if(b.login() == 1)
    {   do{
            cout<<"\n----Bank Menu----"<<endl;
            cout<<"1.DEPOSIT MONEY"<<endl;
            cout<<"2.WITHDRAW MONEY"<<endl;
            cout<<"3.BALANCE"<<endl;
            cout<<"4.QUIT"<<endl;
            cout<<"Enter your choice: ";
            cin>>choice;
            
            switch (choice)
            {
            case 1:
                b.deposit();
                break;
            case 2:
                b.withdraw();
                break;
            case 3:
                b.showbalance();
                break;
            case 4:
                cout << "-------quitting--------";
                return 0;
            default:
                cout << "-----INVALID-----";
                break;
            }
        }while(choice!=4);
    }
    return 0;
}