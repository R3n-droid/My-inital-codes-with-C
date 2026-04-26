#include<stdio.h>
#include<stdlib.h>
#include<time.h>
typedef struct{
    int id;
    char name[50];

}ID;


void load_products(ID itens[], int size);

int op(){
    int Op;
    printf("escolha uma opcao:");
    scanf("%d", &Op);
    return Op;
}

void menu(){
     const char* menu0[] = {
        "#==============#",
        "#              #",
        "#     MENU     #",
        "#              #",
        "#==============#",
        "1. inventory",
        "2. voltar",
        "3. Exit",

     };
     int size0 = sizeof(menu0) / sizeof(menu0[0]);
     for(int o = 0; o < size0; o++){
        printf("%s\n", menu0[o]);
     }

}

void products(){
system("cls");
printf("=======inventory=======\n");
 ID itens[] = {

        {0,"abacaxi\n"}, 
        {0,"detergente\n"}, 
        {0,"sabonete\n"},
        {0,"salgado\n"}, 
        {0,"chocolate\n"}, 
        {0,"Monster\n"}

    };
    int size = sizeof(itens) / sizeof(itens[0]);
    load_products(itens, size);
    for(int i = 0; i < size; i++){
        printf("ID: %d | Name: %s\n", itens[i].id, itens[i].name);
    }
    system("pause");

}

void load_products( ID itens[], int size){

    FILE *f = fopen("products.txt","r");

    if(f == NULL){
        for(int i = 0; i < size; i++){
            itens[i].id = 0 + rand() %9000;
        }
    
    f = fopen("products.txt", "w");
    for(int i = 0; i < size; i++){
        fprintf(f,"%d %s\n", itens[i].id, itens[i].name);
    }
    fclose(f);
} else{
    for(int i = 0; i < size; i++){
        fscanf(f,"%d %[^\n]", &itens[i].id, itens[i].name);
    }
    fclose(f);
}
}

int main(){
     srand(time(NULL));
    int OP;
    do{
        system("cls");
        menu();
        OP = op();
     switch(OP){
        case 1:
        system("cls");
        products();
        printf("deseja continuar?");
        break;
        case 2:
        break;
        case 3:
        break;

}

    }while( OP != 3);
    system("cls");
    printf("voce saiu");
    return 0;
}