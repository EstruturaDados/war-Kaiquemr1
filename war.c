struct Territorio{  //Struct para armazenar os dados dos territórios 
    
    char nome[30];
    char cor[10];
    int tropas;
};

typedef struct Territorio Territorio;   //Simplifiquei o nome da struct. Ao invés de "Struct Territorio", agora fica "Territorio"

#include <stdio.h>
#include <string.h>

int main()
{
    int i;

    Territorio territorios[5]; //Vetor de 5 posições
     
      printf("=== Cadastro de Territórios ===\n\n");
    for (i = 0; i < 5; i++) {
        printf("Cadastro do território %d:\n", i + 1);
    
    //Entrada de dados  
    printf("Digite o nome do território: \n");
    scanf("%s", territorios[i].nome);
    printf("Digite a cor: \n");
    scanf("%s", territorios[i].cor);
    printf("Digite o número de tropas: \n");
    scanf("%d", &territorios[i].tropas);
    
    printf("\n\n");
}


// Exibição dos dados cadastrados
    printf("\n=== Territórios Cadastrados ===\n\n");
    for (i = 0; i < 5; i++) {
        printf("Território %d:\n", i + 1);
        printf("  Nome:   %s\n", territorios[i].nome);
        printf("  Cor:    %s\n", territorios[i].cor);
        printf("  Tropas: %d\n\n", territorios[i].tropas);
    }

    return 0;
}