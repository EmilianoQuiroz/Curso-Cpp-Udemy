#include<iostream>
#include<cmath>
/*Esta libreria nos permitira con diversas operaciones matematicas como potencias y raices*/

using namespace std;

int main()
{
    //Trabajo con numeros
    /*Podemos mostrar en pantalla resultados de operaciones matematicas*/
    cout<<34+34<<endl;
    /*Tambien podemos escribir potencias gracias a esta libreria mendiante la funcion pow()*/
    cout<<pow(2,3)<<endl;
    /*Gracias a la funcion sqrt podemos saber cual es la raiz cuadrada de un numero*/
    cout<<sqrt(25)<<endl;
    /*Para operaciones de redondeo tenemos las siguientes funciones*/
    cout<<round(2.45)<<endl;/*Redondea a su entero mas cercano*/
    /*ceil va a redondear al numero entero mas elevado*/
    cout<<ceil(2.78)<<endl;
    /*Floor nos redondea al numero cercano mas bajo*/
    cout<<floor(2.78)<<endl;

    return 0;
}