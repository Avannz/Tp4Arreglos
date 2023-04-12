#include <stdio.h>
#include <stdlib.h>

int cargarAr(int arreglo[]);
int cargaPrint(int arreglo[]);

int main()
{
    int arreglo[8];
    int validos;

    validos = cargaPrint(arreglo);
    printf("\n\nValidos: %d", validos);
}

int cargarAr(int arreglo[])
{
    int validos = 0;
    int i;
    char opc = 's';
    int flag = 0;
    for(i = 0; i < 8; i++)
    {
        while(opc == 's')
        {
            if(flag == 0)
            {
                printf("\nIngrese un numero entero para cargar al arreglo...\n");
                fflush(stdin);
                scanf("%d", &arreglo[i]);
                flag = 1;
            }
            else
            {
                printf("\nIngrese otro numero entero...\n");
                fflush(stdin);
                scanf("%d", &arreglo[i]);
            }

            i++;
            validos = validos + 1;

            if(i<7)
            {
                printf("\n\nIngrese 's' para seguir cargando numeros...\n");
                fflush(stdin);
                scanf("%c", &opc);
            }
            else
            {
                printf("\n\nNumero maximo de valores alcanzado!\n");
                opc = 'n';
            }
        }
        i++;
    }

    return validos;

}

int cargaPrint(int arreglo[]){
    int validos = cargarAr(arreglo);
    int i;
    printf("\nTu arreglo es:\n\n");
    for(i = 0; i<validos; i++){
        printf(" | %d | ", arreglo[i]);
    }

    return validos;
}

int sumaAr(int arreglo[], int cant){

}
