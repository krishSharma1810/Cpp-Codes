#include <bits/stdc++.h>
using namespace std;

int max_of(int Add[],int n){
    int max=Add[0];
    for (int i=1;i<=n-1;i++){
        if (Add[i]>max){
            max=Add[i];
        }
    }
    return max;
}

int sum(int Add[],int n){
 int ans=0;
 for (int i=0;i<=n-1;i++){
     ans=ans+Add[i];
 }
 return ans;
}



int main() {
	// your code goes here
	int n,t,x,m;
    std::cin >> t;
    while (t>0){
        std::cin>>n;
        int Add[n-1];
        for (int i=0;i<=n-1;i++){
            std::cin>>Add[i];
        }
        x=sum(Add,n);
        m=max_of(Add,n);
        std::cout << x <<" "<< m<<std::endl;
        // std::cout << "max"<<m<< std::endl;
        
        t--;
    }
}


// test cases
// 5
// 6 10 20 15 5 -4 3
// 2 30 -9
// 3 -1 -2 -10
// 3 5 11 199
// 5 3 15 30 64 90