#include <stdio.h>
#include <conio.h>
#include <unistd.h>     //comando sleep
#include <stdlib.h>     //comando clear
#include <time.h>

char ichi ();
char ni();
char san();
char yon();
char go();
char roku();

    int main(){
        
    char c[6];
    int a[10];
    
    printf("\t\tBem vindo ao quiz lendário sobre hidráulica versão Beta 1.0\n");
        sleep(2);
    printf("\t\t\tO tema do quiz é sobre fluídos hidráulicos\n");
        sleep(2);
    printf("\t\t\t\t\tBoa sorte :)\n\n");
        sleep(2);

    srand(time(NULL));
        a[0]=rand()%6;
    p1:
        a[1]=rand()%6;
    p2:
        a[2]=rand()%6;
    p3:
        a[3]=rand()%6;
    p4:
        a[4]=rand()%6;
    p5:
        a[5]=rand()%6;

    if(a[1]==a[0]){
        goto p1;
    }
    if(a[2]==a[1] || a[2]==a[0]){
        goto p2;
    }
    if(a[3]==a[2] || a[3]==a[1] || a[3]==a[0]){
        goto p3;
    }
    if(a[4]==a[3] || a[4]==a[2] || a[4]==a[1] || a[4]==a[0]){
        goto p4;
    }
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
    scanf ("%c", c);
        if(c[0]=='c'){
        printf("Isso ai!");
        }
        else{
            goto fim;
        }
    char ni ();
    scanf("%s", c);
    if(c[1]=='a'){
        printf("Isso ai!");
    }
        else{
            goto fim;
        }
    char san ();
    scanf("%s", c);
    if(c[2]=='a'){
        printf("Isso ai!");
    }
        else{
            goto fim;
        }
    char yon ();
    scanf("%s", c);
    if(c[3]=='a'){
        printf("Isso ai!");
    }
        else{
            goto fim;
        }
    char go ();
    scanf("%s", c);
    if(c[4]=='a'){
        printf("Isso ai!");
    }
        else{
            goto fim;
        }
    char roku ();
    scanf("%s", c);
    if(c[5]=='a'){
        printf("Isso ai!");
    }
        else{
            goto fim;
        }
    fim:
    printf("Não foi dessa vez");
}

char ichi (){
    printf("\t\t\t\t\tViscosidade\n\t\tUma das funções do óleo com menor viscosidade no sistema é:\n\nA) Desgastar as peças do sistema\nB) Dificultar o escoamento\nC) Lubrificar todas as peças do sistema de forma rápida e uniforme\nD) Demandar maior manutenção\nE) Gerar maior esforço do motor\n\nResposta: \n\n");
    }
char ni (){
    printf("\t\t\t\t\tPropriedades do óleo\n");
}
char san (){
    printf("\n");
}
char yon (){
    printf("\n");
}
char go (){
    printf("\n");
}
char roku (){
    printf("\n");
}
