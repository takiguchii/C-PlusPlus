#include <iostream>

void calc(){
    int num{};
    std::cout << "Digite um numeroo: ";
    std::cin >> num ;
    std::cout << "o tripo de "<< num << " é " << num * 3 ;
}
int main(){
    calc();
    return 0; 
}