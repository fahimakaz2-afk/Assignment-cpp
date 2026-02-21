#include<iostream>
using namespace std;

class Matrix{
    int a[10][10],row,col;
    public:
    Matrix(int r=0,int c=0){
        row=r;
        col=c;
    }
    void input(){
        for(int i=0;i<row;i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin>>a[i][j];
            }
            
        }
    }
    void display(){
        for(int i=0;i<row;i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    Matrix add(Matrix m){
        Matrix result(row,col);
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
               result.a[i][j]=a[i][j]+m.a[i][j];
            }
            
        }
        return result;
    }
    Matrix mul(Matrix m)
    {
        Matrix result(row,m.col);
         for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < m.col; j++)
            {
               result.a[i][j]=0;
               for (int k = 0; k < col; k++)
               {
                 result.a[i][j]+=a[i][k]*m.a[k][j];
               }
               
            }
            
        }
        return result;
    }
    bool canAdd(Matrix m){
        return (row==m.row && col==m.col);
    }

    bool canMul(Matrix m){
        return(m.row==col);
    }
};
int main(){
    int r1,r2,c1,c2;
    cout<<"Enter row and column for 1st matrix: ";
    cin>>r1>>c1;
    Matrix m1(r1,c1);
    cout<<"Enter row and column for 2nd matrix: ";
    cin>>r2>>c2;
    Matrix m2(r2,c2);
    cout<<"Enter the elements of 1st matrix : "<<endl;
    m1.input();
    cout<<"<<<<---------------------------->>>>"<<endl;
    cout<<"Enter the elements of 2nd matrix : "<<endl;
    m2.input();

    cout<<"The 1st matrix is: "<<endl;
    m1.display();
    cout<<"<<<<---------------------------->>>>"<<endl;
    cout<<"The 2nd matrix is: "<<endl;
    m2.display();

    if(m1.canAdd(m2))
    {
        Matrix SUM = m1.add(m2);
        cout<<"The addition of the given matrices are: "<<endl;
        SUM.display();
    }
    else
         cout<<"______ADDITION IS NOT POSSIBLE______";
    
    if(m1.canMul(m2))
    {
        Matrix PROD = m1.mul(m2);
        cout<<"The multiplication of the matrices are : "<<endl;
        PROD.display();
    }
    else
      cout<<"<<<<<<---------The multiplication of matrices is not possible--------->>>>>>";
    
    cout<<"Thanks!!!!";

}