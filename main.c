#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (void){

    int edad, cantidadPersonas, rangoEdad;
    char genero;
    char nombre[20]; 
    char apellido[20];
    char rangoEdadString[20];

    printf("\tMenú de inicio\n\n");

    printf("Ingresa la cantidad de personas: ");
    scanf("%d", &cantidadPersonas);

    while (cantidadPersonas > 0){

        printf("\n\nIngresa tu nombre:\n");
        scanf("%s", &nombre);
        printf("Ingresa tu apellido:\n");
        scanf("%s", &apellido);
        printf("Ingresa tu edad:\n");
        scanf("%d", &edad);
        fflush(stdin);
        printf("Ingresa tu género:\n");
        scanf("%c", &genero);

        //if's para calcular el rango de edad.
        if (edad > 60){

            rangoEdad = 1; //1 = anciano/anciano        
        }
        else{
            if (edad <= 13){
                
                rangoEdad = 2; // 2 = niño/niña.
            }
            else{
                if (edad <= 20){

                    rangoEdad = 3; //3 = adolescente/¿adolescenta? jajaja
                }
                else{

                    rangoEdad = 4; //4 = adulto/adulta
                }
            }
        }

        //comprobar si es hombre o mujer y asignar un rango de edad correspondiente
        switch (rangoEdad)
        {
        case 1:
            if (genero == 'f' || genero == 'F')
                strncpy(rangoEdadString, "Anciana", 20);
            else if (genero == 'm' || genero == 'M')
                strncpy(rangoEdadString, "Anciano", 20);
            break;
        case 2:
            if (genero == 'f' || genero == 'F')
                strncpy(rangoEdadString, "Niña", 20);
            else if (genero == 'm' || genero == 'M')
                strncpy(rangoEdadString, "Niño", 20);
            break;       
        case 3:
            if (genero == 'f' || genero == 'F')
                strncpy(rangoEdadString, "¿Adolescenta?", 20);
            else if (genero == 'm' || genero == 'M')
                strncpy(rangoEdadString, "Adolescente", 20);
            break;
        case 4:
            if (genero == 'f' || genero == 'F')
                strncpy(rangoEdadString, "Adulta", 20);
            else if (genero == 'm' || genero == 'M')
                strncpy(rangoEdadString, "Adulto", 20);
            break;
        }

        printf("\n\n| %s | %s | %c | %d | %s |\n", nombre, apellido, genero, edad, rangoEdadString);
        --cantidadPersonas;
    }

    return 0;
}