#include <iostream>
#include <locale.h>

using namespace std;

void hanoi (int discos, char origem, char destino, char aux){
    if(discos >= 1){
		hanoi(discos-1, origem, aux, destino);
    	cout << endl << "- Mover o disco de " << origem << " para " << destino << "." << endl;
        hanoi(discos-1, aux, destino, origem);
	}
}

int main(){
	setlocale (LC_ALL, "Portuguese");
    int discos;
    cout << "[TORRE DE HANOI]" << endl << endl;
    cout << "Digite o número de discos: ";
    cin >> discos;
    hanoi(discos,'A','C','B');
    return 0;
}
