#include<iostream>
using namespace   std;
int main(){
int a;
cout <<"enter a value"<<endl;
cin >> a;
cout <<a<<endl;
if(a>0){    
    cout <<"number is positive"; //when if conditiion is TRUE
}
else{
    cout << "number is negative " << endl;//when if condition is FALSE  
}
if(a>0){
    cout<<"number is positive "<< endl;//elsif will run only when if is FALSE
}
else if(a==1){
    cout << "we found the number "<<endl;
}
else{
    cout <<"welcome to conditionals"<<endl;//when none of the else if are false then evaluated
}



return -1;
}
