#include <iostream>
using namespace std;
int main ()
{   int a;
    cout<<"enter a number : ";
    cin>>a;
    int row=1;
    while(row<=a)
    {  
        int col=1;
         while(col<=a)
        {
        char ch = 'A'+col-1;
        cout << ch <<" ";
        col=col+1;
        }
    row=row+1;
    cout << endl;
    }
}