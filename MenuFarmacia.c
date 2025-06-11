#include <stdio.h>
#include <string.h>
#define MAX_PRODUCTOS 100

struct Producto
{
    int id;
    char nombre[50];
    float precio;
};
// Función Eliminar
void eliminarProducto(struct Producto productos[], int *numProductos)
{
    int id;
    printf("Ingrese el ID del producto a eliminar: ");
    scanf("%d", &id);

    for (int i = 0; i < *numProductos; i++)
    {
        if (productos[i].id == id)
        {
            for (int j = i; j < *numProductos - 1; j++)
            {
                productos[j] = productos[j + 1];
            }
            (*numProductos)--;
            printf("🗑 Producto eliminado exitosamente.\n");
            return;
        }
    }

    printf("❌ Producto no encontrado.\n");
}

int main()
{
    struct Producto productos[MAX_PRODUCTOS];
    int numProductos = 0;
    int opcion;

    do
    {
        printf("\n|----------- MENÚ -----------|\n");
        printf("| 1. Alta producto           |\n");
        printf("| 2. Buscar producto         |\n");
        printf("| 3. Modificar producto      |\n");
        printf("| 4. Eliminar producto       |\n");
        printf("| 5. Salir                   |\n");
        printf("|----------------------------|\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            // darAlta(productos, &numProductos);
            printf("Función alta producto no implementada aún.\n");
            break;
        case 2:
            // buscarProducto(productos, numProductos);
            printf("Función buscar producto no implementada aún.\n");
            break;
        case 3:
            // modificarProducto(productos, numProductos);
            printf("Función modificar producto no implementada aún.\n");
            break;
        case 4:
            eliminarProducto(productos, &numProductos);
            // printf("Función eliminar producto no implementada aún.\n");
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