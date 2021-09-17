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

using namespace std;

void hanoi (int discos, char origem, char destino, char aux){
  if(discos >= 1){
      hanoi(discos-1, origem, aux, destino);
      cout << endl << "- Mova o disco superior de " << origem << " para " << destino << "." << endl;
      hanoi(discos-1, aux, destino, origem);
  }
}

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

<h2>Objetivo do Código</h2>
<p align="justify">O código em questão tem como finalidade exibir o número mínimo de movimentos para encerrar uma partida e instruir a movimentação de discos com base no mesmo, se referindo a origem como A, destino como B e auxílio como C.</p>

<h2>Composição do Código</h2>

- Bibliotecas:
~~~C++
#include <iostream> // Comandos de entrada e saída.
#include <math.h> // Operações matemáticas avançadas.
#include <locale.h> // Definição de idioma.

~~~~
<br>

- Função Principal:
~~~C++
int main(){
    setlocale (LC_ALL, "Portuguese"); // Definição de idioma.
    int discos = 0, operacao = 0; // Variáveis para armazenar o número de discos e operação matemática do nº de movimentos.
    cout << "[TORRE DE HANOI]" << endl << endl; // Enunciado.
    cout << "Digite o número de discos: "; // Impressão do pedido do nº de discos.
    cin >> discos; // Armazenamento do nº de discos.
    operacao = ((pow (2,discos))-1); // Operação matemática do nº de movimentos.
    cout << endl << "Serão necessários apenas " << operacao << " movimentos, intruções: " << endl;
    hanoi(discos,'A','C','B'); // Chamada da função auxiliar com base no nº e na alternância de caracteres por recursividade.
    return 0; // Retorno zero para resultado em comando de saída.
    
  ~~~
 <br>
  
- Função Auxiliar:
~~~C++
void hanoi (int discos, char origem, char destino, char aux){
  if(discos >= 1){ // Condição para encerramento do programa após a realização do último movimento.
      hanoi(discos-1, origem, aux, destino); // Redução do número discos com base no padrão de alternância de posição de Hanoi.
      cout << endl << "- Mova o disco superior de " << origem << " para " << destino << "." << endl; // Impressão das intruções.
      hanoi(discos-1, aux, destino, origem); // Redução do número discos com base no padrão de alternância de posição de Hanoi.
  }
}
