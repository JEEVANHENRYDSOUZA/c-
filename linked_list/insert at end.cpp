#include<iostream>
using namespace std;
class node{
    public:
    int value;
    node *next;
    node(int data){
        this->value=data;
        this->next=NULL;
    }


};


insertend(node * &head,int data,node* &tail){
node *new_node=new node(data);
new_node->next=NULL;
node * temp=head;
while(temp->next!=NULL){

    temp=temp->next;
}
 temp->next=new_node;
tail=new_node;
cout<<tail->value;

}
int main(){
    cout <<"this is linked list"<<endl;

    node*first= new node(12);
    cout<<first->value<<endl;
    node * head=first;
    //insert at head 
    node * second=new node(11);
    second->next=head;
    head=second;
    cout<<head->value<<endl;
    node* tail=first;
    int data3=13;
    
    insertend(head,data3,tail);


    return 0;
}


//time complexity---->o(n)
