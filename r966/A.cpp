#include<iostream>
using namespace std;

int main(){
    int i, input;
    cin >> i;

    while(i--){
       cin >> input;
       if(input > 1999){
           cout << "no"<< endl;
       }else{
           if((input%10)>=2){
               cout << "yes"<< endl;
           }
       }
    }
}
