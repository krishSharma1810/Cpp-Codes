#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter the number of elements in the array"<<endl;
    cin >> n;
    int A[n];
    for (int i=0;i<n;i++)
    {
        cout << "enter the element at :"<<i<<":"<<endl;
        cin >> A[i];
    }
    int target;
    cout<<"enter the target sum"<<endl;
    cin >> target;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (i!=j && A[i]+A[j]==target)
            {
                cout<<  "["<<A[i]<<","<<A[j]<<"]"<<endl;
            }
        }
    }
    return 0;
}