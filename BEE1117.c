#include <stdio.h>
int main(){

    int notas_validas=0;
    float n1, n2, media=0;
    do{
        scanf("%f", &n1);
        if (n1>=0 && n1<=10 && notas_validas==0)
        {
            notas_validas++;
        }else if(n1<0 || n1>10){
            printf("nota invalida\n");
        }
    }while (notas_validas==0);

    do{
        scanf("%f", &n2);
        if (n2>=0 && n2<=10 && notas_validas==1)
        {
            notas_validas++;
        }else if(n2<0 || n2>10){
            printf("nota invalida\n");
        } 
    }while (notas_validas==1);   
    media=(n1+n2)/2;
    printf("media = %.2f\n", media);
    return 0;
}
