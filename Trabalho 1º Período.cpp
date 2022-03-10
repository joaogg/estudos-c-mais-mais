#include <iostream>
#include <string.h>

using namespace std;

int main (){
	
	int i, k, j, Op, ContCadast, Val, Gfili, Achou, AchouD, AchouT, Guarda;
	float Sal[50], SomaSal;
	
	char Cod[50][100], Cargo[50][100], Fili[50][100], Nome[50][100];
	char Pfili[50], Acode[50];
	
	setlocale(LC_ALL,"Portuguese");
    system("TITLE PROGRAMA: EMPRESA DE MATERIAS ESPORTIVOS! ");
    system("color 71");
    
    ContCadast = 0;
	

    do {
    		    				      cout << "---------------------------------------------------------------------------";
    	                              cout << "\n- PROGRAMA: EMPRESA DE MATERIAS ESPORTIVOS! \n";
    		    				      cout << "---------------------------------------------------------------------------\n\n";
    		    				      
    	cout << "- Digite o n�mero da Op��o desejada:\n\n";
    	cout << "( 1 ) - Cadastrar funcion�rios!\n";
    	cout << "( 2 ) - Consultar uma filial!\n";
    	cout << "( 3 ) - Consultar os Funcion�rios com cargo de gerente!\n";
    	cout << "( 4 ) - Alterar os dados de um funcion�rio!\n";
    	cout << "( 5 ) - Sair!\n\n";
    	cout << "\n>>  ";
    	cin >> Op;
		system ("cls");
    	
    	if(ContCadast <= 50){
    		    			if(Op==1){
    		    				
    		    				      ContCadast = ContCadast + 1;
    		    				      cout << "---------------------------------------------------------------------------";
    		    				      cout << "\n- CADASTRO!\n";
    		    				      cout << "---------------------------------------------------------------------------\n\n";
    		    				    
    		    				      do {
									      Val = 0;
    		    				      	  cout << "\nDigite o C�digo do Funcion�rio: EX:(fk89) \n";
    		    				      	  cout << "OBS: Letras Min�sculas! \n";
    		    				      	  cout << "\n>>  ";
									      fflush(stdin);
    		    				          gets(Cod[ContCadast]);

    		    				          
    		    				          if (ContCadast > 1){
    		    				          	for (k=1; k<=ContCadast; k++){

													if(ContCadast != k ){
                                                    if(strcmp(Cod[ContCadast],Cod[k])==0){
															Val = 1;
														}
														
													}
													
											  }
										  }
    		    				          	
											  
    		    				          if(Val == 1){
    		    				          	           cout << "\n- MENSAGEM: Este C�digo j� est� cadastrado em nossos sistemas!\n";
										  }
    		    				          
									  } while(Val == 1);

    		    				      cout << "\n\nDigite o N�mero da filial do Funcion�rio: EX:(mg45)\n";
    		    				   	  cout << "OBS: Letras Min�sculas! \n";
    		    				      cout << "\n>>  ";
    		    				      gets(Fili[ContCadast]);
    		    				      
    		    				      cout << "\n\nDigite o Nome do Funcion�rio: \n";
    		    				      cout << "\n>>  ";
    		    				      gets(Nome[ContCadast]); 
    		    				      
									  cout << "\n\nDigite o Cargo do Funcion�rio: \n";
    		    				      cout << "OBS: Letras Min�sculas! \n";
			      			      	  cout << "\n>>  ";
									  gets(Cargo[ContCadast]);

    		    				      cout << "\n\nDigite o Sal�rio do Funcion�rio:\n";
   		    				      	  cout << "\n>>  ";
									  cin >> Sal[ContCadast];
   								      system ("cls");

    		    				      cout << "---------------------------------------------------------------------------";
    		    				      cout << "\n- MENSAGEM: Cadastro efetuado com sucesso!\n";
    		    				      cout << "---------------------------------------------------------------------------\n\n";
    		    				      


    		    				      
									 }
		} else {
		     	cout << "\nA empresa j� possui seus 50 Funcion�rios cadastrados!";
		       }

		    	if(Op==2){ 
		    	                      Achou = 0;
    		    				      cout << "---------------------------------------------------------------------------";
    		    				      cout << "\n- BUSCA POR FILIAL!\n";
    		    				      cout << "---------------------------------------------------------------------------\n\n";
    		    				      
		    		                      cout << "\nDigite o Filial a ser consultada: EX:(fk89) \n";
		    		                      cout << "OBS: Letras Min�sculas! \n";
   		    				      	      cout << "\n>>  ";
									      fflush(stdin);
    		    				          gets(Pfili);
    		    				          
		    			for (i=1; i<=ContCadast; i++){
		    				
                            if(strcmp(Pfili,Fili[i])==0){
                            	cout << "\n\nNome do Funcion�rio: ";
                            	cout << Nome[i];                            	
                            	cout << "\n\nCargo do Funcion�rio: ";
                            	cout << Cargo[i];                            	
                            	cout << "\n-----";
                            	Achou = 1;
							}
							
						}
						
						if(Achou == 0){
							          system ("cls");
    		    				      cout << "---------------------------------------------------------------------------";
    		    				      cout << "\n- MENSAGEM: Nenhuma filial encontrada!\n";
    		    				      cout << "---------------------------------------------------------------------------\n\n";
    		    				      
						} 
		    		
		        }
		    	if(Op==3){
		    		                  SomaSal = 0;
		    		                  AchouD = 0;
    		    				      cout << "---------------------------------------------------------------------------";
    		    				      cout << "\n- BUSCA POR FUNCIONARIOS COM CARGO DE GERENTE!\n";
    		    				      cout << "---------------------------------------------------------------------------\n\n";
							          system ("cls");                        	

    		    		
					if(ContCadast > 0){
		          
		    			for (j=1; j<=ContCadast; j++){
		    				
                            if(strcmp(Cargo[j],"gerente")==0){
    		    				      cout << "---------------------------------------------------------------------------";
    		    				      cout << "\n- FUNCION�RIO!\n";
    		    				      cout << "---------------------------------------------------------------------------\n\n";
                            	
                            	cout << "\n- C�digo do Funcion�rio: ";
                            	cout << Cod[j];
                            	cout << "\n- Nome do Funcion�rio: ";
                            	cout << Nome[j];                            	
                            	cout << "\n- Filial do Funcion�rio: ";
                            	cout << Fili[j];
                            	cout << "\n- Cargo do Funcion�rio: ";
                            	cout << Cargo[j];
                            	cout << "\n- Sal�rio do Funcion�rio: ";
                            	cout << Sal[j];
    		    				      cout << "\n---------------------------------------------------------------------------";
                            	AchouD = 1;
                            	
                            	SomaSal = SomaSal + Sal[j];
							}
							
						}
						
						if(AchouD == 0){
							          system ("cls");
    		    				      cout << "---------------------------------------------------------------------------";
								   	  cout << "\n- MENSAGEM: Nenhum funcion�rio com cargo de Gerente encontrado! \n";
    		    				      cout << "---------------------------------------------------------------------------\n\n";
						} else {
							   	cout << "\nSoma dos sal�rios dos gerentes: ";
                            	cout << SomaSal;
    		    				cout << "\n---------------------------------------------------------------------------";
                            	cout << "\n\n";
						}
					} else {
					   				  system ("cls");
    		    				      cout << "---------------------------------------------------------------------------";
								   	  cout << "\n- MENSAGEM: Nenhum funcion�rio cadastrado! \n";
    		    				      cout << "---------------------------------------------------------------------------\n\n";
						
					}
		    		
		}
		    	if(Op==4){
		    		                  AchouT = 0;
    		    				      cout << "---------------------------------------------------------------------------";
    		    				      cout << "\n- ALTERAR DADOS!\n";
    		    				      cout << "---------------------------------------------------------------------------\n\n";
		    		                      cout << "\nDigite o C�digo do Funcion�rio a ser alterado: EX:(fk89) \n";
		    		                      cout << "OBS: Letras Min�sculas! \n";
   		    				      	      cout << "\n>>  ";
									      fflush(stdin);
    		    				          gets(Acode);
    		    				          
    		    		 for (j=1; j<=ContCadast; j++){
    		    		 	

		    				
                            if(strcmp(Acode,Cod[j])==0){

                                                 Guarda = j;
                                                 AchouT = 1;
							}
							
						}
						
						if(AchouT == 1){
							            do {
									      Val = 0;
    		    				      cout << "---------------------------------------------------------------------------";
    		    				      cout << "\n- ALTERAR DADOS!\n";
    		    				      cout << "---------------------------------------------------------------------------\n\n";
    		    				      
    		    				      	  cout << "\nDigite o C�digo do Funcion�rio: EX:(fk89) \n";
    		    				      	  cout << "OBS: Letras Min�sculas! \n";
    		    				      	  cout << "\n>>  ";
									      fflush(stdin);
    		    				          gets(Cod[Guarda]);

    		    				          
    		    				          if (ContCadast > 1){
    		    				          	for (k=1; k<=Guarda; k++){
													
													if(Guarda != k ){
                                                    if(strcmp(Cod[Guarda],Cod[k])==0){
															Val = 1;
														}
														
													}
													
											  }
										  }
    		    				          	
											  
    		    				          if(Val == 1){
    		    				          	           cout << "\nEste C�digo j� est� cadastrado em nossos sistemas!";
										  }
    		    				          
									  } while(Val == 1);

    		    				      cout << "\n\nDigite o N�mero da filial do Funcion�rio: EX:(mg45)\n";
    		    				   	  cout << "OBS: Letras Min�sculas! \n";
    		    				      cout << "\n>>  ";
    		    				      gets(Fili[Guarda]);
    		    				      
    		    				      cout << "\n\nDigite o Nome do Funcion�rio: \n";
    		    				      cout << "\n>>  ";
    		    				      gets(Nome[Guarda]); 
    		    				      
									  cout << "\n\nDigite o Cargo do Funcion�rio: \n";
    		    				      cout << "OBS: Letras Min�sculas! \n";
			      			      	  cout << "\n>>  ";
									  gets(Cargo[Guarda]);

    		    				      cout << "\n\nDigite o Sal�rio do Funcion�rio:\n";
   		    				      	  cout << "\n>>  ";
									  cin >> Sal[Guarda];
   								      system ("cls");

    		    				      cout << "---------------------------------------------------------------------------";
    		    				      cout << "\n- MENSAGEM: Altera��o efetuada com sucesso!\n";
    		    				      cout << "---------------------------------------------------------------------------\n\n";
    		    				      

							
						               } else {
   								      system ("cls");
    		    				      cout << "---------------------------------------------------------------------------";
								   	  cout << "\n- MENSAGEM: Nenhum funcion�rio cadastrado! \n";
    		    				      cout << "---------------------------------------------------------------------------\n\n";
						                     }
		    		
		    		
	        	}
		    	if(Op < 1  ||  Op>5){
    		    				      cout << "---------------------------------------------------------------------------";
								   	  cout << "\n- MENSAGEM: Op��o digitada inv�lida! \n";
    		    				      cout << "---------------------------------------------------------------------------\n\n";                            	      cout << "-----\n\n";

		}
		
    	
    	
	} while ( Op != 5);
	
		
	
	
	system("PAUSE");
	return 0;
}
