#include <iostream>//header file for cout
using namespace std;//go to namespace and use the cout present in that directory
int main() {
    int a=5;//c++ is not dynamicallty typed language hence we have to manually do this
            //here int is the data type  
            //a is the variable that has the address to that memory allocated to it
            //it also takes the size of the data how much memory needs to be allocated to it
            //endl is for next line
    char sample='k'; // char cannot be more than one character
    bool sample_2=true;
    float sample_3=10.3;
    double sample_4=11.12231;
    //convetion to name variable do not start the name with numbers
    //we can also use _ at the start

    std::cout << "Hello World!" << endl;//endl for new line
    return 0;
}
