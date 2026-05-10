#include <iostream>
using namespace std;
int main()
{
    int n=4;
    int row = 1;
    int j = 0;
    while (row <= n)
    {
        int col = 4;
        while (row <= col)
        {
            char ch = 'A' + j;
            cout << ch << " ";
            col -= 1;
            j += 2;
        }
        row += 1;
        cout << endl;
    }
}