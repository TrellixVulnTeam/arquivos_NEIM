//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex04.c
//    Importante: nao altere o nome do arquivo.
//[]--------------------------------------------------------------[]
#include<stdio.h>


//[]-------------------------------------------------------------[]
//   Função: maior_multiplo_de_x()
//   Entrada: vetor de inteiros v[] e o seu tamanho n, e inteiro x 
//   Saída:   devolve o maior elemento do vetor que
//            é multiplo de x.
//[]-------------------------------------------------------------[]
int maior_multiplo_de_x(int v[], int n, int x){
   int maior = 0;
   for (int i = 0; i < n; i++)
	if (v[i] % x == 0 && v[i] > maior){
	     maior = v[i];
	}	     
   return maior;
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
   int v[6] = {1,2,3,4,5,6};
   testar(maior_multiplo_de_x(v, 6, 2), 6);
}

void caso_de_teste02(){
   int v[10] = {2,7,6,4,5,9,8,7,10,2};
   testar(maior_multiplo_de_x(v, 10, 3), 9);
}

void caso_de_teste03(){
   int v[10] = {12,15,65,45,57,91,82,7,13,12};
   testar(maior_multiplo_de_x(v, 10, 5), 65);
}

void caso_de_teste04(){
   int v[7] = {21,20,49,28,57,20,22};
   testar(maior_multiplo_de_x(v, 7, 4), 28);
}

void caso_de_teste05(){
   int v[6] = {17,2,15,4,14,18};
   testar(maior_multiplo_de_x(v, 6, 6), 18);
}

void caso_de_teste06(){
   int v[10] = {1,8,7,3,2,5,4,9,6,3};
   testar(maior_multiplo_de_x(v, 10, 8), 8);
}

void caso_de_teste07(){
   int v[10] = {2,18,27,33,2,15,24,19,26,36};
   testar(maior_multiplo_de_x(v, 10, 9), 36);
}

void caso_de_teste08(){
   int v[10] = {32,28,47,13,26,12,4,29,16,24};
   testar(maior_multiplo_de_x(v, 10, 12), 24);
}

void caso_de_teste09(){
   int v[10] = {33,28,21,37,29,25,22,29,17,24};
   testar(maior_multiplo_de_x(v, 10, 11), 33);
}

void caso_de_teste10(){
   int v[10] = {41,28,47,27,29,35,42,39,46,32};
   testar(maior_multiplo_de_x(v, 10, 14), 42);
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
