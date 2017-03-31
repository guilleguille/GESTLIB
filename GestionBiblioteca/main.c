#include <stdio.h>
#include <stdlib.h>

//Comentario



 void menuMantenimiento(){
    
    system("cls");
    
    int i,a;
    printf("\nMENU DE MANTENIMIENTO            \n");
    
    printf("%c",201);
    for(i = 0;i < 70;i++) printf("%c",205);
    printf("%c \n",187);
    
    printf("%c     1.-Incluir un nuevo ejemplar                                     %c\n",186,186);
    printf("%c                                                                      %c\n",186,186);
    printf("%c     2.-Eliminar un ejemplar                                          %c\n",186,186);
    printf("%c                                                                      %c\n",186,186);
    printf("%c     3.-Modificar los datos de un ejemplar                            %c\n",186,186);
    printf("%c                                                                      %c\n",186,186);
    printf("%c     4.-Prestar libro                                                 %c\n",186,186);
    printf("%c                                                                      %c\n",186,186);
    printf("%c     5.-Devolver libro                                                %c\n",186,186);
    printf("%c                                                                      %c\n",186,186);
    printf("%c     6.-Ordenar ejemplar (por clave)                                  %c\n",186,186);
    printf("%c                                                                      %c\n",186,186);
    printf("%c     7.-Ordenar ejemplares ascendentemente(por año de publicacion)    %c\n",186,186);
    printf("%c                                                                      %c\n",186,186);
    printf("%c     8.-Ordenar ejemplares descendentemente(por autor)                %c\n",186,186);
    printf("%c                                                                      %c\n",186,186);
    printf("%c     9.-Crear archivo de libros                                       %c\n",186,186);
    printf("%c                                                                      %c\n",186,186);
    printf("%c     10.-Crear archivo de articulos                                   %c\n",186,186);
    printf("%c                                                                      %c\n",186,186);
    printf("%c     0.-Volver al menu principal                                      %c\n",186,186);
    printf("%c                                                                      %c\n",186,186);
     
    
    printf("%c",200);
    for(i = 0;i < 70;i++) printf("%c",205);
    printf("%c \n",188);  
    
    scanf("%i",&a);
    
    OpcionMenuMantenimiento(a);

      }
      



int mostrarMenu(){
    
    int opcion;
    int i;
    
    system("cls");
    
    
    printf("%c",201);
    for(i = 0;i < 26;i++) printf("%c",205);
    printf("%c \n",187);
    
    printf("%c                          %c\n",186,186);
    printf("%c     1.-Mantenimiento     %c\n",186,186);
    printf("%c                          %c\n",186,186);
    printf("%c     2.-Informes          %c\n",186,186);
    printf("%c                          %c\n",186,186);
    printf("%c     3.-Importar datos    %c\n",186,186);
    printf("%c                          %c\n",186,186);
    printf("%c     0.-Salir             %c\n",186,186);
    printf("%c                          %c\n",186,186);
    
    printf("%c",200);
    for(i = 0;i < 26;i++) printf("%c",205);
    printf("%c \n",188);
    
    scanf("%i",&opcion);
    
    elegirOpcion(opcion);
}

int elegirOpcion(int a){
    
    switch(a){
    case 1:
         menuMantenimiento();
         //elegirOpcion(mostrarMenu());
    break;
    case 2 :
         printf("Adios"); 
        // elegirOpcion(mostrarMenu()); 
    break;
    case 3 :
         printf("Adios");
         //elegirOpcion(mostrarMenu());  
    break;
    case 0 :
         exit(0);
    break;
    default:
            printf("La opcion elegida no es valida");
            system("PAUSE>NULL");
            elegirOpcion(mostrarMenu());
    break;
    
}
    }

      
 int OpcionMenuMantenimiento(int a){
     
  switch(a){
              
    case 1:
         printf("caso1\n");
    
    break;
    
    case 2 :
         printf("caso2\n"); 
       
    break;
    
    case 3 :
         printf("caso3\n");
          
    break;

    case 4:
         printf("caso4\n");
    
    break;
    
    case 5 :
         printf("caso5\n"); 
       
    break;
    
    case 6 :
         printf("caso6\n");
          
    break;

    case 7:
         printf("caso7\n");
    
    break;
    
    case 8 :
         printf("caso8\n"); 
       
    break;
    
    case 9 :
         printf("caso9\n");
          
    break; 

    case 10 :
        printf("caso10\n");;
          
    break;
      
    case 0 :
         mostrarMenu();
    break;
    default:
            printf("La opcion elegida no es valida");
            system("PAUSE>NULL");
            elegirOpcion(mostrarMenu());
    break;
    
}
}

int main(int argc, char *argv[])
{
    system("cls");
    printf("Bienvenido a GESTBIB.. Pulse <Intro> para continuar\n"); 
    system("PAUSE>NULL");
    
    mostrarMenu();
    
    system("PAUSE>NULL");
    return 0;
}
