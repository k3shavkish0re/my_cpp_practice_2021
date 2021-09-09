#include <bits/stdc++.h>
using namespace std;

class Node{
    public: 
            int data;
            Node* link;
};

void print_list(Node** head){
Node* temp = *head;
while(temp){
    cout<<temp->data<<"->";
    temp=temp->link;
}
cout<<endl;
}

void insert_node(Node** ptr , int data){
if(*ptr){
    Node* temp = new Node();
    temp->data = data;
    temp->link = (*ptr)->link;
    (*ptr)->link = temp;
}
else{
    *ptr = new Node();
    (*ptr)->data = data;
    (*ptr)->link = NULL;
}
}

void insert_node_front(Node** ptr , int data){
if(*ptr){
    Node* temp = new Node();
    temp->data = data;
    temp->link = *ptr;
    (*ptr) = temp;
}
else{
    *ptr = new Node();
    (*ptr)->data = data;
    (*ptr)->link = NULL;
}
}

void insert_node_back(Node** ptr , int data){
Node* temp_head = *ptr;    
while(temp_head->link){
    temp_head = temp_head->link;
}
Node* temp = new Node();
temp->data = data;
temp->link = NULL;
temp_head->link = temp;
}

void delete_Node_front(Node** ptr){
if(*ptr == NULL){cout<<"empty";}
else{
    Node* temp = (*ptr)->link;
    delete *ptr;
    *ptr = temp;
}
}

void delete_Node_back(Node** ptr){
Node* temp_head  = *ptr;
if(temp_head == NULL){cout<<"empty";}
else{
    while(temp_head->link->link){temp_head = temp_head->link;}
    delete temp_head->link;
    temp_head->link  = NULL;
}
} 

void delete_Node(Node** ptr, int pos){
Node* temp_head = *ptr;
    for(int i = 0;i<pos-2;i++){
        temp_head = temp_head->link;
    }
    Node* temp = temp_head->link;
    temp_head->link = temp_head->link->link;
    delete temp;
}

int size_of_list(Node** ptr){
    int num = 0;
    Node* temp_head = *ptr;
    while(temp_head){
        num++;
        temp_head = temp_head->link;
    }
    return num;
}

void reverse_list(Node** ptr){
    Node* temp_head = *ptr;
    if(size_of_list(&temp_head)==0){
        cout<<"empty";
    }
    else if(size_of_list(&temp_head)==1){
        cout<<"only 1 element";
    }
    else if(size_of_list(&temp_head)==2){
        Node* temp1 = (*ptr);
        *ptr = (*ptr)->link;
        (*ptr)->link = temp1;
        (*ptr)->link->link = NULL;
    }
    else{
        Node* temp1 = (*ptr);
        Node* temp2 = (*ptr)->link;
        Node* temp3 = (*ptr)->link->link;
        temp1->link = NULL;
        while(temp2){
            temp2->link = *ptr;
            *ptr = temp2;
            temp2 = temp3;
            if(temp3){temp3 = temp3->link;}
        }
        
    }
}


int main(){
Node* head = NULL;
insert_node(&head, 2);
insert_node_front(&head, 4);
insert_node_front(&head, 6);
insert_node_front(&head, 8);
insert_node_front(&head, 10);
insert_node_back(&head, 1);
print_list(&head);
delete_Node(&head, 2);
print_list(&head);
delete_Node_back(&head);
print_list(&head);
delete_Node_front(&head);
print_list(&head);
cout<<size_of_list(&head)<<endl;
reverse_list(&head);
print_list(&head);

return 0;
}