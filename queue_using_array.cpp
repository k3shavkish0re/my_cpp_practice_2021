#include<bits/stdc++.h>

using namespace std;

#define MAX 1000

int Que[MAX];
int front = 0;
int  back = 0;
int size = 0;

void enqueue(int num){
    if(size >= MAX){cout<<"Overflow"<<endl;;}  
    else{
        Que[back] = num;
        back = back+1;
        size++;
    }  
}
void dequeue(){
    if(size == 0){cout<<"Underflow"<<endl;}
    else{
        front = front+1;
        size--;
    }
}
void get_front(){
    cout<<"front - "<<Que[front]<<endl;
}

void get_back(){
    cout<<"back - "<<Que[back-1]<<endl;
}
void isempty(){
    if(size == 0){cout<<"Yes, Queue is empty!"<<endl;}
    else{cout<<"No, Queue is not empty"<<endl;}
}




int main(){
enqueue(10);
get_front();
enqueue(112);
enqueue(121);
get_front();
get_back();
enqueue(101);
dequeue();
dequeue();
dequeue();
dequeue();
dequeue();
dequeue();
isempty();
return 0;
}