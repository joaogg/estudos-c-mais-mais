#include <iostream> 
#include <stdlib.h> 
#include <time.h> 

using namespace std; 

int main() 
{ 
int i = 0, Na, rNa; 

setlocale(LC_ALL, "Portuguese");
system("TITLE Adivinhar um Número! 1.0 // by: JoãoG ");

cout << "-- PROGRAMA PARA ADIVINHAR UM NÚMERO UTILIZANDO FOR! -- \n\n";
cout << "Antes de começar Lembre-se você possui 10 tentativas...\n\n";

srand (time(NULL)); 
rNa = rand() % 100 + 1; 


for ( i=0; i<=9; i++) 
{ 

if(i < 1){
cout << "Digite um número: ";
cin >> Na;
cout <<"\n";

		if (Na == rNa) { 
		cout << "\n\nVOCÊ ACERTOU O NÚMERO SORTEADO EM: " << i << " TENTATIVAS!\nPARABÉNS!" << endl; 
		i = 20;
		} 
	
} else {
	
cout << "Digite outro número:  ";
cin >> Na;

		if (Na == rNa) { 
		cout << "\n\nVOCÊ ACERTOU O NÚMERO SORTEADO EM: " << i << " TENTATIVAS!\nPARABÉNS!" << endl; 
		i = 20;
		} 

if(Na != rNa)		{
            if(Na < rNa){
			cout << "\n\nDica: (Digite um número maior que o Antecessor!)\n";
			
			}else { 
			cout << "\n\nDica: (Digite um número menor que o Antecessor!)\n";
			}
}
			
			


	
	
	
}
}

 
if (i < 20) {
cout << "\n\nVocê não acertou o número em nenhuma tentativa!\n\nO número sorteado era: " << rNa << endl; 
}
cout << "\n\n\n";
system("PAUSE"); 
return 0; 
}
