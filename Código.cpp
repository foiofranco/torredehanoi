// Bibliotecas:
#include <iostream>
#include <math.h>
#include <locale.h>

// Facilita��o dos comandos em std:
using namespace std;

// Fun��o auxiliar:
void hanoi (int discos, char origem, char destino, char aux){
    if(discos >= 1){
		hanoi(discos-1, origem, aux, destino);
    	cout << endl << "- Mova o disco superior de " << origem << " para " << destino << "." << endl;
        hanoi(discos-1, aux, destino, origem);
	}
}

// Fun��o principal:
int main(){
	setlocale (LC_ALL, "Portuguese");
    int discos = 0, operacao = 0;
    cout << "[TORRE DE HANOI]" << endl << endl;
    cout << "Digite o n�mero de discos: ";
    cin >> discos;
    operacao = ((pow (2,discos))-1);
    cout << endl << "Ser�o necess�rios apenas " << operacao << " movimentos, intru��es: " << endl;
    hanoi(discos,'A','C','B');
    return 0;
}
