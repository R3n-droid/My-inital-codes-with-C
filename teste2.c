#include <stdio.h>

int main() {
    while(1){
    printf("||========================================================||\n");
    printf("||                     	menu                       	  ||\n");
    printf("||1.calculadora                                       	  ||\n");
    printf("||2.sair                                              	  ||\n");
    printf("||3.voltar                                            	  ||\n");
    printf("||========================================================||\n");
    
int op1;
printf("digite a opcao que voce quer "); scanf("%d", &op1);

switch(op1){
    case 1 :{
    int num1, num2; char op;
    printf("escolha a operacao "); scanf(" %c", &op);
    printf("ecolha um numero "); scanf("%d", &num1);
    printf("escolha outro numero "); scanf("%d", &num2);
    switch(op){
        case '+': printf("o resultado eh: %d\n", num1 + num2); break;
        case '-': printf("o resultado eh: %d\n", num1 - num2); break;
        case '*': printf("o resultado eh: %d\n", num1 * num2); break;
        case '/': printf("o resultado eh: %d\n", num1 / num2); break;
        default: break;
    }
    } case 2: return 0;
      case 3: break;
      default: break;
    } printf("escolhe direito"); break;
}return 0;
}