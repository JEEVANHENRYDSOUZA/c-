#include<iostream>
#include<cstring>
using namespace std;
int getlength(char array[]){
    int index=0;

    for (int i=0;array[i]!='\0';i++){
        index++;
    }
    cout<<index<<endl;
    
}


int main(){
    //all  characters are mapped to an integer called as ascii value

    //creating a character array or string
    char array[5];
    //this is a character array of size 5
    //taking user input character
    cin >>array;
    cout<<array<<endl;
    //space also has a null value
    //differnce between string and character array is for character array the memory is allocated statically and for string it is dynamically allocated this how they are implemented in c++
    //since string are dynamically allocated we can change them at runtime
    
    getlength(array);
    //we can also use some inbuilt function in c++ to find the length of the string as
    
    
    
    cout<<strlen(array)<<endl;//counts only the nuber of characters 
    char array2[10]="bb";
    cout<<strcmp(array,array2)<<endl;//0 for equal
    cout<<strcmp("jeevan",array)<<endl;//<0 for not equal
    cout<<strcmp("good","bad")<<endl;//>0 for not equal
    //<0 for smaller than
    
    




    return 0;
}
