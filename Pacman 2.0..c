#include <stdio.h>
#include <stdlib.h>

//Aqui definimos las funciones de los dos modos de juego

int mododejuego1(int a, int b);
int mododejuego2(int c, int d);

//funcion que genera el mapa en pantalla

void imprimir_mapa();

//estructura en la que se generaran las puntuaciones

typedef struct{
    char nombre[10];
    int puntos;
}puntuacion;


int main()
{
    int seleccion;

    puntuacion jugador1;

    FILE* fichero_puntuacion;


    //Aqui el menu nos da a elegir entre los 3 modos de juego

    printf("***************************************************************\n\n");
    printf("                   Eliga el modo de juego                    \n\n\n");
    printf("   Escriba el numero del modo de juego y seguido su nombre: 1 manuel\n\n");
    printf("  -Para modo de juego 1 (Clasico) escriba 1\n\n");
    printf("  -Para modo de juego 2 (Caza a los fantasmas) escriba 2\n\n");
    printf("  -Para cerrar programa pulse cualquier otra tecla e intro\n\n");
    printf("***************************************************************\n");

    scanf("%i %s",&seleccion, jugador1.nombre);

    //Aqui se desarrolla el bucle del menú

    switch (seleccion)
    {
        case 1:
        mododejuego1;
        break;
    case 2:
        mododejuego2;
        break;
    default: return 0;
        break;
    }

    fichero_puntuacion = fopen("Puntuacion Jugador1.txt","wt");
    fputs(jugador1.puntos, fichero_puntuacion);
    fputc(jugador1.nombre, fichero_puntuacion);
    fclose(fichero_puntuacion);

    return 0;
}

//desarrollo de las funciones principales


int mododejuego1(a, b)
{

}

int mododejuego2(c, d)
{

}

void imprimir_mapa()
{

}

