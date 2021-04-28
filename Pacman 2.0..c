#include <stdio.h>
#include <stdlib.h>

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_RIGHT 77
#define KEY_LEFT 75


//Aqui definimos las funciones de los dos modos de juego

void mododejuego1();
void mododejuego2();

//funciones de movimiento

void movimiento_pacman();
void puntos_modo1();
void colision_fantasma();
void puntos_modo2();
void colisionmapa();

//definimos la funcion que genera el mapa en pantalla

void imprimir_mapa();

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
    int maximofilas = 10;
    int maximocolumnas = 14;
    char mapa[10][14]={
    "|===========|",
    "|...F.......|",
    "|.====.===..|",
    "|.====.===..|",
    "|.====.===..|",
    "|.====.===..|",
    "|.====.===..|",
    "|.....F.....|",
    "|.===.=====.|",
    "|===========|"
};


    for(fila=0 ; fila<maximofilas ; fila++){
            for(columna=0 ; columna<maximocolumnas ; columna++)
            printf("%c\t", mapa[fila][columna]);

        printf("\n");

}
}




