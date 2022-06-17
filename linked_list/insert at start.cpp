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
    


    return 0;
}


//time compleity---->o(1)
