#include<bits/stdc++.h>

using namespace std;

class minheap{
    public:
        int arr[1000] = {INT_MIN};
        int size = 0;
};

int getmin(minheap* minhp){
    return *(minhp->arr);
}

void percolate(int* arr, int index){
    while(index){
        int temp = *(arr+index);
        *(arr+index) = *(arr+(index-1)/2);
        *(arr+(index-1)/2) = temp;
        index = (index-1)/2;
    } 
    return;
}

void insert_element(minheap* minhp, int val){
    *(minhp->arr + minhp->size) = val;
    cout<<*(minhp->arr + minhp->size)<<" ";
    (minhp->size)++;

    if(val<getmin(minhp)){
      percolate(minhp->arr , minhp->size-1);
      return;  
    }
    else{
        cout<<"\nvalue is more";
        return;
    }
}




int main(){
    minheap heap1;
    
    insert_element(&heap1, 5);
    insert_element(&heap1, 10);
    insert_element(&heap1, 3);
    insert_element(&heap1, 2);
    insert_element(&heap1, 1);
    


    cout<<"\nsize : "<<heap1.size<<endl;
        for(int i=0;i<5;i++){
        cout<<heap1.arr[i]<<" ";
    }
    


    return 0;
}