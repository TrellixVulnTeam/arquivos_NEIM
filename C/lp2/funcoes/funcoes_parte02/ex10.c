//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex20.c
//    Importante: nao altere o nome do arquivo.
//[]--------------------------------------------------------------[]
    
#include<stdio.h>
#include<stdlib.h>

//[]-------------------------------------------------------------[]
//   Função: soma3()
//   Entrada: vetor de inteiros v de tamanho igual a 3   
//   Saída: devolve a soma dos elementos do vetor
//[]-------------------------------------------------------------[]
int soma3(int v[3]){
   // escreva o seu codigo aqui ...	
   return 0;
}


//[]-------------------------------------------------------------[]
//   Função: testar()
//   Entrada: valor obtido da funcao, valor esperado
//   Saída: ok se obtido igual a esperado e nao ok caso contrario
//[]-------------------------------------------------------------[]
void testar(int obtido, int esperado){
   if (obtido == esperado)
	   printf("Parabéns !!!");
   else
	   printf("Ainda não !!!");
   printf(" obtido: %d  esperado: %d\n", obtido, esperado);
}

//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]
void caso_de_teste01(){
   int v[3] = {1,2,3};
   testar(soma3(v), 6);
}

void caso_de_teste02(){
   int v[3] = {5, 11, 2};	
   testar(soma3(v), 18);
}

void caso_de_teste03(){
   int v[3] = {7,0,0};	
   testar(soma3(v), 7);
}

void caso_de_teste04(){
   int v[3] = {1,2,1};	
   testar(soma3(v), 4);
}

void caso_de_teste05(){
   int v[3] = {1,1,1};	
   testar(soma3(v), 3);
}

void caso_de_teste06(){
   int v[3] = {2,3,5};	
   testar(soma3(v), 10);
}

void caso_de_teste07(){
   int v[3] = {2,7,2};	
   testar(soma3(v), 11);
}

void caso_de_teste08(){
   int v[3] = {4,5,6};	
   testar(soma3(v), 15);
}

void caso_de_teste09(){
   int v[3] = {2,4,6};	
   testar(soma3(v), 12);
}

void caso_de_teste10(){
   int v[3] = {3,6,9};	
   testar(soma3(v), 18);
}


//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]
int main(){
   caso_de_teste01(); 
   caso_de_teste02(); 
   caso_de_teste03(); 
   caso_de_teste04(); 
   caso_de_teste05(); 
   caso_de_teste06(); 
   caso_de_teste07(); 
   caso_de_teste08(); 
   caso_de_teste09(); 
   caso_de_teste10(); 
   return 0;
}
