#include<iostream>
using namespace std;

class human{
    private:
    char gender;
    int age=23;
    public:
   
    void setage(int a){
        age=a;
    }

    int getage(){
        return age;
    }   

    


};


int main(){
    cout<<"we will be learning object oriented programming in c++"<<endl;
    //what is an object--->a real world object is called as ano object
    //what is a class---->a class  is like a blueprint for the object
    // a class is defined by two things:
    //1.property or also called as attributes
    //2.behaviour
    //access specifier c++ as 3
    //1.private---access within class default case----using getter and setter we can access it outside 
    //2.protected
    //3.public---access anywhere
    //memory is assigned when we create the object
    //when memory is assigned then we do padding
    human *obj=new human();
    obj->setage(90);
    cout<<obj->getage()<<endl;

    return 0;
}
