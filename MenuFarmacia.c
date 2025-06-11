#include <stdio.h>
#include "productos.h"

 void modificarProducto(struct Producto productos[], int numProductos) {
    int id;
    printf("Ingrese el ID del producto a modificar: ");
    scanf("%d", &id);

    for (int i = 0; i < numProductos; i++) {
        if (productos[i].id == id) {
            printf("Nuevo nombre: ");
            scanf(" %[^\n]", productos[i].nombre);
            printf("Nuevo precio: ");
            scanf("%f", &productos[i].precio);
            printf("✏️ Producto modificado exitosamente.\n");
            return;
        }
    }

    printf("❌ Producto no encontrado.\n");
}

int main() {
    struct Producto productos[MAX_PRODUCTOS];
    int numProductos = 0;
    int opcion;

   

    do {
        printf("\n|----------- MENÚ -----------|\n");
        printf("| 1. Alta producto           |\n");
        printf("| 2. Buscar producto         |\n");
        printf("| 3. Modificar producto      |\n");
        printf("| 4. Eliminar producto       |\n");
        printf("| 5. Salir                   |\n");
        printf("|----------------------------|\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                // darAlta(productos, &numProductos);
                printf("Función alta producto no implementada aún.\n");
                break;
            case 2:
                // buscarProducto(productos, numProductos);
                printf("Función buscar producto no implementada aún.\n");
                break;
            case 3:
                modificarProducto(productos, numProductos);
                //printf("Función modificar producto no implementada aún.\n");
                break;
            case 4:
                // eliminarProducto(productos, &numProductos);
                printf("Función eliminar producto no implementada aún.\n");
                break;
            case 5:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción inválida.\n");
        }
    } while (opcion != 5);

    return 0;
}