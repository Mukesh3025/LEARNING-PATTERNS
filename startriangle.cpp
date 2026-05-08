// #include <iostream>
// using namespace std;
// int main()
// {    int row=1;
//     int col;
//     cout<<"enter a number : ";
//     cin>>col;
//     while(row<=col)
//     {
//         int star = 1;
//         while(star <= row){
//             cout << "*";
//             star = star + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter a number : ";
//     cin >> n;
//     int row=1;
//     while (row <= n)
//     {
//         int col=1;
//         while (col <= row)
//         {cout << "*";
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }

// only for row
// #include <iostream>
// using namespace std;
// int main ()
// {
//      int row ,n;
//     cin >> n;
//         while(row<=n)
//         {
//         cout << "*" << endl;
//         row=row+1;
//         }

// }

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number : ";
    cin >> n;
    int row=1;
    while(row<=n)
    {
        int col=1;
        while (col <= row)
        {
            cout << "*";
            col=col+1;
        } 
    cout<<endl;
    row=row+1;
    }
}