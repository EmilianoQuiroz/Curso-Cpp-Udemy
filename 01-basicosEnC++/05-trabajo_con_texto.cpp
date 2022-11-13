#include<iostream>

using namespace std;

int main()
{
    //Trabajo con textos en C++
    string texto = "Esto es un texto en C++";
    //Para acceder a una letra en especifico del texto podemos hacerlo de la siguiente manera
    /*Llamamos a la variable y junto a esta ponemos unos corchetes, en estos introduciremos el numero de la posicion vectorial del texto a la que queremos acceder*/
    cout<< texto[0]<<endl;
    //.length para saber la cantidad de caracteres de un texto
    cout<< texto.length()<<endl;
    //.find() para buscar un caracter especifico dentro del texto
    /*Para esto nececitamos pasarle dos parametros a la funcion, el primero es el caracter que queremos buscar, el segundo es la posicion desde la cual queremos buscar*/
    cout<<texto.find("t", 0)<<endl;/*Esto nos devuelve la posicion en la que se encuentra el elemento que pasamos como parametro*/


    return 0;
}