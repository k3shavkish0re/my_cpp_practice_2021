#include<bits/stdc++.h>

using namespace std;


   class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mp;
        mp.insert({'I',1});
        mp.insert({'V',5});
        mp.insert({'X',10});
        mp.insert({'L',50});
        mp.insert({'C',100});
        mp.insert({'D',500});
        mp.insert({'M',1000});
        
        int sum = 0;
        
        for(auto i = s.begin(); i!=s.end();i++){
            if(mp[*i]>=mp[*(i+1)]){
                sum = sum+mp[*i];
            }
            else{
                sum = sum - mp[*i];   
            }
            
            
        }
        
        return sum;
        
    }
};

int main(){

    unordered_map<int, int> mp;
    for(int i=0;i<5;i++){
        mp.insert({i, i*10});
    }

    for(auto i=mp.begin();i!= mp.end();i++){
        cout<<i->first<<" "<<i->second<<endl;
    }



    return 0;
}