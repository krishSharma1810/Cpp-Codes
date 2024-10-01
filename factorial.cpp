// program without using class

// #include <iostream>
// #include <iomanip>

// using namespace std;

// int main()
// {
//   int n,i,fact=1;
//   cout << "enter the number to find the factorial" <<endl ;
//   cin >> n;
//   while (n>0)
//   {
//     fact=fact*n;
//     n=n-1;
//   }
//   cout << "factorial of given number is" << endl << fact;
//   return 0;
// }


// program using the class

#include <iostream>
#include <iomanip>

using namespace std;

class factorial
{
private:
  int n,i,fact,a;
public:
void intake();
  void check();
  void print();
};

void factorial::check()
{
  cout << "enter the number to find the factorial" << endl;
  cin >> n;
  a=n;
  fact=1;
while (n>=1)
{
  
  fact = fact * n;
n=n-1;
}
}
void factorial::print()
{
cout << "factorial of " << a << " is " << fact;
}
int main()
{
  factorial obj;
  obj . check();
  obj . print();
  return 0;
}