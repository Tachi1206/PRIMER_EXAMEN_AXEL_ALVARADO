#include <stdio.h>

/* 
PRIMER EXAMEN AXEL ALVARADO MUÑOZ 
CODIGO PARA COMPRAR ENTRADAS PARA CONCIERTO DE GRUPO FIRME 
ENTRADAS EXPERECIABAC ,VIP O GENERAL
*/

// DECLARACION DE LAS VARIABLES 
int CategoriaSector, cantidad;
float precioUnitario, totalVenta;
char nombre[10], telefono[8], correo[20];
int opcion;

// DECLARACION DE LAS CATEGORIAS Y TOTALES 
int CantExb = 0, CantVIP = 0, CantGen = 0;
float totalExb = 0, totalVIP = 0, totalGen = 0;

//EMPIEZA EL "DO"
int main() {
    do {
        printf("\n Bienvenido a Smart tikect  \n");
        printf("\n VIVE LA EXPERIENCIA DEL REGIONAL \n");
        printf("\n GRUPO FIRME \n");
        printf("\n--- POR FAVOR INGRESE SUS DATOS  ---\n");

        // SOLICITUD DE LOS DATOS DEL COMPRADOR
        printf("Nombre del comprador: ");
        scanf("%s", nombre);

        printf("Telefono del comprador: ");
        scanf("%s", telefono);

        printf("Correo del comprador: ");
        scanf("%s", correo);

        // SE MUESTRAN LAS OPCIONES DE LA CATEGORIA
        printf("\nSeleccione la categoria:\n");
        printf("1. EXPERENCIA BAC ($100)\n");
        printf("2. VIP ($70)\n");
        printf("3. General ($50)\n");
        printf("Selecciona una Categoria: ");
        scanf("%d", &CategoriaSector);

        // SE ASIGNA EL PRECIO SEGUN LA CATEGORA QUE HAYA SELECCIONADO
        if (CategoriaSector < 1 || CategoriaSector > 3) {
            printf("Categoria invalida. Intente nuevamente.\n");
            continue; // vuelve al inicio del ciclo
        }

        if (CategoriaSector == 1) {
            precioUnitario = 100;
        } else if (CategoriaSector == 2) {
            precioUnitario = 70;
        } else if (CategoriaSector == 3) {
            precioUnitario = 50;
        }

        // SE PIDEN LAS CANTIDADES DE LAS ENTRADAS
        printf("Cantidad de entradas (5 entradas por persona maximo): ");
        scanf("%d", &cantidad);

        if (cantidad < 1 || cantidad > 5) {
            printf("Cantidad invalida. Solo se permiten entre 1 y 5 entradas.\n");
            continue; // vuelve al inicio del ciclo
        }

        // SE CALCULA EL PRECIO TOTAL
        totalVenta = precioUnitario * cantidad;

        // SE VA A MOSTRAR EL RESUMEN DE LA VENTA 
        printf("\n--- RESUMEN DE LA VENTA ---\n");
        printf("Nombre: %s\n", nombre);
        printf("Telefono: %s\n", telefono);
        printf("Correo: %s\n", correo);
        printf("Categoria: %d\n", CategoriaSector);
        printf("Cantidad: %d\n", cantidad);
        printf("Precio unitario: $%.2f\n", precioUnitario);
        printf("Total a pagar: $%.2f\n", totalVenta);

        switch (CategoriaSector) {
            case 1:
                CantExb += cantidad;
                totalExb += totalVenta;
                break;
            case 2:
                CantVIP += cantidad;
                totalVIP += totalVenta;
                break;
            case 3:
                CantGen += cantidad;
                totalGen += totalVenta;
                break;
        }

        // PREGUNTA SI DESEA CONTINUAR
        printf("\n¿Desea ingresar otra venta? (1 = Si, 0 = No): ");
        scanf("%d", &opcion);

    } while (opcion == 1);// hara un ciclo mientras elija la opcion

    // DATOS FINALES
    printf("\n	DATOS FINALES \n ");
    
    //Se muestra la cantidad de entradas compradas anteriormente 
    printf("EXPERIENCIA BAC: %d entradas - Total: $%.2f\n", CantExb, totalExb);
    printf("VIP: %d entradas - Total: $%.2f\n", CantVIP, totalVIP);
    printf("General: %d entradas - Total: $%.2f\n", CantGen, totalGen);
    printf("GRACIAS POR SU COMPRA\n");
    printf("DISFRUTE EL CONCIERTO\n");

    return 0;
}

