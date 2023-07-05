#include <iostream>

int getnumb(){
    int x{};
    std::cout << "digite um numero\n"; 
    std::cin >> x ; 
    return x ;
}

void operation(int x, int y){
    char operation{};
    std::cout << "escolha uma operação ( +, - , / , * )\n"; 
    std::cin >> operation;
    switch (operation){
    case '+':
        std::cout << "O resultado de :" << x << " + " << y << " é " << x + y << '\n';
        break;
    case '-':
        std::cout << "O resultado de :" << x << " - " << y << " é " << x - y << '\n';
        break;
    case '/':
        break;
        std::cout << "O resultado de :" << x << " / " << y << "/ " << x / y << '\n';
    case '*':
        std::cout << "O resultado de :" << x << " * " << y << " é " << x * y << '\n';
        break;
    default:
        break;
    }

}

int main(){
while (true){
    int x{getnumb()};
    int y{getnumb()};
    
    operation(x,y);
}
    return 0;
}