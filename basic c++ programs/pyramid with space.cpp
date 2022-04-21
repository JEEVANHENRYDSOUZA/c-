/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int rows ;
   int columns;
   cout <<"enter the number of rows which you want" <<endl;
    cin >> rows ;
    cout <<"enter the number of columns which you want" <<endl;

    cin >> columns;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows-j;j++){
            cout << " ";
        }
        
        
        
        for(int k=1;k<=i;k++){
            cout <<" *";
            
        }
        cout << endl;
    }
    return 0;
}
