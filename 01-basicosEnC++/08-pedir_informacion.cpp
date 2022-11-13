#include<iostream>

using namespace std;

int main()
{
    //Pedir datos en C++
    /*Primero incializamos la variable donde guardaremos el dato*/
    int edad;

    /*Luego pedimos por pantalla el dato*/
    cout<<"Digite su edad"<<endl;
    //Por ultimo, guardamos el dato ingresado dentro de la variable
    cin>>edad;

    cout<<"Tienes "<<edad<<" años."<<endl;

    /*Para trabajar con strings la funcion cin cambia por getline(cin, "variable donde introduciremos el texto")*/
    return 0;
}