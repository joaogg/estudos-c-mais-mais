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
    system("TITLE Sistema de Batalha! 3.0 // by: Jo�oG ");
    
    
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
    	
    	
    	cout << "Ol� " << nome << ", seu ataque est� variando de 1 at� " << Forca[1] << ", e voc� possui " << energia[1] << " de energia!\n";
    	
    	for(i=0; i<=200; i++){
    		
    		do{
    			
			
    		
    		if(energia[1] < 0 ){
    			
    			cout << nome << ", voc� perdeu! \nEstamos lhe rebaixando seu ataque e energia para a inicial!";
    	       	cout << "\n\nPara continuar digite qualquer tecla num�rica: ";
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
				
				cout << nome << ", voc� venceu!\nEstamos aumentando sua energia e seu ataque!";
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
    				cout << "Desafiante:" << nome << "\nPoder de Ataque: 1-" << Forca[1] << "\nEnergia: " << energia[1] << "\nN�vel: " << nv;
    				cout << "\n\nDigite:\nA para atacar, P para usar uma po��o de energia," <<
					         "\nI para informa��oes do oponente, L para Limpar o hist�rico: \n";
    			    cin >> Bt;
    			    
    			    if(Bt!='A' && Bt!='a' && Bt!='P' && Bt!='p'&& Bt!='I' && Bt!='i' && Bt!='L' && Bt!='l'){
    			    	cout << "\nAVISO: Digite: A para atacar, P para usar uma po��o de energia, I informa��oes do oponente: ";
    			    											cout << "\n\n------------------------------------------------------------------\n\n";

					}
    			    
    			    
				} while(Bt!='A' && Bt!='a' && Bt!='P' && Bt!='p' && Bt!='I' && Bt!='i' && Bt!='L' && Bt!='l');
    			
    			
    			if(Bt=='A' or Bt=='a' ){
                    
                    srand (time(NULL)); 
                    at = rand() % Forca[1]+1;
                    cout << "\n\nVoc� atacou Monstro n�vel 0"<< nvM <<", retirando " << at << " de sua energia!\n";
                    energiaM[1]= energiaM[1]-at;
                    Forca[1]= Forca[1] + 4;
    				
    				srand (time(NULL)); 
                    atM = rand() % ForcaM[1]+1;
    				cout << "Monstro n�vel 0"<< nvM <<" atacou voc�, retirando " << atM << " de sua energia!\n";
                    energia[1]= energia[1]-atM;
                    ForcaM[1]= ForcaM[1] + 5;   
					    			    
										
										cout << "\n\n------------------------------------------------------------------\n\n";

					
	
    				
    				
				}
    			
    			if((Bt=='P' or Bt=='p') and P>0 ){
    				cout << "\nVoc� utilizou uma Po��o de Energia!\n";
    				P=P-1;
    				energia[1]=energia[1]+30;
    				
    				cout << "Monstro n�vel 01 se aproveitou de seu descuido e utilizou uma po��o de energia!";
    				energiaM[1]=energiaM[1]+40;
										cout << "\n\n------------------------------------------------------------------\n\n";
    				
    				
				}
				
    			if((Bt=='P' or Bt=='p') and P<=0 ){
    				cout << "\nVoc� n�o possui mais po��es para utilizar!";
    														cout << "\n\n------------------------------------------------------------------\n\n";


    				
    				
				}
				
    			if(Bt=='I' or Bt=='i'){
    				cout << "\nINFORMA��O:";
    				cout << "\nMonstro n�vel: 0" << nvM << "\nPoder de Ataque: 1-" << ForcaM[1] << "\nEnergia: " << energiaM[1];
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
