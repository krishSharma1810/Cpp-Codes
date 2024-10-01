// To print half triangle.
// #include<iostream>
// #include<iomanip>

// using namespace std;

// class Pattern
// {
// private:
//     int x,i,j;
// public:
// void input();
// void print();
// };

// void Pattern :: input ()
// {
//     cout << "enter the number of rows" << endl;
//     cin >> x;

// }

// void Pattern :: print ()
// {
//     for (i=1;i<=x;i++)
//     {
//         for (j=1;j<=i;j++)
//         {
//            cout  << "*";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     Pattern P;
//     P.input();
//     P.print();
//     return 0;
// }



// To print half inverse triangle.

#include <iostream>
#include <iomanip>

using namespace std;

class inverse_Pattern
{
private:
    int i,j,x;
public:
void take();
void print();
};

void inverse_Pattern :: take()
{
    cout << "enter the number of rows" << endl;
    cin >> x;
}

void inverse_Pattern :: print()
{
    for (i=x;i>=1;i--)
    {
        for (j=1;j<=i;j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    inverse_Pattern IP;
    IP . take();
    IP . print();
    return 0;
}



