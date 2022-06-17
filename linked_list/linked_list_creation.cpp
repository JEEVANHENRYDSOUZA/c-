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
    cout<<first->value;

    


    return 0;
}
