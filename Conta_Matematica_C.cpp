//f(x) = x^2 - 3x + 5
//f(2) = 2^2 - 3 * 2 + 5

#include <iostream>

int getnumber(){
    using namespace std;
    int numb{};
    cout << "Escolha um numero: ";
    cin >> numb;
    cout << "-------------------------------------\n";
    return numb;
}
int operation(int numb){
    using namespace std;
    cout << "A operação: f(x) = x^2 - 3x + 5 \n";
    cout << "-------------------------------------\n";
    cout << "f = " << numb << " = x^2 - 3 * 2 + 5 \n";
    cout << numb << " = " << numb * numb << " - 3 * 2 + 5 \n";
    return numb * numb ;
}

int operation2(int result){
    using namespace std;
    cout << "9 = " << result - 3  << " * 2 + 5 \n";
    return result - 3 ;
}
int operation3(int result2){
    using namespace std;
    cout << "9 = " << result2 * 2  << " + 5 \n";
    return result2 * 2 ;
}

void operation4(int result3){
    using namespace std;
    cout << "-------------------------------------\n";
    cout << "O resultado é: " << result3 + 5 << '\n';
    cout << "-------------------------------------\n";
    
}
int main(){

    int numb{getnumber()};
    int result{operation(numb)};
    int result2{operation2(result)};
    int result3{operation3(result2)};
    operation4(result3);

    return  0 ; 
}