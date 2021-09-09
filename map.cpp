#include<bits/stdc++.h>

using namespace std;

int main(){
    map<int, int> mp;
    for(int i=0;i<5;i++){
        mp.insert({i, i*10});
    }

    for(auto i=mp.begin();i!= mp.end();i++){
        cout<<i->first<<" "<<i->second<<endl;
    }



    return 0;
}