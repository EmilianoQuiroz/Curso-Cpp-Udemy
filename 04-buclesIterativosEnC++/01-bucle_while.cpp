#include<iostream>

using namespace std;

int main()
{
    //Bucle While en C++
    /*Declaramos nuestra variable iterativa, que es la variable que va a ir cambiando a lo largo de nuestro bucle*/
    int i = 1;
    int j = 2;
    //Luego declaramos el bucle
    /*En el bucle while primero declaramos la condicion a cumplir y luego el codigo a ejecutar*/
    while (/* condition */ i<=10)
    {
        /* code */
        cout<<i<<endl;
        i++;
    }
    /*Este programa hara que se digite el valor de i de manera iterativa hasta que i tenga un valor menor o igual a 10*/

    //Bucle Do While
    do{
        cout<<j<<endl;
        j++;
    }while (/* condition */j<=10);
    /*En el bucle Do While primero ejecuto aunque sea una vez el codigo y luego aplico la condicion*/
    return 0;
}