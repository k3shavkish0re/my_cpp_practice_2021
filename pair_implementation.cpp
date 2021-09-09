#include<bits/stdc++.h>

using namespace std;

int main(){
    pair<int,int> p[5];

    for(int i=0;i<5;i++){
        p[i].first = i+5;
        p[i].second = i+10;

    }

    for(int i=0;i<5;i++){
        cout<<"first : "<<p[i].first;
        cout<<"second : "<<p[i].second;
        cout<<endl;
    }



    return 0;
}