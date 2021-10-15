#include <stdio.h>
#define N 5

int captura();
int ordenacion();
int imprime();
int masalto();
int impresion();
int main ()
{
  int clave[N];
  char nombre[N][100];
  int est[2][N];
  captura (clave, nombre, est);
  ordenacion(nombre);
  imprime(clave,nombres,est)
  masalto(est)
  impresion(est)
  return 0;
}

int
captura (int clave[N], char nombre[N][100], int est[2][N])
{
  for (int i = 0; i < N; i++)
    {
      printf ("Cual es la clave del empleado ");
      scanf ("%d", &clave[i]);
      
      printf ("Cual es el nombre del empleado");
      scanf ("%c", &nombre[i][100]);
  
      printf ("Cual es la estatura del empleado");
      scanf ("%d", &est[1][N]);
     
      printf ("Cual es el sueldo del empleado");
      scanf ("%d", &est[2][N]);
    }

}
  int ordenacion(int est[2][N])
  int i,j,aux
  for(i=0;i<5;i++)
  {
     for(j=0;j<5;j++)
     {
         if(est[2][j] > est[2][j+1] )
         {
             aux = est[2][j];
             est[2][j] = est[2][j+1];
             est[2][j+1] = aux;
         }
     }
  }
  
  int imprime (int clave[N], char nombre[N][100], int est[2][N])
  {
      int i
      printf("Clave  Nombre  Estatura  Sueldo")
      for(i = 0; i < N; i ++)
      {
          printf("%d   %d    %d   %d", clave[i], nombre[i][100], est[1][i], est[2][i])
      }
  }
  
  int masalto(int est [2][N],int *p)
  {
  int m= int est[2][0]
  int i;
  for(i = 0; i < N ; i++)
  {
      if(est[2][i]> m)
      {
          m = arr[i];
          *p = i;
      }
  }
  return m;
  }
  
  int impresion(m,*p)
  {
      printf ("El empleado de mayor estatura tiene %d en la posicion %d", m, *p);
  }