#include <iostream>//header file for cout
using namespace std;//go to namespace and use the cout present in that directory
int main() {
    int b=3;
    float a=5.0;//c++ is not dynamicallty typed language hence we have to manually do this
            //here int is the data type  
            //a is the variable that has the address to that memory allocated to it
            //it also takes the size of the data how much memory needs to be allocated to it
    char sample='k';
    bool sample_2=true;
    float sample_3=10.3;
    double sample_4=11.12231;
    cout<<"value of a is "<< a <<endl;    //convetion to name variable do not start the name with numbers
    //we can also use _ at the start
    cout<<"size of a is "<<sizeof(a)<<endl;
    std::cout << "Hello World!" << endl;//endl for new line
    //arithetic operators +,-,/,%

    
    cout << a <<endl;
    float ans=a/b;
    cout << ans;//will give float

    //float/int =float
    //this is implicit type casting
    return 0;
}
