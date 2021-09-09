#include<bits/stdc++.h>

using namespace std;

int main(){
    list <int> double_ll;

    for(int i=0;i<20;i=i+2){
        double_ll.push_back(i);
    }

    for(auto i = double_ll.begin();i != double_ll.end();i++){
        cout<<" "<<*i;
    }

    cout<<"\nbegin : "<<double_ll.front();
    cout<<"\nend : "<<double_ll.back();
    double_ll.insert(double_ll.begin(), 2, 7);

    for(auto i = double_ll.begin();i != double_ll.end();i++){
        cout<<" "<<*i;
    }

    double_ll.erase(double_ll.begin());
    double_ll.erase(double_ll.begin());
    cout<<endl;

     for(auto i = double_ll.begin();i != double_ll.end();i++){
        cout<<" "<<*i;
    }
    




    return 0;
}