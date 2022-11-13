#include<iostream>

using namespace std;

int main()
{
    //Punteros en C++
    /*Un puntero es un tipo de dato que almacena la direccion en la memoria que ocupa una variable que definimos previamente*/
    int entero = 5;
    //Accediendo al puntero de mi variable
    int *pentero = &entero;
    double decimal = 4.1; 
    double * pdecimal = &decimal;
    char letra = 'a';
    char *pletra = &letra;

    /*Ahora que tengo definidas mis variables puedeo acceder a su direccion en memoria*/
    cout<<pentero<< endl;
    cout<<pdecimal<< endl;
    /*Si quiero desreferenciar los punteros tengo que poner un asterisco por delante de la variable*/
    cout<<*pletra<< endl;/*De esta manera obtengo el valor de la variable original*/

    return 0;
}