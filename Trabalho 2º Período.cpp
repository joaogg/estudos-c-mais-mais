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
                       
                       
// Veículo a Passeio = 1    
						int vm[200];
						int qp[200];

// Veículo a Carga  = 2                  
                       int cm[200];

            int Cont = 0;
            int Count = 0;
            int Mais1 = 0;
            int M = 0;
			            
            int Veic = 0;
            
// Usa Óculos = 1  
// Não Usa Óculos = 2  
            
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
	cout <<  "\n|---////---| MENU DE OPÇÕES \n";
	cout << "\n------------------------------------------------------------------------------\n";
	cout << "\n";
	cout << "(1). Armazenar informações sobre os veículos\n";
	cout << "(2). Armazenar informações sobre os motoristas\n";
	cout << "(3). Armazenar movimentações de veículos\n";
	cout << "(4). Armazenar manutenções de veículos\n";
	cout << "(5). Listando Veículos e Movimentações\n";
	cout << "(6). Listando Veículos e Manutenções\n";
	cout << "(7). Estatísticas do Sistema\n";
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
	cout << "*** AVISO: Nenhum Veículo ou Motorista cadastrado no sistema para se realizar uma movimentação!\n\n";
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
	cout << "*** AVISO: Nenhum Veículo ou Motorista cadastrado no sistema para se realizar uma movimentação!\n\n";
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
	cout <<  "\n|---////---| ARMAZENANDO INFORMAÇÕES SOBRE OS VEÍCULOS \n";
	cout << "\n------------------------------------------------------------------------------\n";
	cout << "\n";
	
	
	do{
  	cout << "(OP). Quantos informações sobre veículos deseja armazenar?\n";
	cout << ">> ";
	cin >> Q;  
	
	if(Q < 1){
		  	cout << "(*AVISO). Impossível armazenar " << Q << " veículos!\n\n";
	}
	
	} while(Q < 1); 
	
	
	system("cls");       
    cout << "------------------------------------------------------------------------------\n";       
	cout <<  "\n|---////---| ARMAZENANDO INFORMAÇÕES SOBRE OS VEÍCULOS \n";
	cout << "\n------------------------------------------------------------------------------\n";
	cout << "\n";
	
	if(Q < 1){
		
	Cont = Cont + 1;
	
	c[Cont].id= Cont;
	
	do{	
	cout << "(A). Digite o Chassi do "<< Cont <<"º Veículo (EX: 123456789123)\n";
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
	cout << "- Você não digitou nada!\n\n";
    }
    
	if(B == 1){
	cout << "- Chassi já existente!\n\n";
    }
        
    }while(A == 1 || B == 1);
    
	do{
	cout << "(B). Digite a Placa do "<< Cont <<"º Veículo (EX: ABC1234)\n";
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
	cout << "- Você não digitou nada!\n\n";
    }
    
	if(B == 1){
	cout << "- Placa já existente!\n\n";
    }
        
    }while(A == 1 || B == 1);
	
	do{
	cout << "(C). Digite a Marca do "<< Cont <<"º Veículo (EX: FORD)\n";
	cout << ">> ";
	fflush(stdin);
	gets(c[Cont].marc);
	cout << "\n\n";
	
	A = 0;
	
	if(strlen(c[Cont].marc) == 0){
	A = 1;
	cout << "- Você não digitou nada!\n\n";
    }
    }while(A == 1);
	
	
	do{
	cout << "(D). Digite o Modelo do "<< Cont <<"º Veículo (EX: GOL)\n";
	cout << ">> ";
	fflush(stdin);
	gets(c[Cont].mod);
	cout << "\n\n";
	A = 0;
	
	if(strlen(c[Cont].mod) == 0){
	A = 1;
	cout << "- Você não digitou nada!\n\n";
    }
    }while(A == 1);
	
	do{
	cout << "(E). Digite o Revendedor do "<< Cont <<"º Veículo (EX: Francisco Silva)\n";
	cout << ">> ";
	fflush(stdin);
	gets(c[Cont].rev);
	cout << "\n\n";
	A = 0;
	
	if(strlen(c[Cont].rev) == 0){
	A = 1;
	cout << "- Você não digitou nada!\n\n";
    }
    }while(A == 1);
	
	do{
	cout << "(F). Digite o Endereço do Revendedor do "<< Cont <<"º Veículo (EX: Rua José, Bairro Boa Vista, 55)\n";
	cout << ">> ";
	fflush(stdin);
	gets(c[Cont].end);
	cout << "\n\n";
    A = 0;
	
	if(strlen(c[Cont].end) == 0){
	A = 1;
	cout << "- Você não digitou nada!\n\n";
    }
    }while(A == 1);
	
	cout << "(G). Digite o Telefone do Revendedor do "<< Cont <<"º Veículo (EX: 3500008888)\n";
	cout << ">> ";
	cin >> c[Cont].tel;
	cout << "\n\n";
	
	do{
	cout << "(H). Digite o número respectivo do "<< Cont <<"º Veículo: 1- Veículo a passeio || 2- Veículo de Carga\n";
	cout << ">> ";
	cin >> c[Cont].tip;
	cout << "\n\n";
	
	if(c[Cont].tip != 1 && c[Cont].tip != 2){
		  	cout << "(*AVISO). Opção inválida!\n\n";
	}
	
	} while(c[Cont].tip != 1 && c[Cont].tip != 2); 
	
	if(c[Cont].tip == 1){
		
	cout << "(I). A velocidade máxima do "<< Cont <<"º Veículo (*Somente Números)\n";
	cout << ">> ";
	cin >> vm[Cont];
	cout << "\n\n";
	
	cout << "(J). A quantidade de passageiros do "<< Cont <<"º Veículo\n";
	cout << ">> ";
	cin >> qp[Cont];
	cout << "\n\n";
	
	} else {
		
	cout << "(I). A carga máxima do "<< Cont <<"º Veículo em Kg (EX: 1000)\n";
	cout << ">> ";
	cin >> cm[Cont];
	cout << "\n\n";
		
	}

	} else {
	
	for(int i=0; i<Q; i++)	{
		
	Cont = Cont + 1;
	
	c[Cont].id = Cont;
	
	do{	
	cout << "(A). Digite o Chassi do "<< Cont <<"º Veículo (EX: 123456789123)\n";
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
	cout << "- Você não digitou nada!\n\n";
    }
    
	if(B == 1){
	cout << "- Chassi já existente!\n\n";
    }
        
    }while(A == 1 || B == 1);
    
	do{
	cout << "(B). Digite a Placa do "<< Cont <<"º Veículo (EX: ABC1234)\n";
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
	cout << "- Você não digitou nada!\n\n";
    }
    
	if(B == 1){
	cout << "- Placa já existente!\n\n";
    }
        
    }while(A == 1 || B == 1);
	
	do{
	cout << "(C). Digite a Marca do "<< Cont <<"º Veículo (EX: FORD)\n";
	cout << ">> ";
	fflush(stdin);
	gets(c[Cont].marc);
	cout << "\n\n";
	
	A = 0;
	
	if(strlen(c[Cont].marc) == 0){
	A = 1;
	cout << "- Você não digitou nada!\n\n";
    }
    }while(A == 1);
	
	
	do{
	cout << "(D). Digite o Modelo do "<< Cont <<"º Veículo (EX: GOL)\n";
	cout << ">> ";
	fflush(stdin);
	gets(c[Cont].mod);
	cout << "\n\n";
	A = 0;
	
	if(strlen(c[Cont].mod) == 0){
	A = 1;
	cout << "- Você não digitou nada!\n\n";
    }
    }while(A == 1);
	
	do{
	cout << "(E). Digite o Revendedor do "<< Cont <<"º Veículo (EX: Francisco Silva)\n";
	cout << ">> ";
	fflush(stdin);
	gets(c[Cont].rev);
	cout << "\n\n";
	A = 0;
	
	if(strlen(c[Cont].rev) == 0){
	A = 1;
	cout << "- Você não digitou nada!\n\n";
    }
    }while(A == 1);
	
	do{
	cout << "(F). Digite o Endereço do Revendedor do "<< Cont <<"º Veículo (EX: Rua José, Bairro Boa Vista, 55)\n";
	cout << ">> ";
	fflush(stdin);
	gets(c[Cont].end);
	cout << "\n\n";
    A = 0;
	
	if(strlen(c[Cont].end) == 0){
	A = 1;
	cout << "- Você não digitou nada!\n\n";
    }
    }while(A == 1);
	
	cout << "(G). Digite o Telefone do Revendedor do "<< Cont <<"º Veículo (EX: 3500008888)\n";
	cout << ">> ";
	cin >> c[Cont].tel;
	cout << "\n\n";
	
	do{
	cout << "(H). Digite o número respectivo do "<< Cont <<"º Veículo: 1- Veículo a passeio || 2- Veículo de Carga\n";
	cout << ">> ";
	cin >> c[Cont].tip;
	cout << "\n\n";
	
	if(c[Cont].tip != 1 && c[Cont].tip != 2){
		  	cout << "(*AVISO). Opção inválida!\n\n";
	}
	
	} while(c[Cont].tip != 1 && c[Cont].tip != 2); 
	
	if(c[Cont].tip == 1){
		
	cout << "(I). A velocidade máxima do "<< Cont <<"º Veículo (*Somente Números)\n";
	cout << ">> ";
	cin >> vm[Cont];
	cout << "\n\n";
	
	cout << "(J). A quantidade de passageiros do "<< Cont <<"º Veículo\n";
	cout << ">> ";
	cin >> qp[Cont];
	cout << "\n\n";
	
	} else {
		
	cout << "(I). A carga máxima do "<< Cont <<"º Veículo em Kg (EX: 1000)\n";
	cout << ">> ";
	cin >> cm[Cont];
	cout << "\n\n";
		
	}
	
	system("cls");       
    cout << "------------------------------------------------------------------------------\n";       
	cout <<  "\n|---////---| ARMAZENANDO INFORMAÇÕES SOBRE OS VEÍCULOS \n";
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
	cout << "\n|------- ARMAZENANDO INFORMAÇÕES SOBRE OS MOTORISTAS-----| \n";
	cout << "\n----------------------------------------------------------\n";
	cout << "\n";


	do{
  	cout << "(OP). Quantos informações sobre motoristas deseja armazenar?\n";
	cout << ">> ";
	cin >> Q;  
	
	if(Q < 1){
		  	cout << "(*AVISO). Impossível armazenar " << Q << " motoristas!\n\n";
	}
	
	} while(Q < 1); 
	
	
    system("cls");       
    cout << "------------------------------------------------------------------------------\n";       
	cout <<  "\n|---////---| ARMAZENANDO INFORMAÇÕES SOBRE OS MOTORISTAS \n";
	cout << "\n------------------------------------------------------------------------------\n";
	cout << "\n";
	
	if(Q < 1){
		
	Count  = Count  + 1;
	
	m[Count].id = Count;
	
	do{	
	cout << "(A). Digite a Matrícula do(a) "<< Count  <<"º Motorista (EX: AA987)\n";
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
	cout << "- Você não digitou nada!\n\n";
    }
    
	if(B == 1){
	cout << "- Matrícula já existente!\n\n";
    }
        
    }while(A == 1 || B == 1);
    
	do{
	cout << "(B). Digite o Nome do(a) "<< Count <<"º Motorista (EX: Marco Polo)\n";
	cout << ">> ";
	fflush(stdin);
	gets(m[Count].nome);
	cout << "\n\n";
	A = 0;
	
	if(strlen(m[Count].nome) == 0){
	A = 1;
	cout << "- Você não digitou nada!\n\n";
    }
    }while(A == 1);
	
	do{
	cout << "(C). Tipo de Habilitação do(a) "<< Count <<"º Motorista( A, B, C...)\n";
	cout << ">> ";
	fflush(stdin);
	gets(m[Count].ha);
	cout << "\n\n";
	
	A = 0;
	
	if(strlen(m[Count].ha) == 0){
	A = 1;
	cout << "- Você não digitou nada!\n\n";
    }
    }while(A == 1);
	
	
	do{
	cout << "(D). Validade da Habilitação do(a) "<< Count  <<"º Veículo (EX: 15/02/2025)\n";
	cout << ">> ";
	fflush(stdin);
	gets(m[Count].vh);
	cout << "\n\n";
	A = 0;
	
	if(strlen(m[Count].vh) == 0){
	A = 1;
	cout << "- Você não digitou nada!\n\n";
    }
    }while(A == 1);
	
	do{
	cout << "(H). Digite a correção visual do "<< Count  <<"º Motorista: 1- Usa Óculos || 2- Não Usa Óculos\n";
	cout << ">> ";
	cin >> m[Count].cv;
	cout << "\n\n";
	
	if(m[Count].cv != 1 && m[Count].cv != 2){
		  	cout << "(*AVISO). Opção inválida!\n\n";
	}
	
	} while(m[Count].cv != 1 && m[Count].cv != 2); 
	

	} else {
	
	for(i=0; i<Q; i++){
		
	Count  = Count  + 1;
	
	m[Count].id = Count;
	
	do{	
	cout << "(A). Digite a Matrícula do(a) "<< Count  <<"º Motorista (EX: AA987)\n";
	cout << ">> ";
	fflush(stdin);
	gets(m[Count].mat);	
	cout << "\n\n";
	A = 0;
	
	if(strlen(m[Count].mat) == 0){
	A = 1;
	cout << "- Você não digitou nada!\n\n";
    }
    }while(A == 1);
    
	do{
	cout << "(B). Digite o Nome do(a) "<< Count <<"º Motorista (EX: Marco Polo)\n";
	cout << ">> ";
	fflush(stdin);
	gets(m[Count].nome);
	cout << "\n\n";
	A = 0;
	
	if(strlen(m[Count].nome) == 0){
	A = 1;
	cout << "- Você não digitou nada!\n\n";
    }
    }while(A == 1);
	
	do{
	cout << "(C). Tipo de Habilitação do(a) "<< Count <<"º Motorista( A, B, C...)\n";
	cout << ">> ";
	fflush(stdin);
	gets(m[Count].ha);
	cout << "\n\n";
	
	A = 0;
	
	if(strlen(m[Count].ha) == 0){
	A = 1;
	cout << "- Você não digitou nada!\n\n";
    }
    }while(A == 1);
	
	
	do{
	cout << "(D). Validade da Habilitação do(a) "<< Count  <<"º Veículo (EX: 15/02/2025)\n";
	cout << ">> ";
	fflush(stdin);
	gets(m[Count].vh);
	cout << "\n\n";
	A = 0;
	
	if(strlen(m[Count].vh) == 0){
	A = 1;
	cout << "- Você não digitou nada!\n\n";
    }
    }while(A == 1);
	
	do{
	cout << "(H). Digite a correção visual do "<< Count  <<"º Motorista: 1- Usa Óculos || 2- Não Usa Óculos\n";
	cout << ">> ";
	cin >> m[Count].cv;
	cout << "\n\n";
	
	if(m[Count].cv != 1 && m[Count].cv != 2){
		  	cout << "(*AVISO). Opção inválida!\n\n";
	}
	
	} while(m[Count].cv != 1 && m[Count].cv != 2); 
	
    system("cls");       
    cout << "------------------------------------------------------------------------------\n";       
	cout <<  "\n|---////---| ARMAZENANDO INFORMAÇÕES SOBRE OS MOTORISTAS \n";
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
	cout <<  "\n|---////---| ARMAZENANDO INFORMAÇÕES SOBRE MOVIMENTAÇÕES \n";
	cout << "\n------------------------------------------------------------------------------\n";
	cout << "\n"; 
	
		
	Mais1  = Mais1  + 1;
	
	do{
	cout << "(A). Digite o Número respectivo ao "<< Mais1 <<"º Veículo\n";
	for(i=1; i<=Cont; i++){
		cout << c[i].id << " - " << c[i].plac << ", " << c[i].marc << ", " << c[i].mod;
		cout << "\n";
		
	}
	cout << "\n>> ";
    cin >> v[Mais1].idA;
    cout << "\n";
    
    if(v[Mais1].idA < 1 || v[Mais1].idA > Cont){
    	cout << "\n- Número inexistente!";
	}
    
	}while(v[Mais1].idA < 1 || v[Mais1].idA > Cont);
    
	do{
	cout << "(B). Digite o Número respectivo ao "<< Mais1 <<"º Motorista\n";
	for(i=1; i<=Count; i++){
		cout << m[i].id << " - " << m[i].nome;
		cout << "\n";
		
	}
	cout << "\n>> ";
    cin >> v[Mais1].idB;
	cout << "\n";
	
	if(v[Mais1].idB < 1 || v[Mais1].idB > Count){
    	cout << "\n- Número inexistente!";
	}
	
    }while(v[Mais1].idB < 1 || v[Mais1].idB > Count);


    
	do{ 
    cout << "(C). A Quilometragem inicial "<< Mais1 <<"º Veículo (*Somente Números)\n";
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
    cout << "(D). A Quilometragem final "<< Mais1 <<"º Veículo (*Somente Números)\n";
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
	cout << "(E). Data da movimentação do "<< Mais1  <<"º Veículo (EX: 15/02/2025)\n";
	cout << ">> ";
	fflush(stdin);
	gets(v[Mais1].data);
	cout << "\n\n";
	A = 0;
	
	if(strlen(v[Mais1].data) == 0){
	A = 1;
	cout << "- Você não digitou nada!\n\n";
    }
    }while(A == 1);
   


	
    system("cls");       
    cout << "------------------------------------------------------------------------------\n";       
	cout <<  "\n|---////---| ARMAZENANDO INFORMAÇÕES SOBRE MOVIMENTAÇÕES \n";
	cout << "\n------------------------------------------------------------------------------\n";
	cout << "\n";
	
     }


// DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD
void DDD() { 
 
int Q, i, A;
     
    system("cls");       
    cout << "------------------------------------------------------------------------------\n";       
	cout <<  "\n|---////---| ARMAZENANDO INFORMAÇÕES SOBRE MANUTENÇÕES \n";
	cout << "\n------------------------------------------------------------------------------\n";
	cout << "\n";
	
		
	M  = M  + 1;
	
	do{
	cout << "(A). Digite o Número respectivo ao "<< Mais1 <<"º Veículo\n";
	for(i=1; i<=Cont; i++){
		cout << c[i].id << " - " << c[i].plac << ", " << c[i].marc << ", " << c[i].mod;
		cout << "\n";
		
	}
	cout << "\n>> ";
    cin >> a[M].id;
    cout << "\n";
	}while(a[M].id < 1 || a[M].id > Cont);

	
	do{
	cout << "(B). Descrição do serviço prestado no "<< M <<"º Veículo\n";
	cout << ">> ";
	fflush(stdin);
	gets(a[M].desc);
	cout << "\n\n";	
	A = 0;
	
	if(strlen(a[M].desc) == 0){
	A = 1;
	cout << "- Você não digitou nada!\n\n";
    }
    }while(A == 1);
	
	
	do{
	cout << "(C). Descrição da Manutenção prestada no "<< M  <<"º Veículo\n";
	cout << ">> ";
	fflush(stdin);
	gets(a[M].manu);
	cout << "\n\n";
	A = 0;
	
	if(strlen(a[M].manu) == 0){
	A = 1;
	cout << "- Você não digitou nada!\n\n";
    }
    }while(A == 1);
	
	do{
	cout << "(D). Data da Manutenção do "<< M <<"º Veículo (EX: 15/02/2025)\n";
	cout << ">> ";
	fflush(stdin);
	gets(a[M].data);
	cout << "\n\n";
	A = 0;
	
	if(strlen(a[M].data) == 0){
	A = 1;
	cout << "- Você não digitou nada!\n\n";
    }
    }while(A == 1);
   

    system("cls");       
    cout << "------------------------------------------------------------------------------\n";       
	cout <<  "\n|---////---| ARMAZENANDO INFORMAÇÕES SOBRE MANUTENÇÕES \n";
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
	cout <<  "\n|---////---| MENU DE MOVIMENTAÇÕES \n";
	cout << "\n------------------------------------------------------------------------------\n";
	cout << "\n";
	cout << "(1). Listar todos os veículos\n";
	cout << "(2). Listar todas as movimentações\n";
	cout << "(3). Voltar ao Menu Principal\n\n";
	cout << ">> ";
    cin >> op;
        



if(op == 1){  

    system("cls"); 
    cout << "------------------------------------------------------------------------------\n";       
	cout <<  "\n|---////---| MENU DE MOVIMENTAÇÕES \n";
	cout << "\n------------------------------------------------------------------------------\n";
	cout << "\n";
    
    	for(i=1; i<=Cont; i++){
    	cout << i << "º - Veículo.";
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
		cout <<  "Endereço do revendedor: " << c[i].end;
		cout << "\n";
		cout <<  "Telefone do revendedor " << c[i].tel;
		cout << "\n";
		cout <<  "Tipo de Veículo: ";
		if(c[i].tip == 2){
					cout <<  "De Carga";
					cout << "\n";
					cout <<  "Carga Máxima: " << cm[i];		
		} else {
					cout <<  "De Passeio";	
					cout << "\n";
					cout <<  "Velocidade Máxima: " << vm[i];
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
	cout <<  "\n|---////---| MENU DE MOVIMENTAÇÕES \n";
	cout << "\n------------------------------------------------------------------------------\n";
	cout << "\n";
    
    	for(i=1; i<=Mais1; i++){
    	cout << i << "º - Movimentação.";
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
	cout <<  "\n|---////---| MENU DE MANUTENÇÕES \n";
	cout << "\n------------------------------------------------------------------------------\n";
	cout << "\n";
	cout << "(1). Listar todos os veículos\n";
	cout << "(2). Listar todas as manutenções\n";
	cout << "(3). Voltar ao Menu Principal\n\n";
	cout << ">> ";
    cin >> op;
        



if(op == 1){  

    system("cls");
    cout << "------------------------------------------------------------------------------\n";       
	cout <<  "\n|---////---| MENU DE MANUTENÇÕES \n";
	cout << "\n------------------------------------------------------------------------------\n";
	cout << "\n";    
    	for(i=1; i<=Cont; i++){
    	cout << i << "º - Veículo.";
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
		cout <<  "Endereço do revendedor: " << c[i].end;
		cout << "\n";
		cout <<  "Telefone do revendedor " << c[i].tel;
		cout << "\n";
		cout <<  "Tipo de Veículo: ";
		if(c[i].tip == 2){
					cout <<  "De Carga";
					cout << "\n";
					cout <<  "Carga Máxima: " << cm[i];		
		} else {
					cout <<  "De Passeio";	
					cout << "\n";
					cout <<  "Velocidade Máxima: " << vm[i];
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
	cout <<  "\n|---////---| MENU DE MANUTENÇÕES \n";
	cout << "\n------------------------------------------------------------------------------\n";
	cout << "\n";
    
    	for(i=1; i<=M; i++){
    	cout << i << "º - Manutenção.";
		cout << "\n";
		cout <<  "Placa: " << c[a[i].id].plac;
		cout << "\n";
		cout <<  "Marca: " << c[a[i].id].marc;
		cout << "\n";
		cout <<  "Modelo: " << c[a[i].id].mod;
		cout << "\n";
		cout <<  "Descrição: " << a[i].desc;
		cout << "\n";
		cout <<  "Manutenção: " << a[i].manu;
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
		cout <<  "\n|---////---| ESTATÍSTICAS DO SISTEMA \n";
		cout << "\n------------------------------------------------------------------------------\n";
		cout << "\n";
		cout <<  "- Veículos Cadastrados: " << Cont << " de um total de 300 Slots.";
		cout << "\n";
		cout <<  "- Motoristas Cadastrados: " << Count << " de um total de 300 Slots.";
		cout << "\n";
		cout <<  "- Movimentações Cadastradas: " << Mais1 << " de um total de 500 Slots.";
		cout << "\n";
		cout <<  "- Manutenções Cadatradas: " << M << " de um total de 500 Slots.";

	
		cout << "\n\nDigite qualquer tecla e pressione enter para voltar\n";
		cout << ">> ";
	    cin >> es;
       

	
}


