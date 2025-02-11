#include<iostream>
#include<map>

using namespace std;

    int romanNumber(string s){
        map<char,int> values ={
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000},
        };


        int total=0;
        for (int i=0;i< s.length();i++)
        {
            if(values[s[i]] >= values[s[i+1]])
            {
                total = total + values [s[i]];
            }
            else{
                total = total - values [s[i]];
            }
        }
        return total;
    }
int main()
{
    int ans;
    string get;
    cout << "enter the roman number to get in decimal: "<<endl;
    cin >> get;
    ans=romanNumber(get);
    cout << ans << endl;
    return 0;
}