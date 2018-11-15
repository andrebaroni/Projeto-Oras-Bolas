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
		printf("%.3f, ",vetTemp[n]);
	}

	puts("");*/
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
       int i;
       float vetX[1001];
       float vetY[1001];
       float vetTemp[1001];
       float cos[1001];
       float sen[1001];
       
       float veloRoboX[1001];
       float veloRoboY[1001];
       float veloRobo[1001];
       
       for(i=0;i<1002;i++){
             veloRobo[i] = 0;
       }

       float vetRoboX[1001];
       float vetRoboY[1001];

	   float posRoboX, posRoboY, posBolaX, posBolaY, tempoEncontro, x, y;
	   
	   
       int n,k,j;
       float t, tempo, tmaior, contaX, contaY, distanciaX, distanciaY;
       

    inserirTempoVetor(vetTemp);
	lerEinserirVetorX(vetX);
	lerEinserirVetorY(vetY);


	/*fazer um scanf pra pegar o primeiro vetor do robo(posicao inicial)*/
	printf("Coloque a posicao inicial do robo X e Y: ");
	scanf("%f %f", &vetRoboX[0], &vetRoboY[0]);
	printf("Voce escolheu as posicoes %.2f e %.2f do robo!\n", vetRoboX[0], vetRoboY[0]);


float veloMaxima = 2.3; /*velocidade maxima robo*/
float aceleracao = 2.6; /*aceleracao robo*/ 
float dist, veloBolaY[1001], veloBolaX[1001];



float dist2[1001];

for(n=0;n<1002;n++){
                    
                 veloRobo[n] = aceleracao * vetTemp[n];  
                  
                  if (veloRobo[n] >= 2.3){
                             veloRobo[n] = 2.3;
                             
                                  }                 
                    }


for(i=0; i<1002; i++){
         
          dist2[i] = ((vetX[i] - vetRoboX[i]) * (vetX[i] - vetRoboX[i])) + ((vetY[i] - vetRoboY[i]) * (vetY[i] - vetRoboY[i]));/*distancia entre os dois pontos, entre a bola e o robo*/

          /*veloBolaX[i] = (-0.01*vetTemp[i]) + 0.5;
          veloBolaY[i] = (-0.016*vetTemp[i]) + 0.4;*/
          
          
          cos[i] = (vetX[i] - vetRoboX[i]) / sqrt(dist2[i]); /*acha o cosseno*/
          sen[i] = (vetY[i] - vetRoboY[i]) / sqrt(dist2[i]); /*acha o seno*/
      
          vetRoboX[i+1] = vetRoboX[i] + (cos[i] * 0.04); /*vai aumentando a posicao do robo em X*/
          vetRoboY[i+1] = vetRoboY[i] + (sen[i] * 0.05); /*vai aumentando a posicao do robo em Y*/
          
         
         if (vetRoboX[i] >= vetX[i] -0.125 && vetRoboX[i] <= vetX[i] + 0.125 && vetRoboY[i] >= vetY[i] - 0.125 && vetRoboY[i] <= vetY[i] + 0.125){ /*o range de 0.125*/
          
            printf ("Achou miresavi! \n");
            printf("RoboX: %.3f ==== RoboY: %.3f ===== Velocidade: %.3f\n", vetRoboX[i], vetRoboY[i], veloRobo[i]);
            printf("BolaX: %.3f ==== BolaY: %.3f\n", vetX[i], vetY[i]);
            printf("Tempo: %.3f\n", vetTemp[i]);
          
            break;
  }
            else{
             printf("X: %.3f ==== Y: %.3f ====== Tempo: %.3f ===== Velocidade: %.3f\n", vetRoboX[i], vetRoboY[i], vetTemp[i], veloRobo[i]);
             printf("BolaX: %.3f ==== BolaY: %.3f\n\n", vetX[i], vetY[i]);
            
   }      
   
  
   
}
                              

	system("pause");
}
