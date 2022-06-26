#include<iostream>

using namespace std;
class stack{
    public:
    int *arr;
    int size;
    int top;
    stack(int size){
      arr=new int[size];
        top=-1;
        this->size=size;

    }
    void push(int data){
        if(top==size-1){
            cout<<"stack overflow"<<endl;
            return;
        }
        top++;
        arr[top]=data;
    }
    void pop(){
        if(top==-1){
            cout<<"stack is empty cannot pop any data "<<endl;
            return;
        }
        cout<<arr[top]<<endl;
        top--;
    }
    bool isempty(){
        if(top==-1){
            cout<<"stack is empty"<<endl;
            return true;
        }
        return false;
    }

    int gettop(){
        return arr[top];
    }


};
int main(){

        stack*  st=new stack(5);
       // st->push(5);
       
        st->push(5);
        cout<<st->gettop()<<endl;
        st->push(5);
         cout<<st->gettop()<<endl;
        st->push(5);
         cout<<st->gettop()<<endl;
        st->push(5);
         cout<<st->gettop()<<endl;
        st->push(5);
         cout<<st->gettop()<<endl;
        st->push(5);

        cout<<st->isempty()<<endl;
        
        cout<<st->gettop()<<endl;
       






    return 0;



}
