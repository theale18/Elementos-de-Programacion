#include <stdio.h>
#include <math.h>

void GENERAR( float[], int );
void CALCULAR( float[], float[], int );
/* falta el minimo */
int MAYOR( float[], int, int );
void MOSTRAR( float[], float[], float[], int, int );

int main(){
  int cant;
  float VA[10], VB[10], VC[10];
  GENERARA( VA, 10 );
  RAIZ( VA, VB, 10 );
  CALCULAR( VA, VB, VC, 10 );
  /* FALTA EL MINIMO */
  cant = MAYOR( VC, 10, 10 );
  MOSTRAR( VA, VB, VC );
  return(0);
  }
/**________________________________________________________________
          1)  **/
void GENERAR( flaot v1[], int val ){              
  int i;
  for( i=o; i<val; i++ ){
    printf("Ingrese Valor Real: %d ", i+1);
    scanf("%f", &v[i]);
  }
}
/*_____________________________________________________________________
          2)  */
void RAIZ( float v1[], flaot v2[], int val ){     
  int i;
  for( i=0; i<val; i++ ){
    v2[i] = sqrt(v[i]);
  }
}
/*_____________________________________________________________________
          3)  */
void CALCULAR( float v1[], float v2[], float v3[], int val ){
  int i;
  for( i=0; i<val; i++ ){
    v3[i] = v1[i] - v2[i];
  }
}
/*_____________________________________________________________________
          5)  */
int MAYOR( float v3[], int val, int num ){
  int i, cant=0;
  for( i=0; i<val; i++ ){
    if( v3[i]>num ){
      cant++;
    }
  }
  return(cant);
}
/*_____________________________________________________________________
          6)  */
void MOSTRAR( float v2[], float v2[], float v3[], int cant, int val ){
  int i;
  printf("\n 1)VA     2)VB      3)VC");
  for( i=0; i<val; i++){
    printf("\n %.2f     %.3f      %.2f", v1[i], v2[i], v3[i]);
  }
  printf("\n\n 4)");
  printf("\n 5) Hay %d Numeros Mayores a 10", cant);
}
