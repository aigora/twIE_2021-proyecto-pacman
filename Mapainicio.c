#include <stdio.h>
#include <stdlib.h>

void imprimir_mapa();

//aqui definimos la matriz mapa

char mapa[25][31]={
    "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
    "X                           X"
    "X           XXXXX           X"
    "X                           X"
    "X XXX XX XXXXXXXXXXX XX XXX X"
    "X                           X"
    "X     XX     XXX     XX     X"
    "X                           X"
    "X XXX XXXXXX XXX XXXXXX XXX X"
    "X                           X"
    "X XXX XX             XX XXX X"
    "X                           X"
    "X XXX XX XXXXXXXXXXX XX XXX X"
    "X                           X"
    "X XXX XX             XX XXX X"
    "X                           X"
    "X XXX XXXXXX XXX XXXXXX XXX X"
    "X                           X"
    "X     XX     XXX     XX     X"
    "X                           X"
    "X XXX XX XXXXXXXXXXX XX XXX X"
    "X             C             X"
    "X           XXXXX           X"
    "X                           X"
    "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
};

int main()
{
    imprimir_mapa();

    return 0;

}

void imprimir_mapa()
{
    int fila, columna;

    for (fila=0; fila<=25 ; fila++)
    {
        for (columna=0 ; columna<=31 ; columna++)
            printf("%c",mapa[fila][columna]);

        printf("\n");
    }
}
