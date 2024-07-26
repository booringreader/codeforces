#include<iostream>
#include<vector>
using namespace std;

int main(){
    int cases, input,count=0;
    cin >> cases;
    vector<int> output(cases);
        
    for(int i=0; i<cases; i++){
        count=0;
        cin >> input;
        // count animals
            while(input >= 4){
             input -= 4;
             count++;
            }
            if(input == 2){
                count++;
            }
            output[i] = count;
    }
    for(int i=0; i<output.size(); i++){
        cout << output[i] << endl;
    }
    return 0;
}
