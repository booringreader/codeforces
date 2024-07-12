#include<iostream>

int main(){
    int n;
    std::cin >> n;
    std::string s[n];
    for(int i = 0; i<n; i++){
        std::cin >> s[i];
    }
    for(int i = 0; i<n; i++){
        if(s[i].length() > 10){
            s[i] = s[i].at(0) + std::to_string(s[i].length()-2) + s[i].at(s[i].length()-1); 
        }
        std::cout << s[i] << std::endl;
    }
}
