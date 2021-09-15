<h2>Torre de Hanoi</h2>
<p align="justify">Provido através de uma lenda vietnamita decifrada pelo matemático frânces Édouard Lucas em 1883, o jogo Torrei de Hanoi acontece acerca da movimentação de uma pilha de discos de uma torre A (origem) para uma torre B (destino) com a ajuda de uma torre C (auxílio), sendo delimitado pelos princípios de utilizar a menor quantidade de movimentos, mover um disco por vez e não alocar um disco maior sobre um disco menor.</p>

<h2>Número de Movimentos</h2>
<p align="justify">O número mínimo de movimentos para encerrar uma partida pode ser obtido através da operação (2^n)-1, onde n é o número de discos alocados na torre de origem e o determinante do nível de dificuldade do jogo.</p>

<h2>Codificação em C++</h2>

~~~~C++
// Bibliotecas:
#include <iostream>
#include <math.h>
#include <locale.h>

// Abreviação STD:
using namespace std;

// Função auxiliar:
void hanoi (int discos, char origem, char destino, char aux){
  if(discos >= 1){
      hanoi(discos-1, origem, aux, destino);
      cout << endl << "- Mova o disco superior de " << origem << " para " << destino << "." << endl;
      hanoi(discos-1, aux, destino, origem);
  }
}

// Função principal:
int main(){
    setlocale (LC_ALL, "Portuguese");
    int discos = 0, operacao = 0;
    cout << "[TORRE DE HANOI]" << endl << endl;
    cout << "Digite o número de discos: ";
    cin >> discos;
    operacao = ((pow (2,discos))-1);
    cout << endl << "Serão necessários apenas " << operacao << " movimentos, intruções: " << endl;
    hanoi(discos,'A','C','B');
    return 0;
}

~~~~

