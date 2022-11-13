#include<iostream>

using namespace std;

/*Para realizar la sentencia return debemos definir el tipo de dato de nuestra funcion*/
//Funcion que calcula la media entre dos numeros
double media(double num1, double num2){
    double resultado;
    return resultado = (num1 + num2) / 2;
}                                     
int main()
{
    //Sentencia return en C++
    //Llamamos a la funcion y mostramos en pantalla el resultado
    cout<< media(23, 24) <<endl;

    return 0;
}