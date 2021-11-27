#include <stdio.h>
#include <conio.h>
#include <unistd.h>     //sleep
#include <stdlib.h>     //rand
#include <string.h>     //srand
#include <time.h>       //time

int main()
{
    int a[10];
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
    printf("%i, %i, %i, %i, %i, %i", a[0], a[1], a[2], a[3], a[4], a[5]);
}
