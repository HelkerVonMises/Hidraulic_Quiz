#include <stdio.h>
#include <conio.h>
#include <unistd.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
    
char var1, var2, var3, var4, var5, var6;
int a;

    printf("\t\tBem vindo ao quiz lendário sobre hidráulica versão Beta 1.0\n");
sleep(2);
    printf("\t\t\tO tema do quiz é sobre fluídos hidráulicos\n");
sleep(1);
    printf("\t\t\t\t\tBoa sorte :)\n\n");
sleep(3);
    system("clear");
    
    printf("\t\t\t\tViscosidade\n\t\tUma das funções do óleo com menor viscosidade no sistema é:\n\nA) Desgastar as peças do sistema\nB) Dificultar o escoamento\nC) Lubrificar todas as peças do sistema de forma rápida e uniforme\nD) Demandar maior manutenção\nE) Gerar maior esforço do motor\n\n");
    printf ("Resposta: ");
    scanf(" %c", &var1);
        if(var1=='c'){printf("\nIsso ai!\n\n");}
    else{printf("\nOps!!\n\n");}
sleep(1.5);
    printf("Próxima questão\n\n");
sleep(1.5);
    system("clear");

    printf("\t\t\t\tPropriedades do óleo\n\n\t\tA textura do óleo é importante para o sistema?\n\nA) Sim, pois o óleo deve gerar uma película protetora no sistema\nB) Não, pois o óleo atrapalha o sistema\nC) Sim, pois o óleo deve gerar uma resistência no motor\nD) Não é importante para o sistema\nE) Nenhuma das alternativas acima\n\n");
    printf ("Resposta: ");
    scanf(" %c", &var2);
        if(var2=='a'){printf("\nCê ta doido\n\n");}
        else{printf("\nMais sorte na próxima\n\n");}
sleep(1.5);
    printf("Próxima questão\n\n");
sleep(1.5);
    system("clear");
    
    printf("\t\t\t\tComposição do óleo\n\n\t\tQuais são as três bases do Óleo Mineral?\n\nA) Parafínico, Graxante e Misto\nB) Sintético, Vegetal e Misto\nC) Sintético, Naftênico e Vegetal\nD) Sintético, Naftênico e Misto\nE) Parafínico, Naftênico e Misto\n\n");
    printf ("Resposta: ");
    scanf(" %c", &var3);
        if(var3=='e'){printf("\nBrabo\n\n");}
        else{printf("\nTão pertinho...\n\n");}
sleep(1.5);
    printf("Próxima questão\n\n");
sleep(1.5);
    system("clear");

    printf("\t\t\t\tPonto de fulgor\n\n\t\tPonto de fulgor é a menor temperatura na qual o combustível libera vapor.\n\t\t\tSabendo disso, qual o ponto de fulgor do Óleo Mineral?\n\nA) Entre 160ºC e 180ºC\nB) Entre 220ºF e 240ºF\nC) Entre 30ºC e 50ºC\nD) Entre 220ºC e 240ºC\nE) Nenhuma das respostas acima\n\n");
    printf ("Resposta: ");
    scanf(" %c", &var4);
        if(var4=='d'){printf("\nVai que vai\n\n");}
    else{printf("\nNada disso meu bom\n\n");}
sleep(1.5);
    printf("Próxima questão\n\n");
sleep(1.5);
    system("clear");

    printf("\t\t\t\tDemulsibilidade\n\n\t\tQual a característica da demulsibilidade?\n\nA) A capacidade de misturar óleo e água\nB) A capacidade de dissolver água\nC) A capacidade de separar água e óleo\nD) A capacidade de absorver água\nE) Nenhuma das anteriores\n\n");
    printf ("Resposta: ");
    scanf(" %c", &var5);
        if(var5=='c'){printf("\nTa com tudo hein\n\n");}
        else{printf("\nErrou\n\n");}
sleep(1.5);
    printf("Última questão\n\n");
sleep(1.5);
    system("clear");

    printf("\t\t\t\tDemulsibilidade\n\n\t\tO que ocorrerá com a diminuição da demulsibilidade?\n\nA) O aumento da resistência dos componentes\nB) A higienização instantânea dos componentes\nC) A diminuição da vida útil do equipamento\nD) A expansão dos equipamentos\nE) Nenhuma das alternativas\n\n");
    printf ("Resposta: ");
    scanf(" %c", &var6);
        if(var6=='c'){printf("\n壮大\n\n");}
        else{printf("\nOh não\n\n");}
sleep(1.5);
    system("clear");
    
    printf("\n\t\t\t\t\tIsso é tudo pessoal");
}
