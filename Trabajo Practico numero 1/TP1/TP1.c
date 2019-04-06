#include <stdio.h>
#include <stdlib.h>
#include "TP1.h"
void menu(void){
    float n1=0, n2=0, factorialn1=0, factorialn2=0;
    int opc;
    char seguir ='s';
    do{
        printf("1. Ingrese el 1er operando.(A=%.1f)\n2. Ingrese el 2do operando.(B=%.1f)\n3. Calcular las operaciones\n4. Informar resultados.\n5. Salir.\nOpcion:",n1,n2);
        scanf("%d", &opc);
        factorialn1=factorizar(n1);
        factorialn2=factorizar(n2);
        switch (opc){
          case 1: printf("Ingrese el valor del primer operando:\n"); scanf("%f",&n1); break;
          case 2: printf("Ingrese el valor del segundo operando:\n"); scanf("%f",&n2); break;
          case 3: printf("\na)Calcular suma %.1f+%.1f=%.1f", n1,n2,sumar(n1,n2));
                printf("\nb)Calcular resta %.1f-%.1f=%.1f", n1,n2,restar(n1,n2));
                printf("\nc)Calcular multiplicacion %.1f+%.1f=%.1f", n1,n2,multiplicar(n1,n2));
                printf("\nd)Calcular division %.1f+%.1f=%.1f", n1,n2,division(n1,n2));

                printf("\ne)Calcular factoreo A=%.1f=%.1f", n1,factorialn1);
                printf("\nf)Calcular factoreo B=%.1f=%.1f\n\n", n2,factorialn2);system("pause");break;
          case 4: printf("\na) El resultado de %.1f+%.1f es:%.1f ", n1,n2,sumar(n1,n2));
                printf("\nb) El resultado de %.1f-%.1f es:%.1f ", n1,n2,restar(n1,n2));
                printf("\nc) El resultado de %.1f*%.1f es:%.1f ", n1,n2,multiplicar(n1,n2));
                printf("\nd) El resultado de %.1f/%.1f es:%.1f",n1,n2,division(n1,n2));
                printf("\ne) El factorial de %.1f=%.1f",n1,factorialn1);
                printf("\nf) El factorial de %.1f=%.1f\n\n", n2,factorialn2);
                system("pause");
                break;
          case 5: printf("ADIOS!!!!!\n");
                system("pause");
                seguir='n';
                break;
        }


        system("cls");

}while(seguir == 's');

}
float sumar(float n1, float n2)
            {
    float suma;
    suma=n1 + n2;
    return suma;
}
float restar(float n1, float n2)
{
    float resta;
    resta=n1-n2;
    return resta;
}
float multiplicar(float n1, float n2){
    float mult;
    mult=n1*n2;
    return mult;}

float division(float n1, float n2){
    float div;
    if(n1==0 || n2==0){
        return printf("\nNo se puede dividir por cero.");
    }
    else{
    div=n1/n2;
    return div;}
}
long factorizar(float n1){
    if(n1<=1){
        return 1;
    }
    else {

        return (n1*factorizar(n1-1));
    }

}

