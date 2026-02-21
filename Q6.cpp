#include <iostream>
#include <string.h>
using namespace std;

class Bank
{
    char name[20];
    char userID[10];
    char password[10];
    int account_no;
    string acc_type;
    float balance;

public:
    Bank()
    {
        balance = 0.0;
    }
    void create()
    {
        int at;
        cout << "CREATE YOUR BANK ACCOUNT"<<endl;
        cout << "Enter your name: ";
        cin >> name;
        cout << "\nEnter the account type \n1.SAVINGS\n2.CURRENT\n3.FD\n4.SALARY\nENTER 1,2,3 or 4: ";
        cin>>at;
        if (at == 1)
            acc_type = "\nSAVINGS ACCOUNT";

        else if (at == 2)
            acc_type = "\nCURRENT ACCOUNT";

        else if (at == 3)
            acc_type = "\nFD ACCOUNT";

        else if (at == 4)
            acc_type = "\nSALARY ACCOUNT";

        else
            cout << "\n------INVALID CHOICE------\nENTER 1,2,3 or 4: ";

        cout << "\nCreate your USER-ID:  ";
        cin >> userID;
        cout << "\nCreate password: ";
        cin >> password;
        account_no = 123;
        cout << "\n"<<name << " YOUR "<< acc_type <<" CREATED SUCCESSFULLY" << endl;
        cout << "YOUR ACCOUNT NO. IS: " << account_no << endl;
    }
    int login()
    {
        char UID[10], Pass[10];
        int AN;
        cout << "Enter your Account Number: " << endl;
        cin >> AN;
        cout << "\nEnter Your USER-ID: " << endl;
        cin >> UID;
        cout << "\nEnter Your Password: " << endl;
        cin >> Pass;
        if ((strcmp(UID,userID))==0 && strcmp(password,Pass)==0 && account_no == AN )
        {
            cout << "\n----LOGIN SUCCESSFULL!----"<<endl;
            return 1;
        }
        else
        {
            cout << "\n----LOGIN UNSUCCESSFULLY!!----\n  Try again  ";
            return 0;
        }
    }

    void deposit()
    {
        double amt;
        cout << "Enter the amount you want to deposit: ";
        cin >> amt;
        balance += amt;
        cout << "\n"
             << name << " RS " << amt << " Amount Deposited SUCCESSFULLY" << endl;
    }

    void withdraw()
    {
        double amt;
        cout << "Enter the amount you want to withdraw: ";
        cin >> amt;
        if (amt <= balance)
        {
            balance -= amt;
            cout << "\n"<< name << "RS " << amt << " Withdrrawn SUCCESSFULLY." << endl;
        }
    }
    void showbalance()
    {
        cout << name << ", your current balance is: " << balance << endl;
    }
};
int main()
{
    Bank b;
    int choice;
    int opt;
   
    while (true){
    cout << "-------MAIN MENU--------"<<endl;
    cout << "1.Create Your Account" << endl;
    cout << "2.login" << endl;
    cout << "3.Quit" << endl;
    cout << "Enter your choice: ";
    cin >> opt;
    
        switch (opt)
        {
        case 1:
            b.create();
            break;

        case 2:
            if (b.login() == 1)
            {
                do
                {
                    cout << "\n----Bank Menu----" << endl;
                    cout << "1.DEPOSIT MONEY" << endl;
                    cout << "2.WITHDRAW MONEY" << endl;
                    cout << "3.BALANCE" << endl;
                    cout << "4.QUIT" << endl;
                    cout << "Enter your choice: ";
                    cin >> choice;

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
                        cout << "\n-------quitting--------";
                        return 0;
                    default:
                        cout << "\n-----INVALID-----";
                        break;
                    }
                } while (choice != 4);
            }

            else
            {
                cout << "\n RETURNING TO MAIN MENU"<<endl;
            }

            break;
        case 3:
            cout << "\nQUITTING";
            return 0;
        default:
            cout << "\nINVALID CHOICE";
            break;
        }
    }
    return 0;
}
