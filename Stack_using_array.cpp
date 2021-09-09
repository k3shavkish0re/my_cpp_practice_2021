#include<bits/stdc++.h>

using namespace std;

#define MAX 1000

int stackk[MAX];
int* top = stackk;
int size = 0;

void push(int num){
    if(size >= MAX){cout<<"Overflow"<<endl;;}  
    else{
        top = top+1;
        *top = num;
        size++;
    }  
}
void pop(){
    if(size == 0){cout<<"Underflow"<<endl;}
    else{
        top = top-1;
        size--;
    }
}
void print_top(){
    cout<<"top - "<<*top<<endl;
}
void isempty(){
    if(size == 0){cout<<"Yes, stack is empty!"<<endl;}
    else{cout<<"No, stack is not empty"<<endl;}
}




int main(){
push(10);
push(20);
push(22);
push(12);
print_top();
pop();
pop();
pop();
pop();
pop();
isempty();
return 0;
}