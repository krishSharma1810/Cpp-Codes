#include <bits/stdc++.h>
using namespace std;

void find_duplicate (int arr[ ], int n)
{
    int flag=0;
    int j=0;
    for (int i=0; i<n; i++) {
        for (j=0; j<i; j++)
            if (arr[i]==arr[j]) {flag=2; break;}
        if (flag !=2)
            for (j=i+1; j<n; j++)
                if (arr[i]==arr[j]) {flag=1; cout<<arr[i]<<" "; break;}
    }
    if (flag==0) cout<<"NA";
    cout<<endl;
}


int main() {
	// your code goes here
    int n,t;
    std::cin >> t;
    while (t>0){
        std::cin>>n;
        int arr[n-1];
        for (int i=0;i<=n-1;i++){
            std::cin>>arr[i];
        }
        find_duplicate(arr,n);
        t--;
    }
}
