#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << " enter a number : ";
    cin >> n;
    //     cout << "sum of n natural number is : ";
    //     int i=0;
    //     for(;i<=n;i++)
    //     {
    //         int sum = i+1;
    //         cout << sum ;
    //         sum+=1;
    //     }
    // }
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
}