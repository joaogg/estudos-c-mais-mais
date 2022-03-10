#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstdlib>
#include <iomanip> 
#include <string.h> 

using namespace std;

void AAA();
void BBB();
void CCC();
void DDD();
void EEE();
void FFF();
void GGG();

      struct Cadastro { 
                        int id;
			            char chassi[100];
			            char plac[100];
			            char marc[100]; 
			            char mod[100];
			            char rev[100];
			            char end[100];
			            char tel[100];  
			            int tip;
                       } c[300];
                       
      struct Motoristas { 
                        int id;
			            char mat[100];
			            char nome[100];
			            char va[100]; 
			            char vh[100];
			            int cv;
                        char ha[100];                          
                       } m[300];


      struct Movimentacao { 
                        int idA, idB;
			            char data[100];
			            int qi, qf;                   
                       } v[500];

      struct Manutencao { 
                        int id;
			            char desc[100];
			            char manu[100];                  
			            char data[100];     
                       } a[500];
                       
                       
// Ve�culo a Passeio = 1    
						int vm[200];
						int qp[200];

// Ve�culo a Carga  = 2                  
                       int cm[200];

            int Cont = 0;
            int Count = 0;
            int Mais1 = 0;
            int M = 0;
			            
            int Veic = 0;
            
// Usa �culos = 1  
// N�o Usa �culos = 2  
            
            int h;

int main()
{
    
    int opt;
    char es;

    setlocale (LC_ALL, "Portuguese");   
    system("TITLE PROGRAMA: EMPRESA DE TRANSPORTES! ");
    system("color 71");

do{
    system("cls");                  
    cout << "------------------------------------------------------------------------------\n";       
	cout <<  "\n|---////---| MENU DE OP��ES \n";
	cout << "\n------------------------------------------------------------------------------\n";
	cout << "\n";
	cout << "(1). Armazenar informa��es sobre os ve�culos\n";
	cout << "(2). Armazenar informa��es sobre os motoristas\n";
	cout << "(3). Armazenar movimenta��es de ve�culos\n";
	cout << "(4). Armazenar manuten��es de ve�culos\n";
	cout << "(5). Listando Ve�culos e Movimenta��es\n";
	cout << "(6). Listando Ve�culos e Manuten��es\n";
	cout << "(7). Estat�sticas do Sistema\n";
	cout << "(8). Sair\n\n";
	cout << ">> ";
    cin >> opt;
        


// 1111111111111111111111111111111111111111111111
if(opt == 1){  
    AAA();     
       }
// 2222222222222222222222222222222222222222222222     
if(opt == 2){  
    BBB();     
       }
// 333333333333333333333333333333333333333333333
if(opt == 3){  

if(Cont <= 0 || Count <= 0){
	
	system("cls"); 
	cout << "*** AVISO: Nenhum Ve�culo ou Motorista cadastrado no sistema para se realizar uma movimenta��o!\n\n";
	cout << "Digite qualquer tecla e pressione enter para continuar\n";
	cout << ">> ";
    cin >> es;
	
} else {
	    CCC(); 
}    
       }
// 444444444444444444444444444444444444444444444
if(opt == 4){  

if(Cont <= 0 || Count <= 0){
	
	system("cls"); 
	cout << "*** AVISO: Nenhum Ve�culo ou Motorista cadastrado no sistema para se realizar uma movimenta��o!\n\n";
	cout << "Digite qualquer tecla e pressione enter para continuar\n";
	cout << ">> ";
    cin >> es;
	
} else {
	    DDD(); 
}    
       }
// 555555555555555555555555555555555555555555555           
if(opt == 5){  
    EEE();     
       }
       
// 666666666666666666666666666666666666666666666           
if(opt == 6){  
    FFF();     
       }
       
if(opt == 7){  
    GGG();     
       }
		      
} while(opt != 8); 
            
      system("PAUSE>>null");
}

// AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
void AAA() { 
     
int Q, i, A, B;
     
    system("cls");       
    cout << "------------------------------------------------------------------------------\n";       
	cout <<  "\n|---////---| ARMAZENANDO INFORMA��ES SOBRE OS VE�CULOS \n";
	cout << "\n------------------------------------------------------------------------------\n";
	cout << "\n";
	
	
	do{
  	cout << "(OP). Quantos informa��es sobre ve�culos deseja armazenar?\n";
	cout << ">> ";
	cin >> Q;  
	
	if(Q < 1){
		  	cout << "(*AVISO). Imposs�vel armazenar " << Q << " ve�culos!\n\n";
	}
	
	} while(Q < 1); 
	
	
	system("cls");       
    cout << "------------------------------------------------------------------------------\n";       
	cout <<  "\n|---////---| ARMAZENANDO INFORMA��ES SOBRE OS VE�CULOS \n";
	cout << "\n------------------------------------------------------------------------------\n";
	cout << "\n";
	
	if(Q < 1){
		
	Cont = Cont + 1;
	
	c[Cont].id= Cont;
	
	do{	
	cout << "(A). Digite o Chassi do "<< Cont <<"� Ve�culo (EX: 123456789123)\n";
	cout << ">> ";
	fflush(stdin);
	gets(c[Cont].chassi);	
	cout << "\n\n";
	A = 0;
	B = 0;
	
	for(h=0; h<Cont; h++){
             
             if(h != Cont){
                  if(strcmp(c[Cont].chassi, c[h].chassi) == 0){     
                  B = 1;
                  }
                          }
             
             }
	
	if(strlen(c[Cont].chassi) == 0){
	A = 1;
	cout << "- Voc� n�o digitou nada!\n\n";
    }
    
	if(B == 1){
	cout << "- Chassi j� existente!\n\n";
    }
        
    }while(A == 1 || B == 1);
    
	do{
	cout << "(B). Digite a Placa do "<< Cont <<"� Ve�culo (EX: ABC1234)\n";
	cout << ">> ";
	fflush(stdin);
	gets(c[Cont].plac);
	cout << "\n\n";
	A = 0;
	B = 0;
	
	for(h=0; h<Cont; h++){
             
             if(h != Cont){
                  if(strcmp(c[Cont].plac, c[h].plac) == 0){     
                  B = 1;
                  }
                          }
             
             }
	
	if(strlen(c[Cont].plac) == 0){
	A = 1;
	cout << "- Voc� n�o digitou nada!\n\n";
    }
    
	if(B == 1){
	cout << "- Placa j� existente!\n\n";
    }
        
    }while(A == 1 || B == 1);
	
	do{
	cout << "(C). Digite a Marca do "<< Cont <<"� Ve�culo (EX: FORD)\n";
	cout << ">> ";
	fflush(stdin);
	gets(c[Cont].marc);
	cout << "\n\n";
	
	A = 0;
	
	if(strlen(c[Cont].marc) == 0){
	A = 1;
	cout << "- Voc� n�o digitou nada!\n\n";
    }
    }while(A == 1);
	
	
	do{
	cout << "(D). Digite o Modelo do "<< Cont <<"� Ve�culo (EX: GOL)\n";
	cout << ">> ";
	fflush(stdin);
	gets(c[Cont].mod);
	cout << "\n\n";
	A = 0;
	
	if(strlen(c[Cont].mod) == 0){
	A = 1;
	cout << "- Voc� n�o digitou nada!\n\n";
    }
    }while(A == 1);
	
	do{
	cout << "(E). Digite o Revendedor do "<< Cont <<"� Ve�culo (EX: Francisco Silva)\n";
	cout << ">> ";
	fflush(stdin);
	gets(c[Cont].rev);
	cout << "\n\n";
	A = 0;
	
	if(strlen(c[Cont].rev) == 0){
	A = 1;
	cout << "- Voc� n�o digitou nada!\n\n";
    }
    }while(A == 1);
	
	do{
	cout << "(F). Digite o Endere�o do Revendedor do "<< Cont <<"� Ve�culo (EX: Rua Jos�, Bairro Boa Vista, 55)\n";
	cout << ">> ";
	fflush(stdin);
	gets(c[Cont].end);
	cout << "\n\n";
    A = 0;
	
	if(strlen(c[Cont].end) == 0){
	A = 1;
	cout << "- Voc� n�o digitou nada!\n\n";
    }
    }while(A == 1);
	
	cout << "(G). Digite o Telefone do Revendedor do "<< Cont <<"� Ve�culo (EX: 3500008888)\n";
	cout << ">> ";
	cin >> c[Cont].tel;
	cout << "\n\n";
	
	do{
	cout << "(H). Digite o n�mero respectivo do "<< Cont <<"� Ve�culo: 1- Ve�culo a passeio || 2- Ve�culo de Carga\n";
	cout << ">> ";
	cin >> c[Cont].tip;
	cout << "\n\n";
	
	if(c[Cont].tip != 1 && c[Cont].tip != 2){
		  	cout << "(*AVISO). Op��o inv�lida!\n\n";
	}
	
	} while(c[Cont].tip != 1 && c[Cont].tip != 2); 
	
	if(c[Cont].tip == 1){
		
	cout << "(I). A velocidade m�xima do "<< Cont <<"� Ve�culo (*Somente N�meros)\n";
	cout << ">> ";
	cin >> vm[Cont];
	cout << "\n\n";
	
	cout << "(J). A quantidade de passageiros do "<< Cont <<"� Ve�culo\n";
	cout << ">> ";
	cin >> qp[Cont];
	cout << "\n\n";
	
	} else {
		
	cout << "(I). A carga m�xima do "<< Cont <<"� Ve�culo em Kg (EX: 1000)\n";
	cout << ">> ";
	cin >> cm[Cont];
	cout << "\n\n";
		
	}

	} else {
	
	for(int i=0; i<Q; i++)	{
		
	Cont = Cont + 1;
	
	c[Cont].id = Cont;
	
	do{	
	cout << "(A). Digite o Chassi do "<< Cont <<"� Ve�culo (EX: 123456789123)\n";
	cout << ">> ";
	fflush(stdin);
	gets(c[Cont].chassi);	
	cout << "\n\n";
	A = 0;
	B = 0;
	
	for(h=0; h<Cont; h++){
             
             if(h != Cont){
                  if(strcmp(c[Cont].chassi, c[h].chassi) == 0){     
                  B = 1;
                  }
                          }
             
             }
	
	if(strlen(c[Cont].chassi) == 0){
	A = 1;
	cout << "- Voc� n�o digitou nada!\n\n";
    }
    
	if(B == 1){
	cout << "- Chassi j� existente!\n\n";
    }
        
    }while(A == 1 || B == 1);
    
	do{
	cout << "(B). Digite a Placa do "<< Cont <<"� Ve�culo (EX: ABC1234)\n";
	cout << ">> ";
	fflush(stdin);
	gets(c[Cont].plac);
	cout << "\n\n";
	A = 0;
	B = 0;
	
	for(h=0; h<Cont; h++){
             
             if(h != Cont){
                  if(strcmp(c[Cont].plac, c[h].plac) == 0){     
                  B = 1;
                  }
                          }
             
             }
	
	if(strlen(c[Cont].plac) == 0){
	A = 1;
	cout << "- Voc� n�o digitou nada!\n\n";
    }
    
	if(B == 1){
	cout << "- Placa j� existente!\n\n";
    }
        
    }while(A == 1 || B == 1);
	
	do{
	cout << "(C). Digite a Marca do "<< Cont <<"� Ve�culo (EX: FORD)\n";
	cout << ">> ";
	fflush(stdin);
	gets(c[Cont].marc);
	cout << "\n\n";
	
	A = 0;
	
	if(strlen(c[Cont].marc) == 0){
	A = 1;
	cout << "- Voc� n�o digitou nada!\n\n";
    }
    }while(A == 1);
	
	
	do{
	cout << "(D). Digite o Modelo do "<< Cont <<"� Ve�culo (EX: GOL)\n";
	cout << ">> ";
	fflush(stdin);
	gets(c[Cont].mod);
	cout << "\n\n";
	A = 0;
	
	if(strlen(c[Cont].mod) == 0){
	A = 1;
	cout << "- Voc� n�o digitou nada!\n\n";
    }
    }while(A == 1);
	
	do{
	cout << "(E). Digite o Revendedor do "<< Cont <<"� Ve�culo (EX: Francisco Silva)\n";
	cout << ">> ";
	fflush(stdin);
	gets(c[Cont].rev);
	cout << "\n\n";
	A = 0;
	
	if(strlen(c[Cont].rev) == 0){
	A = 1;
	cout << "- Voc� n�o digitou nada!\n\n";
    }
    }while(A == 1);
	
	do{
	cout << "(F). Digite o Endere�o do Revendedor do "<< Cont <<"� Ve�culo (EX: Rua Jos�, Bairro Boa Vista, 55)\n";
	cout << ">> ";
	fflush(stdin);
	gets(c[Cont].end);
	cout << "\n\n";
    A = 0;
	
	if(strlen(c[Cont].end) == 0){
	A = 1;
	cout << "- Voc� n�o digitou nada!\n\n";
    }
    }while(A == 1);
	
	cout << "(G). Digite o Telefone do Revendedor do "<< Cont <<"� Ve�culo (EX: 3500008888)\n";
	cout << ">> ";
	cin >> c[Cont].tel;
	cout << "\n\n";
	
	do{
	cout << "(H). Digite o n�mero respectivo do "<< Cont <<"� Ve�culo: 1- Ve�culo a passeio || 2- Ve�culo de Carga\n";
	cout << ">> ";
	cin >> c[Cont].tip;
	cout << "\n\n";
	
	if(c[Cont].tip != 1 && c[Cont].tip != 2){
		  	cout << "(*AVISO). Op��o inv�lida!\n\n";
	}
	
	} while(c[Cont].tip != 1 && c[Cont].tip != 2); 
	
	if(c[Cont].tip == 1){
		
	cout << "(I). A velocidade m�xima do "<< Cont <<"� Ve�culo (*Somente N�meros)\n";
	cout << ">> ";
	cin >> vm[Cont];
	cout << "\n\n";
	
	cout << "(J). A quantidade de passageiros do "<< Cont <<"� Ve�culo\n";
	cout << ">> ";
	cin >> qp[Cont];
	cout << "\n\n";
	
	} else {
		
	cout << "(I). A carga m�xima do "<< Cont <<"� Ve�culo em Kg (EX: 1000)\n";
	cout << ">> ";
	cin >> cm[Cont];
	cout << "\n\n";
		
	}
	
	system("cls");       
    cout << "------------------------------------------------------------------------------\n";       
	cout <<  "\n|---////---| ARMAZENANDO INFORMA��ES SOBRE OS VE�CULOS \n";
	cout << "\n------------------------------------------------------------------------------\n";
	cout << "\n";
	
	}
	
}        

     }

// BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB
void BBB() { 
 
int Q, i, A, B, h;
     
    system("cls");       
    cout << "----------------------------------------------------------\n";       
	cout << "\n|------- ARMAZENANDO INFORMA��ES SOBRE OS MOTORISTAS-----| \n";
	cout << "\n----------------------------------------------------------\n";
	cout << "\n";


	do{
  	cout << "(OP). Quantos informa��es sobre motoristas deseja armazenar?\n";
	cout << ">> ";
	cin >> Q;  
	
	if(Q < 1){
		  	cout << "(*AVISO). Imposs�vel armazenar " << Q << " motoristas!\n\n";
	}
	
	} while(Q < 1); 
	
	
    system("cls");       
    cout << "------------------------------------------------------------------------------\n";       
	cout <<  "\n|---////---| ARMAZENANDO INFORMA��ES SOBRE OS MOTORISTAS \n";
	cout << "\n------------------------------------------------------------------------------\n";
	cout << "\n";
	
	if(Q < 1){
		
	Count  = Count  + 1;
	
	m[Count].id = Count;
	
	do{	
	cout << "(A). Digite a Matr�cula do(a) "<< Count  <<"� Motorista (EX: AA987)\n";
	cout << ">> ";
	fflush(stdin);
	gets(m[Count].mat);	
	cout << "\n\n";
	A = 0;
	B = 0;
	
	for(h=0; h<Cont; h++){
             
             if(h != Cont){
                  if(strcmp(m[Count].mat, m[h].mat) == 0){     
                  B = 1;
                  }
                          }
             
             }
	
	if(strlen(m[Count].mat) == 0){
	A = 1;
	cout << "- Voc� n�o digitou nada!\n\n";
    }
    
	if(B == 1){
	cout << "- Matr�cula j� existente!\n\n";
    }
        
    }while(A == 1 || B == 1);
    
	do{
	cout << "(B). Digite o Nome do(a) "<< Count <<"� Motorista (EX: Marco Polo)\n";
	cout << ">> ";
	fflush(stdin);
	gets(m[Count].nome);
	cout << "\n\n";
	A = 0;
	
	if(strlen(m[Count].nome) == 0){
	A = 1;
	cout << "- Voc� n�o digitou nada!\n\n";
    }
    }while(A == 1);
	
	do{
	cout << "(C). Tipo de Habilita��o do(a) "<< Count <<"� Motorista( A, B, C...)\n";
	cout << ">> ";
	fflush(stdin);
	gets(m[Count].ha);
	cout << "\n\n";
	
	A = 0;
	
	if(strlen(m[Count].ha) == 0){
	A = 1;
	cout << "- Voc� n�o digitou nada!\n\n";
    }
    }while(A == 1);
	
	
	do{
	cout << "(D). Validade da Habilita��o do(a) "<< Count  <<"� Ve�culo (EX: 15/02/2025)\n";
	cout << ">> ";
	fflush(stdin);
	gets(m[Count].vh);
	cout << "\n\n";
	A = 0;
	
	if(strlen(m[Count].vh) == 0){
	A = 1;
	cout << "- Voc� n�o digitou nada!\n\n";
    }
    }while(A == 1);
	
	do{
	cout << "(H). Digite a corre��o visual do "<< Count  <<"� Motorista: 1- Usa �culos || 2- N�o Usa �culos\n";
	cout << ">> ";
	cin >> m[Count].cv;
	cout << "\n\n";
	
	if(m[Count].cv != 1 && m[Count].cv != 2){
		  	cout << "(*AVISO). Op��o inv�lida!\n\n";
	}
	
	} while(m[Count].cv != 1 && m[Count].cv != 2); 
	

	} else {
	
	for(i=0; i<Q; i++){
		
	Count  = Count  + 1;
	
	m[Count].id = Count;
	
	do{	
	cout << "(A). Digite a Matr�cula do(a) "<< Count  <<"� Motorista (EX: AA987)\n";
	cout << ">> ";
	fflush(stdin);
	gets(m[Count].mat);	
	cout << "\n\n";
	A = 0;
	
	if(strlen(m[Count].mat) == 0){
	A = 1;
	cout << "- Voc� n�o digitou nada!\n\n";
    }
    }while(A == 1);
    
	do{
	cout << "(B). Digite o Nome do(a) "<< Count <<"� Motorista (EX: Marco Polo)\n";
	cout << ">> ";
	fflush(stdin);
	gets(m[Count].nome);
	cout << "\n\n";
	A = 0;
	
	if(strlen(m[Count].nome) == 0){
	A = 1;
	cout << "- Voc� n�o digitou nada!\n\n";
    }
    }while(A == 1);
	
	do{
	cout << "(C). Tipo de Habilita��o do(a) "<< Count <<"� Motorista( A, B, C...)\n";
	cout << ">> ";
	fflush(stdin);
	gets(m[Count].ha);
	cout << "\n\n";
	
	A = 0;
	
	if(strlen(m[Count].ha) == 0){
	A = 1;
	cout << "- Voc� n�o digitou nada!\n\n";
    }
    }while(A == 1);
	
	
	do{
	cout << "(D). Validade da Habilita��o do(a) "<< Count  <<"� Ve�culo (EX: 15/02/2025)\n";
	cout << ">> ";
	fflush(stdin);
	gets(m[Count].vh);
	cout << "\n\n";
	A = 0;
	
	if(strlen(m[Count].vh) == 0){
	A = 1;
	cout << "- Voc� n�o digitou nada!\n\n";
    }
    }while(A == 1);
	
	do{
	cout << "(H). Digite a corre��o visual do "<< Count  <<"� Motorista: 1- Usa �culos || 2- N�o Usa �culos\n";
	cout << ">> ";
	cin >> m[Count].cv;
	cout << "\n\n";
	
	if(m[Count].cv != 1 && m[Count].cv != 2){
		  	cout << "(*AVISO). Op��o inv�lida!\n\n";
	}
	
	} while(m[Count].cv != 1 && m[Count].cv != 2); 
	
    system("cls");       
    cout << "------------------------------------------------------------------------------\n";       
	cout <<  "\n|---////---| ARMAZENANDO INFORMA��ES SOBRE OS MOTORISTAS \n";
	cout << "\n------------------------------------------------------------------------------\n";
	cout << "\n";
	
     }
}
}


// CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC
void CCC() { 
 
int Q, i, A;
     
    system("cls");       
    cout << "------------------------------------------------------------------------------\n";       
	cout <<  "\n|---////---| ARMAZENANDO INFORMA��ES SOBRE MOVIMENTA��ES \n";
	cout << "\n------------------------------------------------------------------------------\n";
	cout << "\n"; 
	
		
	Mais1  = Mais1  + 1;
	
	do{
	cout << "(A). Digite o N�mero respectivo ao "<< Mais1 <<"� Ve�culo\n";
	for(i=1; i<=Cont; i++){
		cout << c[i].id << " - " << c[i].plac << ", " << c[i].marc << ", " << c[i].mod;
		cout << "\n";
		
	}
	cout << "\n>> ";
    cin >> v[Mais1].idA;
    cout << "\n";
    
    if(v[Mais1].idA < 1 || v[Mais1].idA > Cont){
    	cout << "\n- N�mero inexistente!";
	}
    
	}while(v[Mais1].idA < 1 || v[Mais1].idA > Cont);
    
	do{
	cout << "(B). Digite o N�mero respectivo ao "<< Mais1 <<"� Motorista\n";
	for(i=1; i<=Count; i++){
		cout << m[i].id << " - " << m[i].nome;
		cout << "\n";
		
	}
	cout << "\n>> ";
    cin >> v[Mais1].idB;
	cout << "\n";
	
	if(v[Mais1].idB < 1 || v[Mais1].idB > Count){
    	cout << "\n- N�mero inexistente!";
	}
	
    }while(v[Mais1].idB < 1 || v[Mais1].idB > Count);


    
	do{ 
    cout << "(C). A Quilometragem inicial "<< Mais1 <<"� Ve�culo (*Somente N�meros)\n";
	cout << ">> ";
	cin >> v[Mais1].qi;
	cout << "\n\n";
	A = 0;
	
	if(v[Mais1].qi < 0){
	A = 1;
	cout << "- Quilometragem inicial menor que 0!\n\n";
    }
    }while(A == 1);
    
    do{
    cout << "(D). A Quilometragem final "<< Mais1 <<"� Ve�culo (*Somente N�meros)\n";
	cout << ">> ";
	cin >> v[Mais1].qf;
	cout << "\n\n";
	A = 0;
	
	if(v[Mais1].qf < v[Mais1].qi){
	A = 1;
	cout << "- Quilometragem final menor que a inicial!\n\n";
    }
    
   	if(v[Mais1].qf < 0){
	A = 1;
	cout << "- Quilometragem final menor que 0!\n\n";
    }
	 
    }while(A == 1);
    
	do{
	cout << "(E). Data da movimenta��o do "<< Mais1  <<"� Ve�culo (EX: 15/02/2025)\n";
	cout << ">> ";
	fflush(stdin);
	gets(v[Mais1].data);
	cout << "\n\n";
	A = 0;
	
	if(strlen(v[Mais1].data) == 0){
	A = 1;
	cout << "- Voc� n�o digitou nada!\n\n";
    }
    }while(A == 1);
   


	
    system("cls");       
    cout << "------------------------------------------------------------------------------\n";       
	cout <<  "\n|---////---| ARMAZENANDO INFORMA��ES SOBRE MOVIMENTA��ES \n";
	cout << "\n------------------------------------------------------------------------------\n";
	cout << "\n";
	
     }


// DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD
void DDD() { 
 
int Q, i, A;
     
    system("cls");       
    cout << "------------------------------------------------------------------------------\n";       
	cout <<  "\n|---////---| ARMAZENANDO INFORMA��ES SOBRE MANUTEN��ES \n";
	cout << "\n------------------------------------------------------------------------------\n";
	cout << "\n";
	
		
	M  = M  + 1;
	
	do{
	cout << "(A). Digite o N�mero respectivo ao "<< Mais1 <<"� Ve�culo\n";
	for(i=1; i<=Cont; i++){
		cout << c[i].id << " - " << c[i].plac << ", " << c[i].marc << ", " << c[i].mod;
		cout << "\n";
		
	}
	cout << "\n>> ";
    cin >> a[M].id;
    cout << "\n";
	}while(a[M].id < 1 || a[M].id > Cont);

	
	do{
	cout << "(B). Descri��o do servi�o prestado no "<< M <<"� Ve�culo\n";
	cout << ">> ";
	fflush(stdin);
	gets(a[M].desc);
	cout << "\n\n";	
	A = 0;
	
	if(strlen(a[M].desc) == 0){
	A = 1;
	cout << "- Voc� n�o digitou nada!\n\n";
    }
    }while(A == 1);
	
	
	do{
	cout << "(C). Descri��o da Manuten��o prestada no "<< M  <<"� Ve�culo\n";
	cout << ">> ";
	fflush(stdin);
	gets(a[M].manu);
	cout << "\n\n";
	A = 0;
	
	if(strlen(a[M].manu) == 0){
	A = 1;
	cout << "- Voc� n�o digitou nada!\n\n";
    }
    }while(A == 1);
	
	do{
	cout << "(D). Data da Manuten��o do "<< M <<"� Ve�culo (EX: 15/02/2025)\n";
	cout << ">> ";
	fflush(stdin);
	gets(a[M].data);
	cout << "\n\n";
	A = 0;
	
	if(strlen(a[M].data) == 0){
	A = 1;
	cout << "- Voc� n�o digitou nada!\n\n";
    }
    }while(A == 1);
   

    system("cls");       
    cout << "------------------------------------------------------------------------------\n";       
	cout <<  "\n|---////---| ARMAZENANDO INFORMA��ES SOBRE MANUTEN��ES \n";
	cout << "\n------------------------------------------------------------------------------\n";
	cout << "\n";
	
}

// EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE
void EEE() { 

int op, i; 
char es;
      
do{
    system("cls");                  
    cout << "------------------------------------------------------------------------------\n";       
	cout <<  "\n|---////---| MENU DE MOVIMENTA��ES \n";
	cout << "\n------------------------------------------------------------------------------\n";
	cout << "\n";
	cout << "(1). Listar todos os ve�culos\n";
	cout << "(2). Listar todas as movimenta��es\n";
	cout << "(3). Voltar ao Menu Principal\n\n";
	cout << ">> ";
    cin >> op;
        



if(op == 1){  

    system("cls"); 
    cout << "------------------------------------------------------------------------------\n";       
	cout <<  "\n|---////---| MENU DE MOVIMENTA��ES \n";
	cout << "\n------------------------------------------------------------------------------\n";
	cout << "\n";
    
    	for(i=1; i<=Cont; i++){
    	cout << i << "� - Ve�culo.";
		cout << "\n";
		cout <<  "Chassi: " << c[i].chassi;
		cout << "\n";
		cout <<  "Placa: " << c[i].plac;
		cout << "\n";
		cout <<  "Marca: " << c[i].marc;
		cout << "\n";
		cout <<  "Modelo: " << c[i].mod;
		cout << "\n";
		cout <<  "Revendedor: " << c[i].rev;
		cout << "\n";
		cout <<  "Endere�o do revendedor: " << c[i].end;
		cout << "\n";
		cout <<  "Telefone do revendedor " << c[i].tel;
		cout << "\n";
		cout <<  "Tipo de Ve�culo: ";
		if(c[i].tip == 2){
					cout <<  "De Carga";
					cout << "\n";
					cout <<  "Carga M�xima: " << cm[i];		
		} else {
					cout <<  "De Passeio";	
					cout << "\n";
					cout <<  "Velocidade M�xima: " << vm[i];
					cout << "\n";
					cout <<  "Quantidade de Passageiros: " << qp[i];		
					
					}
		cout <<  "\n------------------";
		cout << "\n\n";
		
		
	}     
	
	cout << "\n\nDigite qualquer tecla e pressione enter para continuar\n";
	cout << ">> ";
    cin >> es;
}  
       
if(op == 2){  
    system("cls"); 
    cout << "------------------------------------------------------------------------------\n";       
	cout <<  "\n|---////---| MENU DE MOVIMENTA��ES \n";
	cout << "\n------------------------------------------------------------------------------\n";
	cout << "\n";
    
    	for(i=1; i<=Mais1; i++){
    	cout << i << "� - Movimenta��o.";
		cout << "\n";
    	cout <<  "Motorista: " << m[v[i].idB].nome;
    	cout << "\n";
		cout <<  "Placa: " << c[v[i].idA].plac;
		cout << "\n";
		cout <<  "Marca: " << c[v[i].idA].marc;
		cout << "\n";
		cout <<  "Modelo: " << c[v[i].idA].mod;
		cout << "\n";
		cout <<  "Km Inicial: " << v[i].qi;
		cout << "\n";
		cout <<  "Km Final: " << v[i].qf;
		cout << "\n";
		cout <<  "Data: " << v[i].data;
		cout <<  "\n------------------";
		cout << "\n\n";
		
	}
	
	cout << "\n\nDigite qualquer tecla e pressione enter para continuar\n";
	cout << ">> ";
    cin >> es;
       }

		      
} while(op != 3); 

	
}


// FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
void FFF() { 

int op, i; 
char es;
      
do{
    system("cls");                  
    cout << "------------------------------------------------------------------------------\n";       
	cout <<  "\n|---////---| MENU DE MANUTEN��ES \n";
	cout << "\n------------------------------------------------------------------------------\n";
	cout << "\n";
	cout << "(1). Listar todos os ve�culos\n";
	cout << "(2). Listar todas as manuten��es\n";
	cout << "(3). Voltar ao Menu Principal\n\n";
	cout << ">> ";
    cin >> op;
        



if(op == 1){  

    system("cls");
    cout << "------------------------------------------------------------------------------\n";       
	cout <<  "\n|---////---| MENU DE MANUTEN��ES \n";
	cout << "\n------------------------------------------------------------------------------\n";
	cout << "\n";    
    	for(i=1; i<=Cont; i++){
    	cout << i << "� - Ve�culo.";
		cout << "\n";
		cout <<  "Chassi: " << c[i].chassi;
		cout << "\n";
		cout <<  "Placa: " << c[i].plac;
		cout << "\n";
		cout <<  "Marca: " << c[i].marc;
		cout << "\n";
		cout <<  "Modelo: " << c[i].mod;
		cout << "\n";
		cout <<  "Revendedor: " << c[i].rev;
		cout << "\n";
		cout <<  "Endere�o do revendedor: " << c[i].end;
		cout << "\n";
		cout <<  "Telefone do revendedor " << c[i].tel;
		cout << "\n";
		cout <<  "Tipo de Ve�culo: ";
		if(c[i].tip == 2){
					cout <<  "De Carga";
					cout << "\n";
					cout <<  "Carga M�xima: " << cm[i];		
		} else {
					cout <<  "De Passeio";	
					cout << "\n";
					cout <<  "Velocidade M�xima: " << vm[i];
					cout << "\n";
					cout <<  "Quantidade de Passageiros: " << qp[i];		}
		cout <<  "\n------------------";
		cout << "\n\n";
		
		
	}
	
	cout << "\n\nDigite qualquer tecla e pressione enter para continuar\n";
	cout << ">> ";
    cin >> es;
       }       
       
if(op == 2){  
    system("cls"); 
    cout << "------------------------------------------------------------------------------\n";       
	cout <<  "\n|---////---| MENU DE MANUTEN��ES \n";
	cout << "\n------------------------------------------------------------------------------\n";
	cout << "\n";
    
    	for(i=1; i<=M; i++){
    	cout << i << "� - Manuten��o.";
		cout << "\n";
		cout <<  "Placa: " << c[a[i].id].plac;
		cout << "\n";
		cout <<  "Marca: " << c[a[i].id].marc;
		cout << "\n";
		cout <<  "Modelo: " << c[a[i].id].mod;
		cout << "\n";
		cout <<  "Descri��o: " << a[i].desc;
		cout << "\n";
		cout <<  "Manuten��o: " << a[i].manu;
		cout << "\n";
		cout <<  "Data: " << a[i].data;
		cout <<  "\n------------------";
		cout << "\n\n";
		
	}
	
	cout << "\n\nDigite qualquer tecla e pressione enter para continuar\n";
	cout << ">> ";
    cin >> es;
       }

		      
} while(op != 3); 

	
}


// GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG
void GGG() { 

char es;
      
	    system("cls");                  
	    cout << "------------------------------------------------------------------------------\n";       
		cout <<  "\n|---////---| ESTAT�STICAS DO SISTEMA \n";
		cout << "\n------------------------------------------------------------------------------\n";
		cout << "\n";
		cout <<  "- Ve�culos Cadastrados: " << Cont << " de um total de 300 Slots.";
		cout << "\n";
		cout <<  "- Motoristas Cadastrados: " << Count << " de um total de 300 Slots.";
		cout << "\n";
		cout <<  "- Movimenta��es Cadastradas: " << Mais1 << " de um total de 500 Slots.";
		cout << "\n";
		cout <<  "- Manuten��es Cadatradas: " << M << " de um total de 500 Slots.";

	
		cout << "\n\nDigite qualquer tecla e pressione enter para voltar\n";
		cout << ">> ";
	    cin >> es;
       

	
}


