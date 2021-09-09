#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int> arr;
    for(int i=0;i<20;i=i+2){
        arr.push_back(i);
    }
    //iterator is like a pointer
    for(auto i = arr.begin(); i!=arr.end();i++){
        cout<<" "<<*i;
    }

    cout<<binary_search(arr.begin(),arr.end(),4);           //to find an element
    cout<<"\nNo. of elements : "<<arr.size();               //size() to find no. of elements
    

    return 0;
}