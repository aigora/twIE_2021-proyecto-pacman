// Aqui empezara el código
#include<windows.h>
#include <stdio.h>
#include<conio.h>
int mododejuego1(int a, int b);
int mododejuego3(int c, int d);
int mododejuego2(int e, int f);
//Aqui definimos las funciones de los tres modos de juego

void main()
{
    int seleccion;

    printf("*********************************************\n");

    printf("Eliga el modo de juego:\n");
    printf("\n");
    printf("\n");
    printf("-Para modo de juego 1 pulse 1 e intro\n");
    printf("\n");
    printf("-Para modo de juego 2 pulse 2 e intro\n");
    printf("\n");
    printf("-Para modo de juego 3 pulse 3 e intro\n");
    printf("\n");
    printf("-Para cerrar probrama pulse cualquier otra tecla e intro\n");

    scanf("%i",&seleccion);

    switch (seleccion)
    {
        case 1:
        mododejuego1
        break;
    case 2:
        mododejuego2;
        break;
    case 3:
        mododejuego3;
        break;

    default:
        break;


    }


}

