#include<iostream>
using namespace std;
    int reverse(int x) {
        int ans = 0;
        int check;
        if(x<0){
            check=x;
            x=x*(-1);//for negative number make it positive and then again add the negative sign to it
        }
        while(x != 0){
            int digit = x%10;
            if(ans >= INT_MIN/10 && ans <= INT_MAX/10){
            ans = ans*10 + digit;
            }
            else{
                break;
            }
            x = x/10;
            
        }
        if(x == 0) 
        {   if (check < 0){
            ans=ans*-1;
        }
            
            return ans;
        
        }
        else return false;

    }


int main(){

    int returned_value;
    int number;
    cout <<"enter the number that you want to reverse" << endl;
    cin >> number;
    returned_value=reverse(number);
    cout << returned_value << endl;
    return 0;
}
