#include <iostream>

struct AlunoNota{
    std::string name{};
    int nota1{};
    int nota2{}; 
    int nota3{};
    int nota4{};
};

AlunoNota NotasAluno(){
    using namespace std;
    AlunoNota aluno;
    std::cout << "------------------------------\n";
    cout << "Nome do aluno?: ";
    cin >> aluno.name;
    cout << "Digite a primeira nota: ";
    cin >> aluno.nota1;
    cout << "Digite a segunda nota: ";
    cin >> aluno.nota2;
    cout << "Digite a terceira nota: ";
    cin >> aluno.nota3;
    cout << "Digite a quarta nota: ";
    cin >> aluno.nota4;    
    return aluno;
}

int Media(AlunoNota aluno){
    int media = aluno.nota1 + aluno.nota2 + aluno.nota3 + aluno.nota4;
    std::cout << "------------------------------\n";
    std::cout << "media do aluno: " << aluno.name << "\nMedia " << media/4 << '\n';
    std::cout << "------------------------------\n";
    if (media >= 6){
        std::cout << "Azul\n";
        std::cout << "------------------------------\n";
    }
    else if (media <= 5){
        std::cout << "Vermelha";
        std::cout << "------------------------------\n";
    }
}

int main(){
    AlunoNota aluno{NotasAluno()};
    int MediaAluno{Media(aluno)};
    return 0; 
}