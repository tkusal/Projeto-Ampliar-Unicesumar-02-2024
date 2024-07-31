#include <stdio.h>
#include <locale.h>

int main(){
    
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    char nome[50];
    int opc, percento;
    float aumento, salario, novosalario;

    printf("Diga o seu usuário: ");
    scanf("%s", nome);

    printf("Informe o seu salário: ");
    scanf("%f", &salario);
    
    system("cls");
    printf("Digite o numero correspondente ao seu cargo!\n");
    printf("1. Desenvolvedor Java\n 2. Analista de Redes\n 3. Arquiteto DevOps\n 4. Técnico de Suporte\n");
    scanf("%d", &opc);
    
    switch(opc){
        
    case 1:
        percento = 30;
        aumento = salario * 0.30;
        novosalario = salario + aumento;
        break;
    case 2:
        percento = 25;
        aumento = salario * 0.25;
        novosalario = salario + aumento;
        break;
    case 3:
        percento = 50;
        aumento = salario * 0.50;
        novosalario = salario + aumento;
        break;
    case 4:
        percento = 15;
        aumento = salario * 0.15;
        novosalario = salario + aumento;
        break;
    default:
        printf("Código Inválido!");
        break;
    }

    system("cls");
    printf("Nome do funcionário: %s\n", nome);
    printf("Salário Atual: %.2f\n", salario);
    printf("O aumento foi de %d % : %.2f\n", percento, aumento);
    printf("Seu novo salário é %.2f:", novosalario);

    return 0;
}
