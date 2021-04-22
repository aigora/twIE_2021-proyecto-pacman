#include <stdio.h>
#include <stdlib.h>


//Aqui definimos las funciones de los dos modos de juego

void mododejuego1();
void mododejuego2();

//definimos la funcion que genera el mapa en pantalla

void imprimir_mapa();

//aqui definimos la matriz mapa

char mapa[20][31]={
    "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
    "X           XXXXX           X"
    "X XXX XXXXX XXXXX XXXXX XXX X"
    "X XXX XXXXX XXXXX XXXXX XXX X"
    "X                           X"
    "X XXX XX XXXXXXXXXXX XX XXX X"
    "X     XX     XXX     XX     X"
    "X XXX XXXXXX XXX XXXXXX XXX X"
    "X XXX XX             XX XXX X"
    "      XX XXXXXXXXXXX XX      "
    "X XXX XX XXXXXXXXXXX XX XXX X"
    "X XXX XX             XX XXX X"
    "X XXX XXXXXX XXX XXXXXX XXX X"
    "X     XX     XXX     XX     X"
    "X XXX XX XXXXXXXXXXX XX XXX X"
    "X                           X"
    "X XXX XXXXX XXXXX XXXXX XXX X"
    "X XXX XXXXX XXXXX XXXXX XXX X"
    "X           XXXXX           X"
    "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
};

//estructura en la que se generaran las puntuaciones

typedef struct{
    char nombre[10];
    int puntos;
}puntuacion;

//funcion main

int main()
{
    int seleccion;

    puntuacion jugador1;

    FILE *fichero_puntuacion;


    //Aqui el menu nos da a elegir entre los 3 modos de juego

    printf("***************************************************************\n\n");
    printf("                   Eliga el modo de juego                    \n\n\n");
    printf("   Escriba el numero del modo de juego y seguido su nombre: 1 manuel\n\n");
    printf("  -Para modo de juego 1 (Clasico) escriba 1\n\n");
    printf("  -Para modo de juego 2 (Caza a los fantasmas) escriba 2\n\n");
    printf("  -Para cerrar programa pulse cualquier otra tecla e intro\n\n");
    printf("***************************************************************\n");
    scanf("%i %s",&seleccion, &jugador1.nombre);

    //Aqui se desarrolla el bucle del menú

    switch (seleccion)
    {
        case 1:
        mododejuego1();
        break;
    case 2:
        mododejuego2();
        break;
    default: return 0;
        break;
    }

    fichero_puntuacion = fopen("Puntuacion Jugador1.txt","w");
    fprintf(fichero_puntuacion,"Puntuaciones Jugador 1:\n");
    fprintf(fichero_puntuacion,"Nombre: %s\n", jugador1.nombre);
    fprintf(fichero_puntuacion,"Puntuacion: %i\n", jugador1.puntos);
    fclose(fichero_puntuacion);

    return 0;
}

//desarrollo de las funciones principales


void mododejuego1()
{
    imprimir_mapa();

}

void mododejuego2()
{

}

void imprimir_mapa()
{
    int fila, columna;
    int maximofilas = 20;
    int maximocolumnas = 31;

    for(fila=0 ; fila<maximofilas ; fila++){
        for(columna=0 ; columna<maximocolumnas ; columna++)
            printf("%c\t", mapa[fila][columna]);

        printf("\n");
    }
}

