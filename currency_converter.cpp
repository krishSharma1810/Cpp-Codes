#include<iostream>
#include<iomanip>

using namespace std;


int main()
{
    int inp , service;
    char repeat;
    cout << "Welcome to currency converter"<<endl;
    do
    {
    cout << "Convert"<<endl;
    cout << "[1]rupee(INR) to dolar(USD)"<<endl ; 
    cout << "[2]rupee(INR) to euro(EUR)"<<endl ; 
    cout << "[3]rupee(INR) to pound(GBP)"<<endl ; 
    cout << "[4]dolar(USD) to rupee(INR)"<<endl ; 
    cout << "[5]dolar(USD) to euro(EUR)"<<endl ; 
    cout << "[6]dolar(USD) to pound(GBP)"<<endl ; 
    cout << "[7]euro(EUR) to rupee(INR)"<<endl ; 
    cout << "[8]euro(EUR) to dolar(USD)"<<endl ; 
    cout << "[9]euro(EUR) to pound(GBP)"<<endl ; 
    cout << "[10]pound(GBP) to rupee(INR)"<<endl ; 
    cout << "[11]pound(GBP) to dolar(USD)"<<endl ; 
    cout << "[12]pound(GBP) to euro(EUR)"<<endl ; 
    cin>> service;

    switch (service)
    {
    case 1:
        cout<<"enter rupee(INR)"<<endl;
        cin>>inp;
        cout<<inp<<"rupee(INR)="<<inp*0.012<<"(USD)"<<endl;
        break;
    case 2:
        cout<<"enter rupee(INR)"<<endl;
        cin>>inp;
        cout<<inp<<"rupee(INR)="<<inp*0.011<<"(EUR)"<<endl;
        break;
    case 3:
        cout<<"enter rupee(INR)"<<endl;
        cin>>inp;
        cout<<inp<<"rupee(INR)="<<inp*0.0095<<"(GBP)"<<endl;
        break;
    case 4:
        cout<<"enter dolar(USD)"<<endl;
        cin>>inp;
        cout<<inp<<"dolar(USD)="<<inp*82.77<<"(INR)"<<endl;
        break;
    case 5:
        cout<<"enter dolar(USD)"<<endl;
        cin>>inp;
        cout<<inp<<"dolar(USD)="<<inp*0.92<<"(EUR)"<<endl;
        break;
    case 6:
        cout<<"enter dolar(USD)"<<endl;
        cin>>inp;
        cout<<inp<<"dolar(USD)="<<inp*0.78<<"(GBP)"<<endl;
        break;
    case 7:
        cout<<"enter euro(EUR)"<<endl;
        cin>>inp;
        cout<<inp<<"euro(EUR)="<<inp*90.13<<"(INR)"<<endl;
        break;
    case 8:
        cout<<"enter euro(EUR)"<<endl;
        cin>>inp;
        cout<<inp<<"euro(EUR)="<<inp*1.09<<"(USD)"<<endl;
        break;
    case 9:
        cout<<"enter euro(EUR)"<<endl;
        cin>>inp;
        cout<<inp<<"euro(EUR)="<<inp*0.85<<"(GBP)"<<endl;
        break;
    case 10:
        cout<<"enter pound(GBP)"<<endl;
        cin>>inp;
        cout<<inp<<"pound(GBP)="<<inp*105.44<<"(INR)"<<endl;
        break;
    case 11:
        cout<<"enter pound(GBP)"<<endl;
        cin>>inp;
        cout<<inp<<"pound(GBP)="<<inp*1.27<<"(USD)"<<endl;
        break;
    case 12:
        cout<<"enter pound(GBP)"<<endl;
        cin>>inp;
        cout<<inp<<"pound(GBP)="<<inp*1.17<<"(EUR)"<<endl;
        break;
    default:
        cout<< "select a valid option"<<endl;
        break;
    }
    cout<< "do you want to repeat "<<endl;
    cout<< "y for yes "<<endl;
    cout<< "n for no "<<endl;
    cin >> repeat;

    } while (repeat != 78);
}