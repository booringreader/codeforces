#include<iostream>

int main(){
    int n;
    std::cin >> n;
    if(n==2){
        std::cout << "NO";
        return 0;
    }
    if(n%2 == 0){
        std::cout << "YES";
        return 0;
    }else{
        std::cout << "NO";
    }
}
