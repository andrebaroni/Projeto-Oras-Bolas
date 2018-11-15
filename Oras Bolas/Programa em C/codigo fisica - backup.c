#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int inserirTempoVetor (float vetTemp[1001]){
/*puts("=========Vetor X==========");*/
     FILE *tempo;
	/*float vetX[1001];  /*vetor para armazenar em forma de float, para ter o numero completo, ao inves de caractere por caractere*/
	int i=0;
	tempo=fopen("tempo.txt","r"); /*aponta o bolaX pro inicio do arquivo, em modo leitura.*/
	if(tempo==NULL){
		printf("Nao encontrado\n");
		exit(0);
	}

	char c; /*cria a variavel char para printar os caracteres, um por um, usando a função fgetc.*/
	fscanf(tempo,"%f",&vetTemp[i]); /*leio a linha inteira como float, e armazeno no vet[i] (posição 0, para ler a primeira linha)*/
	c = fgetc(tempo); /*leio um caractere, e avanço o ponteiro do arquivo um caractere a frente.*/
	i++;

	while(c!=EOF){
		if(c=='\n'){ /*sempre que acha um \n, é pq na linha anterior achou, e o ponteiro pulou pro proximo caractere. Logo, estamos na linha que contém todo o numero*/
			fscanf(tempo,"%f",&vetTemp[i]); /*leio toda a linha como um float*/
			i++;
		}
	c=fgetc(tempo); /*lê um caractere e avança o ponteiro 1 caractere.*/

	}

	/*fseek(bolaX,0,SEEK_SET); /*volto o ponteiro do arquivo pra posição inicial do arquivo*/
	c=fgetc(tempo); /*aqui faço a mesma coisa que no código de printar o txt. leio caractere por caractere, e printo em seguida.*/

	/* o que tava fazendo antes, printar o q ta no arquivo txt*/
	/*while(c!=EOF){
		printf("%c",c);
		c=fgetc(bolaX);

	}*/

	/*printf("\nCasas do vetor"); /*simplesmente printo o vetor float */
	int n;

	/*for(n=0;n<i;n++){
		printf("\nVetor[%i]: %.3f", n+1, vetX[n]);
	}*/

	puts("");
	fclose(tempo);











}

int lerEinserirVetorX(float vetX[1001]){
     /*puts("=========Vetor X==========");*/
     FILE *bolaX;
	/*float vetX[1001];  /*vetor para armazenar em forma de float, para ter o numero completo, ao inves de caractere por caractere*/
	int i=0;
	bolaX=fopen("bolaX.txt","r"); /*aponta o bolaX pro inicio do arquivo, em modo leitura.*/
	if(bolaX==NULL){
		printf("Nao encontrado\n");
		exit(0);
	}

	char c; /*cria a variavel char para printar os caracteres, um por um, usando a função fgetc.*/
	fscanf(bolaX,"%f",&vetX[i]); /*leio a linha inteira como float, e armazeno no vet[i] (posição 0, para ler a primeira linha)*/
	c = fgetc(bolaX); /*leio um caractere, e avanço o ponteiro do arquivo um caractere a frente.*/
	i++;

	while(c!=EOF){
		if(c=='\n'){ /*sempre que acha um \n, é pq na linha anterior achou, e o ponteiro pulou pro proximo caractere. Logo, estamos na linha que contém todo o numero*/
			fscanf(bolaX,"%f",&vetX[i]); /*leio toda a linha como um float*/
			i++;
		}
	c=fgetc(bolaX); /*lê um caractere e avança o ponteiro 1 caractere.*/

	}

	/*fseek(bolaX,0,SEEK_SET); /*volto o ponteiro do arquivo pra posição inicial do arquivo*/
	c=fgetc(bolaX); /*aqui faço a mesma coisa que no código de printar o txt. leio caractere por caractere, e printo em seguida.*/

	/* o que tava fazendo antes, printar o q ta no arquivo txt*/
	/*while(c!=EOF){
		printf("%c",c);
		c=fgetc(bolaX);

	}*/

	/*printf("\nCasas do vetor"); /*simplesmente printo o vetor float */
	int n;

	/*for(n=0;n<i;n++){
		printf("\nVetor[%i]: %.3f", n+1, vetX[n]);
	}*/

	puts("");
	fclose(bolaX);

}

int lerEinserirVetorY(float vetY[1001]){
     /*puts("\n=========Vetor Y==========");*/
     FILE *bolaY;
	/*float vetY[1001];  /*vetor para armazenar em forma de float, para ter o numero completo, ao inves de caractere por caractere*/
	int i=0;
	bolaY=fopen("bolaY.txt","r"); /*aponta o bolaX pro inicio do arquivo, em modo leitura.*/
	if(bolaY==NULL){
		printf("Nao encontrado\n");
		exit(0);
	}

	char c; /*cria a variavel char para printar os caracteres, um por um, usando a função fgetc.*/
	fscanf(bolaY,"%f",&vetY[i]); /*leio a linha inteira como float, e armazeno no vet[i] (posição 0, para ler a primeira linha)*/
	c = fgetc(bolaY); /*leio um caractere, e avanço o ponteiro do arquivo um caractere a frente.*/
	i++;

	while(c!=EOF){
		if(c=='\n'){ /*sempre que acha um \n, é pq na linha anterior achou, e o ponteiro pulou pro proximo caractere. Logo, estamos na linha que contém todo o numero*/
			fscanf(bolaY,"%f",&vetY[i]); /*leio toda a linha como um float*/
			i++;
		}
	c=fgetc(bolaY); /*lê um caractere e avança o ponteiro 1 caractere.*/

	}

	/*fseek(bolaY,0,SEEK_SET); /*volto o ponteiro do arquivo pra posição inicial do arquivo*/
	c=fgetc(bolaY); /*aqui faço a mesma coisa que no código de printar o txt. leio caractere por caractere, e printo em seguida.*/

	/* o que tava fazendo antes, printar o q ta no arquivo txt*/
	/*while(c!=EOF){
		printf("%c",c);
		c=fgetc(bolaY);

	}*/

	/*printf("\nCasas do vetor"); /*simplesmente printo o vetor float*/
	int n;

	/*for(n=0;n<i-1;n++){
		printf("\nVetor[%i]: %.3f", n+1, vetY[n]);
	}
	puts("");*/
	fclose(bolaY);

}



main(){
       float vetX[1001];
       float vetY[1001];
       float vetTemp[1001];

       float vetRoboX[1001];
       float vetRoboY[1001];

	   float posRoboX, posRoboY, posBolaX, posBolaY;
	   
       int n,k,j;
       float t, tempo, tmaior, contaX, contaY, distanciaX, distanciaY;
       int i=1002;

    inserirTempoVetor(vetTemp);
	lerEinserirVetorX(vetX);
	lerEinserirVetorY(vetY);

	/*puts("==============Vetor Tempo============");
	for(n=0;n<i-1;n++){
		printf("\nVetor[%i]: %.3f", n+1, vetTemp[n]);
	}

	puts("\n=====================Vetor X===========================");
	for(n=0;n<i-1;n++){
		printf("\nVetor[%i]: %.3f", n+1, vetX[n]);
	}
	puts("\n\n=====================Vetor Y===========================");
	for(n=0;n<i-1;n++){
		printf("\nVetor[%i]: %.3f", n+1, vetY[n]);
	}
	puts("");

	/*fazer um scanf pra pegar o primeiro vetor do robo(posicao inicial)*/
	printf("Coloque a posicao inicial do robo X e Y: ");
	scanf("%f %f", &vetRoboX[0], &vetRoboY[0]);
	printf("Voce escolheu as posicoes %.2f e %.2f do robo!\n", vetRoboX[0], vetRoboY[0]);


    /*isso faz com que o vetor do robo iguala ao vetor da bola(coordenada), porem ainda precisa */
	/*j=0;
	puts("\n\n=====================Novo VetorX do Robo===========================");

             for(k=1;k<1001;k++){
                 if(vetRoboX[k] != vetX[k]){
                     vetRoboX[k] = vetX[k];
                     printf("\nVetor[%i]: %.3f", j+1, vetRoboX[k]);
                     j++;
                 }
             }
            puts("\n\n=====================Novo VetorY do Robo===========================");
            j=0;
            for(k=1;k<1001;k++){
                 if(vetRoboY[k] != vetY[k]){
                        vetRoboY[k] = vetY[k];
                        printf("\nVetor[%i]: %.3f", j+1, vetRoboY[k]);
                        j++;
                        }

            }*/

     /*puts("\n=================================aproximacao===============================");

     /*printf("Digite o tempo que voce quer interceptar: ");
     scanf("%f", &t);
     int po, z;
     for(z=0; z<1002; z++){
              if(vetTemp[z] == t){
                                    po = z+1;
              }
      }
     printf("%i\n", po);
     puts("\n===================================");*/
     i=0;
     for(i=0; i<1002; i++){/*criar outro for*/

		vetRoboX[i] = (0.04*(vetTemp[i]*vetTemp[i])) + vetRoboX[0];
		
		            if (vetRoboX[i] >= vetX[i] -0.05 && vetRoboX[i] <= vetX[i] + 0.05){
                                    printf("encontrou em XXXX!!!!!! ======== posicao: %i\n", i);
                                    vetRoboX[i] = vetX[i];
                                    posRoboX =  vetX[i]; /**/
                                      break;
                                    }else{
                                          printf("nao encontrou x\n"); 
                                          }
		
                    }
      n=0;
      for (n=0; n<1002; n++){  
        
        vetRoboY[n] = (0.04*(vetTemp[n]*vetTemp[n])) + vetRoboY[0];
        
        
                    if(vetRoboY[n] >= vetY[n] - 0.05 && vetRoboY[n] <= vetY[n] + 0.05){
                                   printf("encontrou em YYYY!!!!!! ======== posicao: %i\n", n);
                                   vetRoboY[n] = vetY[n];
                                   posRoboY = vetY[n];
                                   break;
                                 }else{
                                       printf("nao encontrou == Posicao RoboY: %.3f\n", vetRoboY[n]); 
                                          }
                       
        } 
          
        
                       
		               
		               
		               

                       
                       printf("Posicao RoboX: %.3f ===== Posicao RoboY: %.3f\n", vetRoboX[i], vetRoboY[n]);
		               printf("Posicao BolaX: %.3f ===== Posicao BolaY: %.3f\n", vetX[i], vetY[n]);
		               printf("Tempo: %.2f =========== numero do vetor: %i\n\n", vetTemp[i], i);
		               
   
   
   
   
  
                       
/*}
                       
                       /*quadrante 2
        if(vetRoboX[0] < 1 && vetRoboY[0] > 0.5){
                       posRoboX = (2*(vetTemp[i]*vetTemp[i])) + vetRoboX[0];
                       posBolaX = vetX[i];
        
                       posRoboY = (vetTemp[i]*vetTemp[i]) + vetRoboY[0];
                       posBolaY = vetY[i];
                       }*/
        
        
        

		
		




                             
                              /*roxo === se o vetRoboX e vetRoboY forem menor que o vetX e vetY  --- fazer o Y ir mais rapido e o X mais devagar*/
                              /*azul claro ==== se o vetRoboX e vetRoboY forem maior que o vetX e vetY ----- fazer o Y ir mais devagar e o X mais rapido (talvez Y negativo? ou Y constante e x aumentando)*/
                              /*rosa ==== se vetRoboY[0] for maior 0.5 ---- Y vai mais devagar e o X mais rapido*/      /*azul claro e rosa são praticamente iguais*/
                              /*branco ====se for no 3 quadrante faz igual estava fazendo (formula antiga)*/
                             /*fazer outro if pra quando for igual*/
                             
     
               /*printf("Posicao: %i\n", i+1);
               printf("X: %.3f\n", distanciaX);
               printf("Y: %.3f\n", distanciaY);
               /*if (vetRoboY[0] > 0.5){
                         /*contaY = (0.768*vetTemp[i]/2) + vetRoboY[0];
                         }


              if(vetX[0] == vetRoboX[0]){
                         contaX = (1*vetTemp[i]/2) + vetRoboX[0];
                         }

              if (vetY[0] == vetRoboY[0]){
                         contaY = (0.768*vetTemp[i]/2) + vetRoboY[0];
                         }


              if(vetRoboX[0] < 1) {
                         contaX = (1*vetTemp[i]/2) + vetRoboX[0];
                         }

              if (vetRoboY[0] < 0.5){
                         /*contaY = (0.768*vetTemp[i]/2) + vetRoboY[0];
                              }*/




              /*printf("%i -- Tempo: %f --- Conta X: %f ===== Conta Y: %f\n", i, vetTemp[i], contaX, contaY);*/

              /*if((distanciaX >= vetX[i] - 0.2 && distanciaX <= vetX[i] + 0.2) && (distanciaY >= vetY[i] - 0.2 && distanciaY <= vetY[i] + 0.2)){
                        printf("%i encontrou!", i);
                        system("pause");
                        }else{
                              printf("nao encontrou!\n");
                              }
              
     }*/



	system("pause");
}
