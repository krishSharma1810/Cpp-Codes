#include <iostream>
// to use map include library
#include<map>
using namespace std;



void accessing(map<char,int> &mp){
    // accesing the values of map
    cout<< mp['a']<<endl;
    cout<< mp['b']<<endl;
    cout<< mp['c']<<endl;
    cout<< mp['t']<<endl; //it will return any value.


    // accesing the key and value
    // cout<< p1.first<<endl;
    // cout<< p1.second<<endl;

    cout << mp.size()<<endl; //check the size or number of elements of map

}


map<char,int> insertion(map<char,int> &mp){
    // inserting value in map
    mp['t']=20;

    mp.insert(pair<char,int>('s',19));

    pair<char,int> p1('u',21);
    mp.insert(p1);

    cout<<mp['t']<<endl;
    cout<<mp['s']<<endl;
    cout<<mp['u']<<endl;

    return mp;
    
}

void removing(map<char,int> &mp){
    // erasing the element.
    // mp.erase(p1.first); // removing a single elemet
    mp.clear(); // clearing the whole map.
}


void iteration(map<char,int> &mp){
    // iterating the map
    // set iter from the begining to end with increment of one.
    for (auto iter =mp.begin(); iter != mp.end(); ++iter){
        cout<< iter->first<<endl;
        cout<< iter->second<<endl;
    }
}

void freq_check(string check){
    for (int i=0;i<check.length();i++){
        cout<< check[i]<<endl;
    }
}





int main(){
    
    // map creation
    // map<dtype of key,dtype of value> mapname;
    map<char,int> mp;
    // map declaration
    mp={
        {'a',1},
        {'b',2},
        {'c',3},
        {'d',4}
    };



    string sentence="hello every one hhhiiijjj";
    freq_check(sentence);
    return 0;
}