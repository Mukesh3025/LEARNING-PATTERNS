#include <iostream>
using namespace std;
int main()
{
    int n = 6;
    int row = 4;
    int m = 1;
    while (row <= n && row>0)
    {
        
        int col=1;
        while (col<=m)
        {
            char ch = 'A'+ row + col - 2;
            cout << ch ;
            col += 1;  
        }
        row -= 1;
        m += 1; 
        cout << endl ;
    }
}