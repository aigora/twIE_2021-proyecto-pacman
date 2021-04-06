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
    system("COLOR B0");
    printf("\033[0;31m");
    printf("***************************************************************\n");
    printf("\033[0;36m");
    printf("*");
    printf("\033[0;35m");
    printf("                                                             *\n");
    printf("\033[0;36m");
    printf("*");
    printf("\033[4;32m");
    printf("                   Eliga el modo de juego                    ");
    printf("\033[0;35m");
    printf("*\n");
    printf("\033[0;36m");
    printf("*");
    printf("\033[0;35m");
    printf("                                                             *\n");
    printf("\033[0;36m");
    printf("*");
    printf("\033[0;35m");
    printf("                                                             *\n");
    printf("\033[0;36m");
    printf("*");
    printf("\033[1;35m");
    printf("  -Para modo de juego 1 pulse 1 e intro");
    printf("\033[0;35m");
    printf("                      *\n");
    printf("\033[0;36m");
    printf("*");
    printf("\033[0;35m");
    printf("                                                             *\n");
    printf("\033[0;36m");
    printf("*");
    printf("\033[1;33m");
    printf("  -Para modo de juego 2 pulse 2 e intro");
    printf("\033[0;35m");
    printf("                      *\n");
    printf("\033[0;36m");
    printf("*");
    printf("\033[0;35m");
    printf("                                                             *\n");
    printf("\033[0;36m");
    printf("*");
    printf("\033[1;36 m");
    printf("  -Para modo de juego 3 pulse 3 e intro");
    printf("\033[0;35m");
    printf("                      *\n");
    printf("\033[0;36m");
    printf("*");
    printf("\033[0;35m");
    printf("                                                             *\n");
    printf("\033[0;36m");
    printf("*");
    printf("\033[0;37m");
    printf("  -Para cerrar probrama pulse cualquier otra tecla e intro");
    printf("\033[0;35m");
    printf("   *\n");
    printf("\033[0;36m");
    printf("*");
    printf("\033[0;35m");
    printf("                                                             *\n");
    printf("\033[0;36m");
    printf("*");
    printf("\033[0;35m");
    printf("                                                             *\n");
    printf("\033[0;32m");
    printf("***************************************************************\n");
    printf("\033[0m");

    scanf("%i",&seleccion);

    //Aqui el menu nos da a elegir entre los 3 modos de juego con un bucle

    switch (seleccion)
    {
        case 1:
        mododejuego1;
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

