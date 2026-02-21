#include <iostream>
using namespace std;

class Matrix
{
    int A[10][10], B[10][10], AddMat[10][10], MulMat[10][10];
    int n;

public:
    void inputmat()
    {
        int i, j;
        cout << "Order of Matrix? ";
        cin >> n;
        cout<<"Enter first matrix elements:"<<endl;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                cout << "Enter the element no.: " <<"row" << i+1 <<" coloum"<< j+1<<": ";
                cin >> A[i][j];
            }
        }
        cout<<"Enter second matrix elements:"<<endl;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                cout << "Enter the element no.: " <<"row" << i+1 <<" coloum"<< j+1<<": ";
                cin >> B[i][j];
            }
        }
    }
    void ADD()
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                AddMat[i][j] = A[i][j] + B[i][j];
            }
        }
    }

    void Multiply()
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                MulMat[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    MulMat[i][j] += A[i][k] * B[k][j];
                }
            }
        }
    }

    void displaymat()
    {
        cout << "the matrix you entered is as follows:" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << A[i][j]<<"\t";
            }
            cout << "\n";
        }
        cout << "---------------------" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << B[i][j]<<"\t";
            }
            cout << "\n";
        }
        cout << "THE ADDITION IS OF MATRICES IS ---------------------" << endl;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << AddMat[i][j]<<"\t";
            }
            cout << "\n";
        }
        cout << "THE MULTIPLICATION OF MATRICES IS ---------------------" << endl;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << MulMat[i][j]<<"\t";
            }
            cout << "\n";
        }
    }
};
int main()
{
    Matrix M1;
    M1.inputmat();
    M1.ADD();
    M1.Multiply();
    M1.displaymat();
    return 0;
}
