#include<iostream>

using namespace std;

void saludo(){
    /*01-Primero creo mi funcion*/
    cout<<"Esto es una funcion"<<endl;
}
/*Esta funcion no requiere que le pasemos ningun parametro dentro de los parentesis, pero hay casos como el siguiente que si los requieren*/
void suma(int num1, int num2){
    cout<<num1 + num2 << endl;
}

int main()
{
    //Declarar funciones en C++
    /*Las funciones son bloques de codigo reutilizables que nos van a permitir repetir una misma tarea varias veces con el mismo codigo*/

    /*02-Luego la llamo desde mi funcion principal*/
    saludo();
    suma(12,34);/*Paso los dos parametros que me pide la funcion cuando la llamo*/

    return 0;
}