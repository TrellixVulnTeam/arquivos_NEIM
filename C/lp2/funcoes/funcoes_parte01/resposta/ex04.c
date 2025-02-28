//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex04.c
//    Importante: nao altere o nome do arquivo.
//[]--------------------------------------------------------------[]
    
#include<stdio.h>

//[]-------------------------------------------------------------[]
//   Função: intMax()
//   Entrada: inteiros a, b e c  
//   Saída: devolve o maior valor 
//[]-------------------------------------------------------------[]
int intMax(int a, int b, int c){
   int maior = a;
   if (b > maior) maior = b;   
   if (c > maior) maior = c;
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
   testar(intMax(1, 2, 3), 3);
}

void caso_de_teste02(){
   testar(intMax(1, 3, 2), 3);
}

void caso_de_teste03(){
   testar(intMax(3, 2, 1), 3);
}

void caso_de_teste04(){
   testar(intMax(9, 3, 3), 9);
}

void caso_de_teste05(){
   testar(intMax(3, 9, 3), 9);
}

void caso_de_teste06(){
   testar(intMax(8, 2, 3), 8);
}

void caso_de_teste07(){
   testar(intMax(-3, -2, -1), -1);
}

void caso_de_teste08(){
   testar(intMax(6, 2, 5), 6);
}

void caso_de_teste09(){
   testar(intMax(5, 6, 2), 6);
}

void caso_de_teste10(){
   testar(intMax(5, 2, 6), 6);
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
