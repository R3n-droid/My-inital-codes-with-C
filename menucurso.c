#include<stdio.h> 
#include<stdlib.h>

int op (){
    int op1;
printf("escolha uma das opcoes acima: ");
scanf("%d", &op1);
return op1;
}
void printlinha(char * linhas[], int tamanho){
for( int i = 0; i < tamanho; i++ ){
printf("%s\n", linhas[i]);
}
}
void menu0(){
char * linhas0 [] = {
"||==============================================||",
"||                	   menu                      ||",
"||1.financeiro                                  ||",
"||2.inventario                                  ||",
"||3.voltar                                      ||",
"||4.sair                                        ||",
"||==============================================||",
};
int tamanho0 = sizeof(linhas0) / sizeof(linhas0[0]);
printlinha(linhas0, tamanho0); 
} void financeiro0(){
    char *linhas1 [] = {
"||==================================================||",
"||                		 menu                  		 ||",
"||1.saldo                                       	 ||",
"||2.pedidos                                     	 ||",
"||3.compras                                     	 ||",
"||4.voltar                                      	 ||",
"||==================================================||",
    };
    int tamanho1 = sizeof(linhas1) / sizeof(linhas1[0]);
    printlinha(linhas1, tamanho1);
    }
int menu1(){
menu0();
return op();
} void saldo0(){
    char * linhas2 [] = {
    "||===========================||",
	"|| saldo:R$ 2.000.000,00 	  ||",
	"||===========================||",
    };
    int tamanho2 = sizeof(linhas2) / sizeof(linhas2[0]);
    printlinha(linhas2, tamanho2);
}void pedidos0 (){
char * linhas3 [] = {

   "||===================================||",
   "|| pedido n1:sorvete de morango    	 ||",
   "|| pedido n2:sorvete de chocolate  	 ||",
   "|| pedido n3:sorvete de baunilha   	 ||",
   "|| pedido n4:sorvete do kanye west 	 ||",
   "||===================================||",
};
int tamanho3 = sizeof(linhas3) / sizeof(linhas3[0]);
printlinha(linhas3, tamanho3);
} void compras0(){
    char * linhas4 [] = {
   "||=========================================||",
   "|| compra n1:disco de vinil do kanye west  ||",
   "|| pedido n2:pratos                    	   ||",
   "|| pedido n3:copos                     	   ||",
   "|| pedido n4:estatua do kanye west     	   ||",
   "||=========================================||",
    };
    int tamanho4 = sizeof(linhas4) / sizeof(linhas4[0]);
   printlinha(linhas4, tamanho4);
} void inventario0(){
    char * linhas5 [] ={
"||==================================================||",
"||                		 estoque                 	 ||",
"||2.assai                                        	 ||",
"||3.sorvete sabor agua                          	 ||",
"||4.estatua do kanye west                       	 ||",
"||==================================================||",
    };
    int tamanho5 = sizeof(linhas5) / sizeof(linhas5[0]);
    printlinha(linhas5, tamanho5);
} void financeiro1(){
    while(1){
 system("clear"); financeiro0 ();
int op1 = op();
switch(op1){
     
    case 1: system("clear"); saldo0(); getchar(); getchar(); break;
    case 2: system("clear"); pedidos0(); getchar(); getchar(); break;
    case 3: system("clear"); compras0(); getchar(); getchar(); break;
    case 4: system("clear"); return; 
    default:{
        printf("nao eh possivel realizar essa acao\n");
         getchar(); getchar();
    }
}
    }
}int main(){
while(1){
    system("clear");
    int op2 = menu1();
switch(op2){
    
    case 1: system("clear"); financeiro1(); break;
    case 2: system("clear"); inventario0(); getchar(); getchar(); break;
    case 3: system("clear"); break;
    case 4: system("clear"); return 0;
    default:{
        printf("nao eh possivel escolher isso\n");
         getchar(); getchar();
    }
}
}

    return 0;
}