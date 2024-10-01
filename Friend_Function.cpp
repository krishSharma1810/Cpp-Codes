// #include <iostream>
// using namespace std;
// class Number
// {
// private:
//     int a,b;
// public:
//     void setup(int x,int y)
//     {
//         a=x;
//         b=y;
//     }

//     void print()
//     {
//         cout << "the complex number is "<<a<< " + " << b <<"i"<<endl;
//     }

//     void PrintSum()
//     {
//         cout << "The sum of Numbers is "<<a <<" + "<<b <<"i"<<endl; 
//     }

//     friend Number Sum(Number s1,Number s2);
// };


// Number Sum(Number s1,Number s2)
// {
//     Number s3;
//     s3.setup((s1.a+s2.a),(s1.b+s2.b));
//     return s3;
// }

// int main()
// {
//     Number c1,c2,sum;
//     c1.setup(4,5);
//     c1.print();

//     c2.setup(5,4);
//     c2.print();

//     sum=Sum(c1,c2);
//     sum.PrintSum ();

//     return 0;
// }



#include <iostream>
using namespace std;

class Mean
{
    private:
        int a,b,sum;  
    public:
        void Sum(int a,int b)
        {
            sum=a+b;
        }
        friend Mean Find (Mean s);

};

Mean Find (Mean s)
{
    Mean m;
    m=sum/2;
    return m;
}


int main()
{
  
}