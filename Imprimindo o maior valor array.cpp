#include <iostream>

int getvalue(){
    std::cout << "Digite um numero:\n";
    int value[4];
    for (int i = 0; i < 4; i++){
    std::cin >> value[i];
    }
    int tamanho = sizeof(value) / sizeof(value[0]);
    int maior = value[0];

    for (int i = 1; i < tamanho; i++){
        if(value[i] > maior){
            maior = value[i];
        }
    }
    std::cout << "o maior valor é: " << maior;
}
int main (){
    getvalue();
    return 0;
}