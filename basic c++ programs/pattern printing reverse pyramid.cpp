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
        for(int j=columns;j>=i;j--){
            cout <<"*";
            
        }
        cout << endl;
    }
    return 0;
}
