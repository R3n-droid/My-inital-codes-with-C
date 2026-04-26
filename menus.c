
void menu(){
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
for( int i = 0; i < tamanho0; i++ ){
printf("%s\n", linhas0[i]);
}
}
void financeiro0(){
    char *linhas1 [] = {
"||==================================================||",
"||                		 menu                  		 ||",
"||1.saldo                                       	 ||",
"||2.pedidos                                     	 ||",
"||3.compras                                     	 ||",
"||4.voltar                                      	 ||",
"||5.sair                                        	 ||",
"||==================================================||",
    };
    int tamanho1 = sizeof(linhas1) / sizeof(linhas1[0]);
    for( int o = 0; o < tamanho1; o++){
        printf("%s\n", linhas1[o]);
    }
} void saldo0(){
    char * linhas2 [] = {
    "||===========================||",
	"|| saldo:R$ 2.000.000,00 	  ||",
	"||===========================||",
    };
    int tamanho2 = sizeof(linhas2) / sizeof(linhas2[0]);
    for( int v = 0; v < tamanho2; v++){
        printf("%s\n", linhas2[v]);
    }

} void pedido0(){
char * linhas3 [] = {

   "||===================================||",
   "|| pedido n1:sorvete de morango    	 ||",
   "|| pedido n2:sorvete de chocolate  	 ||",
   "|| pedido n3:sorvete de baunilha   	 ||",
   "|| pedido n4:sorvete do kanye west 	 ||",
   "||===================================||",
};
int tamanho3 = sizeof(linhas3) / sizeof(linhas3[0]);
for(int u = 0; u < tamanho3; u++){
    printf("%s\n", linhas3[u]);
}
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
    for( int y = 0; y < tamanho4; y++){
        printf("%s\n", linhas4[y]);
    }

}void inventario0(){
    char * linhas5 [] ={
"||==================================================||",
"||                		 estoque                 	 ||",
"||2.assai                                        	 ||",
"||3.sorvete sabor agua                          	 ||",
"||4.estatua do kanye west                       	 ||",
"||==================================================||",
    };
    int tamanho5 = sizeof(linhas5) / sizeof(linhas5[0]);
    for(int r = 0; r < tamanho5; r++){
        printf("%s\n", linhas5[r]);
    }
}

