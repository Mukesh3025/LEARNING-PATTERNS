#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int row = 1;
    while (row < n)
    {
        int col = 0;
        while (col < n)
        {
            char ch = 'A'+col;
            cout << ch ;
            col+=2;
        }
    row+=1;
    cout << endl;
    }
}