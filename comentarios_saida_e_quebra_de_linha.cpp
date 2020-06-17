#include <iostream>
// Esse cabeçalho permite usar recursos de entrada e saída de dados, como cout<< e cin>>
using namespace std;

/*
Permite usar nomes para objetos e variáveis da biblioteca standard
 Se este comando não for usado, há uma alternativa:
 std::cout<<"Hello, World!";
 */
int main() {
    // main() é uma função, e as chaves {} delimitam o código a ser executado

    cout<<"Hello, World!"<<"I'm learning C++";
    cout<<"Hello, World!";
    cout<<"I'm learning C++";
    // Todas essas strings acima ficarão numa mesma linha.
    cout << "\n";
    cout<<"Hello, World!"<<endl;
    // endl e "\n" inserem uma linha nova. Dois seguidos inserem uma linha em branco
    cout<<"I'm learning C++!!";
    /*
    'cout' é um objeto, '<<' o operador de inserção para imprimir texto.
    Todo comando em C++ termina com ';'
         
     Os comentários de uma linha e de múltiplas linhas são iguais aos do Java: // e /* */ /*
     */
    cout<<"Há um comentário depois dessa frase"<<endl; // Comentários podem ser inseridos ao lado de uma linha de código

    return 0;
    // Finaliza a função main()
}
