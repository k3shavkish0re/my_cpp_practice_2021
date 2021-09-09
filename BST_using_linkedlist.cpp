#include<bits/stdc++.h>

using  namespace std;

class bstree{
public:
    int data;
    bstree* left , *right;
};

int insert(bstree** head, int data){
    if(*head == NULL){
        *head = new bstree();
        (*head)->data = data;
        (*head)->left = NULL;
        (*head)->right = NULL;
    }

    else if(data<=(*head)->data){
        insert(&((*head)->left), data);
    }
    
    else{
        insert(&((*head)->right), data);
    }
    return 0;
}

void preorder(bstree** head){
if((*head)== NULL){return;}
cout<<(*head)->data;cout<<" ,";
preorder(&((*head)->left));
preorder(&((*head)->right));
}

void inorder(bstree** head){
if((*head)== NULL){return;}
inorder(&((*head)->left));
cout<<(*head)->data;cout<<" ,";
inorder(&((*head)->right));
}

void postorder(bstree** head){
if((*head)== NULL){return;}
postorder(&((*head)->left));
postorder(&((*head)->right));
cout<<(*head)->data;cout<<" ,";
}

int find_data(bstree** head, int data){
    if(*head == NULL)return 0;
    if(data == (*head)->data){return 1;}
    if(data < (*head)->data){return find_data(&((*head)->left), data);}
    if(data > (*head)->data){return find_data(&((*head)->right), data);}
}

bstree* inorder_successor(bstree* head){
    if(head == NULL || (head)->right == NULL)return head;
    head = (head)->right;
    while((head)->left){
        head = (head)->left;
    }
    return head;
} 

void delete_data(bstree** head, int data){
    if(*head == NULL)return;
    if(data < (*head)->data ){
        delete_data(&((*head)->left), data);
        
    }
    else if(data > (*head)->data){
        delete_data(&((*head)->right), data);
    }
    else{
        cout<<"\nequal block where head is "<<(*head)->data;
        if((*head)->left == NULL && (*head)->right == NULL){
            cout<<"\nequal block where head is "<<(*head)->data<<"has no child";
            delete *head;
            return;
        }
        else if((*head)->left == NULL){
            cout<<"\nequal block where head is "<<(*head)->data<<"has 1 child on right";
            bstree* temp = (*head)->right;
            delete *head;
            *head = temp;
            return;
        }
        else if((*head)->right == NULL){
            cout<<"\nequal block where head is "<<(*head)->data<<"has 1 child on left";
            bstree* temp = (*head)->left;
            delete *head;
            *head = temp;
            return;
        }
        else{
            cout<<"\nequal block where head is "<<(*head)->data<<"has 2 child";
            bstree* temp1 = *head;
            bstree* temp = inorder_successor(temp1);
            cout<<endl<<"inordersuccessor of : "<<(*head)->data<<" is"<<temp->data; 
            (*head)->data = temp->data;
            delete_data(&temp, temp->data);
            return;
        }
    }

}


int main(){
    bstree* head = NULL;
    insert(&head, 55);
    insert(&head, 12);
    insert(&head, 100);
    insert(&head, 98);
    insert(&head, 44);
    cout<<"preorder traversal - ";
    preorder(&head);
    cout<<endl;
    cout<<"postorder traversal - ";
    postorder(&head);cout<<endl;
    cout<<"inorder traversal - ";
    inorder(&head);
    delete_data(&head, 55);
    cout<<endl;
    cout<<head->data;
    cout<<head->left->data;
    cout<<head->right->data;
    return 0;
}