//program using the class 

// #include <iostream>
// #include <iomanip>
// using namespace std;
// class addition
// {
// private:
//   int a,b,add;
// public:
//  void sum();
//  void print();
// };
//  void addition :: sum(){
// cout << "enter first number :"<< endl;
// cin >> a;
// cout << "enter second number :"<< endl;
// cin >> b;
// add=a+b;
// }

//  void addition :: print()
// {
//   cout << "sum of "<< a <<" and " << b <<" is :" << add;
// }


// int main(){
// addition  obj;
// obj .sum ();
// obj .print ();
// return 0;
// }


//program without using the class 

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int a,b,sum;
  cout << "enter first number" << endl;
  cin >> a;
  cout << "enter second number" << endl;
  cin >> b;
  sum=a+b;
  cout << "the sum of " << a << " and " << b << "is :" << sum;
  return 0;
}