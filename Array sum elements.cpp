#include <iostream>

//Soma de elementos do array utilizando const 
void GetNumber(){
    std::cout << "digite um numero :\n";
    const int tamanho = 5;
    int Number[tamanho];
    for (int i = 0; i < tamanho; i++){
    std::cin >> Number[i]; 
    }

    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
    soma += Number[i];
    }
    std::cout << soma;
}

//Soma de elementos do array sem a utilização de const 
void getnumber2(){
    std::cout << "digite um numero:\n";
    int number[5];
    for (int i = 0; i < 5; i++){
    std::cin >> number[i];   
    }

    int soma2 = 0;
    for (int i = 0; i < 5; i++){
    soma2 +=number[i];
    }
    std::cout << soma2;
}

int main(){
    GetNumber();
    getnumber2();
    return 0;
}