#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
float consumo = 12, combustivel;
int duracao, velocidadeMedia;

cin>>duracao;
cin>>velocidadeMedia;

combustivel = (velocidadeMedia * duracao) / consumo;

cout<<fixed<<setprecision(3);
cout<<combustivel<<endl;
 
return 0;
}
