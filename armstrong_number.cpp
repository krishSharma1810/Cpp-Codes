//finding the given number is armstrong number or not.


// #include<iostream>
// #include<iomanip>

// using namespace std;

// int main()
// {
//   int x,i,c,ans,sum=0;
//   cout << "enter the number you want to check armstrong or not" << endl;
//   cin >> x;
  // c=x;
  // while (x>=1)
  // {
  //   ans=x%10;
  //   sum=sum+(ans*ans*ans);
  //   x=x/10;
  // }
  // if (sum==c)
  // {
  //   cout << "the number is armstrong";
  // }
  // else{
  //   cout << "the number is not armstrong";
  // }
  
// }



//finding the armstrong number in a given limit.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
int x,sum=0,ans,c,n;
cout << "enter the range to find armstrong number " <<endl;
cin >> x;
n=x;
while (x>0)
{
  c=x;
  while (x>=1)
  {
    ans=x%10;
    sum=sum+(ans*ans*ans);
    x=x/10;
  }
  if (sum==c)
  {
    cout << c << "armstrong";
  }
  n=n-1;
  x=n;
  cout << x << endl << n << endl;
}
cout << "end of program";
return 0;
}