#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Num_Sensores 3
#define Num_lecturas 5
float Sensor1[5] = {23.1, 23.5, 24.0, 22.8, 23.9};
float Sensor2[5] = {25.0, 25.1, 24.9, 25.2, 25.3};
float Sensor3[5] = {21.5, 21.8, 22.0, 21.9, 22.1};
float Datos[Num_lecturas * Num_Sensores];
float promedio;
float *Sensor;

void llenarLecturas(float *datos, float *sensor, int sensor_index);
float calcularPromedio(float *Datos, int Sensor_Index, int Columnas);
void ImprimirDatos(float *datos);

int main()
{

    printf("Hola mundo");
    //srand(time(NULL));
    int i;
    float promedio;
        llenarLecturas(Datos,Sensor1, 0);
        llenarLecturas(Datos,Sensor2, 1);
        llenarLecturas(Datos,Sensor3, 2);
        ImprimirDatos(Datos);
     for(i=0;i<3;i++){
     promedio = calcularPromedio(Datos,i,Num_lecturas);
     printf("El promedio del sensor %d, es igual a: %0.2f\n",i,promedio);
     }


    return 0;
}

void llenarLecturas(float *datos,float *sensor, int sensor_index)
{
    int i;
      for(i = 0; i<(sizeof(Sensor1) / sizeof(Sensor1[0]));i++){
        *(datos+sensor_index*5+i) = sensor[i];
      }
return datos;
}


float calcularPromedio(float *datos, int Sensor_Index, int Columnas)
{
    int i;
    float suma = 0.0;
    for (i = 0; i < Columnas; i++) {
        suma += *(datos + Sensor_Index * Columnas + i);
    }
    return suma / Columnas;
}

void ImprimirDatos(float *datos){
int i,j;

for(j = 0; j < 3; j++) {
        printf("Sensor %d:\n", j+1);
        for(i = 0; i < 5; i++) {
            printf("  Datos[%d][%d] = %.1f\n", j, i, *(datos+j*5+i));
        }
    }
}
