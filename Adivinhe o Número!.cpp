#include <iostream> 
#include <stdlib.h> 
#include <time.h> 

using namespace std; 

int main() 
{ 
int i = 0, Na, rNa; 

setlocale(LC_ALL, "Portuguese");
system("TITLE Adivinhar um N�mero! 1.0 // by: Jo�oG ");

cout << "-- PROGRAMA PARA ADIVINHAR UM N�MERO UTILIZANDO FOR! -- \n\n";
cout << "Antes de come�ar Lembre-se voc� possui 10 tentativas...\n\n";

srand (time(NULL)); 
rNa = rand() % 100 + 1; 


for ( i=0; i<=9; i++) 
{ 

if(i < 1){
cout << "Digite um n�mero: ";
cin >> Na;
cout <<"\n";

		if (Na == rNa) { 
		cout << "\n\nVOC� ACERTOU O N�MERO SORTEADO EM: " << i << " TENTATIVAS!\nPARAB�NS!" << endl; 
		i = 20;
		} 
	
} else {
	
cout << "Digite outro n�mero:  ";
cin >> Na;

		if (Na == rNa) { 
		cout << "\n\nVOC� ACERTOU O N�MERO SORTEADO EM: " << i << " TENTATIVAS!\nPARAB�NS!" << endl; 
		i = 20;
		} 

if(Na != rNa)		{
            if(Na < rNa){
			cout << "\n\nDica: (Digite um n�mero maior que o Antecessor!)\n";
			
			}else { 
			cout << "\n\nDica: (Digite um n�mero menor que o Antecessor!)\n";
			}
}
			
			


	
	
	
}
}

 
if (i < 20) {
cout << "\n\nVoc� n�o acertou o n�mero em nenhuma tentativa!\n\nO n�mero sorteado era: " << rNa << endl; 
}
cout << "\n\n\n";
system("PAUSE"); 
return 0; 
}
