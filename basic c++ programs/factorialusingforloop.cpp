#include <iostream>
using namespace std;
void ramesh(){

    cout << "ramesh is called " <<endl;
}

void rahul(){
    ramesh();

    cout << "rahul is called"<<endl;
} 


void function(){
    rahul();
    cout << "function is called"<<endl;
}

void printsquarenumber(int number){

int product=1;
for(int i=number;i>=1;i--){
    product=product*i;

}
    cout << product;

}

int main(){    //int is the return type if we want to return something 
                //if dont want to return anything then use void return
                //always first main will be executed 
                //function definition syntax will be as return type function_name(paramters passed){function body}
   // //function();//functions are invoked by calling it 
    int number;
    cin >> number;
    printsquarenumber(number);

    return 0;
}

//need of function avoid writing the same code multiple times
//modular approach
//it increases maintainability
// increases code readability
//  a function call stack is maintained which stores all the function call
//always the main is the first one and last one to be taken out of the function stack
// when do a pass by value a copy of the variable is created
//when a function is execution is completed then we remove that function call from the call stack and we return back to the line which next present after the function call
