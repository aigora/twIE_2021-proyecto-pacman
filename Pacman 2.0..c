#include <stdio.h>

//Aqui definimos las funciones de los tres modos de juego

int mododejuego1(int a, int b);
int mododejuego2(int c, int d);
int mododejuego3(int e, int f);


int main()
{
    int seleccion;

    //Aqui el menu nos da a elegir entre los 3 modos de juego

    printf("***************************************************************\n\n");
    printf("                   Eliga el modo de juego                    \n\n");
    printf("  -Para modo de juego 1 pulse 1 e intro\n");
    printf("  -Para modo de juego 2 pulse 2 e intro\n");
    printf("  -Para modo de juego 3 pulse 3 e intro\n");
    printf("  -Para cerrar programa pulse cualquier otra tecla e intro\n\n");
    printf("***************************************************************\n");

    scanf("%i",&seleccion);

    //Aqui se desarrolla el bucle del menú

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

    default: return 0;
        break;
    }

}

