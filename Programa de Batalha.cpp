#include <iostream>
#include <cstdlib>
#include <stdlib.h> 
#include <time.h> 

using namespace std;

int main (){
	
    int i, Op, at, atM, P;
    int energia[1], Forca[1], nv, nvM;
    int energiaM[1], ForcaM[1];
    char nome[100], Bt, pro;
    
    
    setlocale(LC_ALL,"Portuguese");
    system("TITLE Sistema de Batalha! 3.0 // by: JoãoG ");
    
    
    do{
    	cout << "Digite seu Nome de Desafiante: \n";
    	gets(nome);
    	system ("cls");
    	
    	energia[1]=80;
    	Forca[1]=50;
    	P=3;
    	nv=1;
    	
    	energiaM[1]=50;
    	ForcaM[1]=30;
    	nvM=1;
    	
    	
    	cout << "Olá " << nome << ", seu ataque está variando de 1 até " << Forca[1] << ", e você possui " << energia[1] << " de energia!\n";
    	
    	for(i=0; i<=200; i++){
    		
    		do{
    			
			
    		
    		if(energia[1] < 0 ){
    			
    			cout << nome << ", você perdeu! \nEstamos lhe rebaixando seu ataque e energia para a inicial!";
    	       	cout << "\n\nPara continuar digite qualquer tecla numérica: ";
				cin >> pro;
				    	system ("cls");

				
				    	energia[1]=80;
    	                Forca[1]=50;
    	                nv=1;
    	                P=3;
    	                
    	                energiaM[1]=50;
    	                ForcaM[1]=30;
    	                nvM=1;
    	                
			}
				
			if(energiaM[1] < 0 ){
				
				nv=nv+1;
				nvM=nvM+1;
				
				cout << nome << ", você venceu!\nEstamos aumentando sua energia e seu ataque!";
				cout << "\n\nPara continuar digite qualquer tecla: ";
				cin >> pro;
				    	system ("cls");

				
					    energia[1]=80+(nv*5);
    	                Forca[1]=Forca[1]+(nv*3);
    	                P=P+3;
    	                
    	                energiaM[1]=60+(nv*6);
    	                ForcaM[1]=ForcaM[1]+(nv*4);
			}			
			
    		
    		if(energiaM[1]>0 and energia[1]>0 ){
    			
    			
    			do{ 
    			
    			if(nv==1){
    				cout << "\n";
    			       	 }
    				cout << "Desafiante:" << nome << "\nPoder de Ataque: 1-" << Forca[1] << "\nEnergia: " << energia[1] << "\nNível: " << nv;
    				cout << "\n\nDigite:\nA para atacar, P para usar uma poção de energia," <<
					         "\nI para informaçãoes do oponente, L para Limpar o histórico: \n";
    			    cin >> Bt;
    			    
    			    if(Bt!='A' && Bt!='a' && Bt!='P' && Bt!='p'&& Bt!='I' && Bt!='i' && Bt!='L' && Bt!='l'){
    			    	cout << "\nAVISO: Digite: A para atacar, P para usar uma poção de energia, I informaçãoes do oponente: ";
    			    											cout << "\n\n------------------------------------------------------------------\n\n";

					}
    			    
    			    
				} while(Bt!='A' && Bt!='a' && Bt!='P' && Bt!='p' && Bt!='I' && Bt!='i' && Bt!='L' && Bt!='l');
    			
    			
    			if(Bt=='A' or Bt=='a' ){
                    
                    srand (time(NULL)); 
                    at = rand() % Forca[1]+1;
                    cout << "\n\nVocê atacou Monstro nível 0"<< nvM <<", retirando " << at << " de sua energia!\n";
                    energiaM[1]= energiaM[1]-at;
                    Forca[1]= Forca[1] + 4;
    				
    				srand (time(NULL)); 
                    atM = rand() % ForcaM[1]+1;
    				cout << "Monstro nível 0"<< nvM <<" atacou você, retirando " << atM << " de sua energia!\n";
                    energia[1]= energia[1]-atM;
                    ForcaM[1]= ForcaM[1] + 5;   
					    			    
										
										cout << "\n\n------------------------------------------------------------------\n\n";

					
	
    				
    				
				}
    			
    			if((Bt=='P' or Bt=='p') and P>0 ){
    				cout << "\nVocê utilizou uma Poção de Energia!\n";
    				P=P-1;
    				energia[1]=energia[1]+30;
    				
    				cout << "Monstro nível 01 se aproveitou de seu descuido e utilizou uma poção de energia!";
    				energiaM[1]=energiaM[1]+40;
										cout << "\n\n------------------------------------------------------------------\n\n";
    				
    				
				}
				
    			if((Bt=='P' or Bt=='p') and P<=0 ){
    				cout << "\nVocê não possui mais poções para utilizar!";
    														cout << "\n\n------------------------------------------------------------------\n\n";


    				
    				
				}
				
    			if(Bt=='I' or Bt=='i'){
    				cout << "\nINFORMAÇÃO:";
    				cout << "\nMonstro nível: 0" << nvM << "\nPoder de Ataque: 1-" << ForcaM[1] << "\nEnergia: " << energiaM[1];
    														cout << "\n\n------------------------------------------------------------------\n\n";


    				
    				
				}	
							
    			if(Bt=='L' or Bt=='l'){
				    	system ("cls");

    				
    				
				}	
			}
    		
    		
    	
	} while ( pro=='.');
    		
		}
    	
    	
    	
    	
	} while (Op==1);
    
    system ("pause");
    return 0;
} 
