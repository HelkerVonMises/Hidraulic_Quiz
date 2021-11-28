#include <stdio.h>
#include <conio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

char ichi ();
char ni();
char san();
char yon();
char go();
char roku();

    int main(){
        
    char var1, var2, var3, var4, var5, var6;
    int a[10];
    
    printf("\t\tBem vindo ao quiz lendário sobre hidráulica versão Beta 1.0\n");
        sleep(2);
    printf("\t\t\tO tema do quiz é sobre fluídos hidráulicos\n");
        sleep(2);
    printf("\t\t\t\t\tBoa sorte :)\n\n");
        sleep(2);
    system("clear");
    srand(time(NULL));
        a[0]=rand()%6;
    p1:
        a[1]=rand()%6;   
    if(a[1]==a[0]){
        goto p1;
    }         
    p2:
        a[2]=rand()%6;
    if(a[2]==a[1] || a[2]==a[0]){
        goto p2;
    }
    p3:
        a[3]=rand()%6;
    if(a[3]==a[2] || a[3]==a[1] || a[3]==a[0]){
        goto p3;
    }
    p4:
        a[4]=rand()%6;
    if(a[4]==a[3] || a[4]==a[2] || a[4]==a[1] || a[4]==a[0]){
        goto p4;
    }
    p5:
        a[5]=rand()%6;
    if(a[5]==a[4] || a[5]==a[3] || a[5]==a[2] || a[5]==a[1] || a[5]==a[0]){
        goto p5;
    }
    a[0]++, a[1]++, a[2]++, a[3]++, a[4]++, a[5]++;
    switch(a[0]){
        case 1:
    ichi();
        break;
        case 2:
    ni();
        break;
        case 3:
    san();
        break;
        case 4:
    yon();
        break;
        case 5:
    go();
        break;
        case 6:
    roku();
        break;
    }
        switch(a[1]){
        case 1:
    ichi();
        break;
        case 2:
    ni();
        break;
        case 3:
    san();
        break;
        case 4:
    yon();
        break;
        case 5:
    go();
        break;
        case 6:
    roku();
        break;
    }
        switch(a[2]){
        case 1:
    ichi();
        break;
        case 2:
    ni();
        break;
        case 3:
    san();
        break;
        case 4:
    yon();
        break;
        case 5:
    go();
        break;
        case 6:
    roku();
        break;
    }
        switch(a[3]){
        case 1:
    ichi();
        break;
        case 2:
    ni();
        break;
        case 3:
    san();
        break;
        case 4:
    yon();
        break;
        case 5:
    go();
        break;
        case 6:
    roku();
        break;
    }
        switch(a[4]){
        case 1:
    ichi();
        break;
        case 2:
    ni();
        break;
        case 3:
    san();
        break;
        case 4:
    yon();
        break;
        case 5:
    go();
        break;
        case 6:
    roku();
        break;
    }
        switch(a[5]){
        case 1:
    ichi();
        break;
        case 2:
    ni();
        break;
        case 3:
    san();
        break;
        case 4:
    yon();
        break;
        case 5:
    go();
        break;
        case 6:
    roku();
        break;
    }
char ichi ();
    printf ("\n\nResposta: ");
    fflush(stdin);
    scanf(" %c", &var1);
    if(var1=='c')
    {printf("Isso ai!");}
        else{goto fim;}
char ni ();
    printf ("\n\nResposta: ");
    fflush(stdin);
    scanf(" %c", &var2);
    if(var2=='a'){
        printf("Cê ta doido");
    }
        else{
            goto fim;
        }
char san ();
    printf ("\n\nResposta: ");
    fflush(stdin);
    scanf(" %c", &var3);
    if(var3=='e'){
        printf("Brabo");
    }
        else{
            goto fim;
        }
char yon ();
    printf ("\n\nResposta: ");
    fflush(stdin);
    scanf(" %c", &var4);
    if(var4=='d'){
        printf("Vai que vai");
    }
        else{
            goto fim;
        }
char go ();
    printf ("\n\nResposta: ");
    fflush(stdin);
    scanf(" %c", &var5);
    system("pause");
    if(var5=='c'){
        printf("Ta com tudo hein");
    }
        else{
            goto fim;
        }
char roku ();
    printf ("\n\nResposta: ");
    fflush(stdin);
    scanf(" %c", &var6);
    if(var6=='c'){
        printf("壮大");
    }
        else{
            goto fim;
        }
    fim:
    printf("\nGame over");
}

char ichi (){
    printf("\t\t\t\tViscosidade\n\t\tUma das funções do óleo com menor viscosidade no sistema é:\n\nA) Desgastar as peças do sistema\nB) Dificultar o escoamento\nC) Lubrificar todas as peças do sistema de forma rápida e uniforme\nD) Demandar maior manutenção\nE) Gerar maior esforço do motor\n\n");
}
char ni (){
    printf("\t\t\t\tPropriedades do óleo\n\n\t\tA textura do óleo é importante para o sistema?\n\nA) Sim, pois o óleo deve gerar uma película protetora no sistema\nB) Não, pois o óleo atrapalha o sistema\nC) Sim, pois o óleo deve gerar uma resistência no motor\nD) Não é importante para o sistema\nE) Nenhuma das alternativas acima\n\n");
}
char san (){
    printf("\t\t\t\tComposição do óleo\n\n\t\tQuais são as três bases do Óleo Mineral?\n\nA) Parafínico, Graxante e Misto\nB) Sintético, Vegetal e Misto\nC) Sintético, Naftênico e Vegetal\nD) Sintético, Naftênico e Misto\nE) Parafínico, Naftênico e Misto\n\n");
}
char yon (){
    printf("\t\t\t\tPonto de fulgor\n\n\t\tPonto de fulgor é a menor temperatura na qual o combustível libera vapor.\n\t\t\tSabendo disso, qual o ponto de fulgor do Óleo Mineral?\n\nA) Entre 160ºC e 180ºC\nB) Entre 220ºF e 240ºF\nC) Entre 30ºC e 50ºC\nD) Entre 220ºC e 240ºC\nE) Nenhuma das respostas acima\n\n");
}
char go (){
    printf("\t\t\t\tDemulsibilidade\n\n\t\tQual a característica da demulsibilidade?\n\nA) A capacidade de misturar óleo e água\nB) A capacidade de dissolver água\nC) A capacidade de separar água e óleo\nD) A capacidade de absorver água\nE) Nenhuma das anteriores\n\n");
}
char roku (){
    printf("\t\t\t\tDemulsibilidade\n\n\t\tO que ocorrerá com a diminuição da demulsibilidade?\n\nA) O aumento da resistência dos componentes\nB) A higienização instantânea dos componentes\nC) A diminuição da vida útil do equipamento\nD) A expansão dos equipamentos\nE) Nenhuma das alternativas\n\n");
}
