#include <iostream>
using namespace std;
int main ()
    {
        int n;
        cout << "enter a number : ";
        cin >> n;
        cout << "printing count from 1 to n :";
        int i=1;
        for(;;)
        {
            if(i<=n)
            {
                cout << i ;
            }
            else
            {
                break;
            }
            i++;
        }
        
    }
