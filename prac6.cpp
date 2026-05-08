#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number : ";
    cin >> n;
    int row = 1;
    int j = 0;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            char ch = 'A' + j;
            cout << ch << " ";
            col += 1;
            j += 1;
        }
        row += 1;
        cout << endl;
    }
}