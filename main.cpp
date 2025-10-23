#include <iostream> // Substitui <atdio.h> para entrada e saida
#include <cstdlib> // Substitui <stdlib.h> para std::system

  // Função principal do programa(padrão C++)
  int main(){

     // Imprime na tela usando std::cout
     std::cout<< "Oi mundo!";

     // Pausa o programa apos executar
     // Adicionar uma quebra de linha para a mensagem "pause" para não ficar colada
     std::cout<<"\n";
     std::system("pause");// Em C++, é boa prática usar std::system

     return 0; // int main() deve retornar 0
}