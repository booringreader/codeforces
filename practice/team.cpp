#include<iostream>
using namespace std;

int main(){
    int cases, count=0, in, output=0;
    cin >> cases;

    for(int i=0; i<cases; i++){
        count=0;
        for(int j=0; j<3; j++){
            cin >> in;
            if(in==1){
                count++;
            }
        }
        if(count>=2){
            output++;
        }
    }

    cout << output;
}
