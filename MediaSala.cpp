#include <iostream>

struct AlunoNota{
    int nota1{};
    int nota2{}; 
    int nota3{};
    int nota4{};
};

std::string namealuno(){
    using namespace std;
    string name{};
    std::cout << "------------------------------\n";
    cout << "Nome do aluno?: ";
    cin >> name;

    return name;
}

AlunoNota NotasAluno(){
    using namespace std;
    AlunoNota aluno;
    std::cout << "------------------------------\n";
    cout << "Digite a primeira nota: ";
    cin >> aluno.nota1;
    cout << "Digite a segunda nota: ";
    cin >> aluno.nota2;
    cout << "Digite a terceira nota: ";
    cin >> aluno.nota3;
    cout << "Digite a quarta nota: ";
    cin >> aluno.nota4;    
    std::cout << "------------------------------\n";
    return aluno;
}

int Media(AlunoNota aluno){
    int media = (aluno.nota1 + aluno.nota2 + aluno.nota3 + aluno.nota4) / 4 ;
    return media;
}

struct SalaAlunos{
    std::string nameAluno1{namealuno()};
    int media1{Media(NotasAluno())};

    std::string nameAluno2{namealuno()};
    int media2{Media(NotasAluno())};


    std::string nameAluno3{namealuno()};
    int media3{Media(NotasAluno())};


    std::string nameAluno4{namealuno()};
    int media4{Media(NotasAluno())};

    std::string nameAluno5{namealuno()};
    int media5{Media(NotasAluno())};

    std::string nameAluno6{namealuno()};
    int media6{Media(NotasAluno())};

    std::string nameAluno7{namealuno()};
    int media7{Media(NotasAluno())};

    std::string nameAluno8{namealuno()};
    int media8{Media(NotasAluno())};

    std::string nameAluno9{namealuno()};
    int media9{Media(NotasAluno())};

    std::string nameAluno10{namealuno()};
    int media10{Media(NotasAluno())};

};

void MediaSala(SalaAlunos){
    SalaAlunos sala;
    int MediaSala = (sala.media1 + sala.media2 + sala.media3 + sala.media4 + sala.media5) / 4;
    int MediaSala2 = (sala.media6 + sala.media7 + sala.media8 + sala.media9 + sala.media10) / 4;
    int MediaFinal = (MediaSala+MediaSala2);
    std::cout << "------------------------------\n";
    std::cout << "A media da sala foi: " << MediaFinal << '\n';
    std::cout << "------------------------------\n";
    if (MediaFinal<=4)
    {
    std::cout << "------------------------------\n";
    std::cout << "Baixa :(\n";
    std::cout << "------------------------------\n";
    }
    else if (MediaFinal>=8){
        std::cout << "------------------------------\n";
        std::cout << "Alta :)\n";
        std::cout << "------------------------------\n";
    }

    else{
        std::cout << "------------------------------\n";
        std::cout << "Media ;)\n";
        std::cout << "------------------------------\n";

    }
}       

int main(){
    SalaAlunos sala;
    return 0; 
}