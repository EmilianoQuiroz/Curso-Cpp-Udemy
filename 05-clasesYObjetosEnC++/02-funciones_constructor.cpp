#include<iostream>

using namespace std;

//Definimos la clase por fuera de la funcion principal
class Alumnos{
public:
    string nombre;
    int edad;
    double nota;
    Alumnos(){
        /*Cada vez que creemos una clase aparecera este mensaje*/
        cout<<"Nuevo alumno registrado"<<endl;
    }
};//Terminamos la clse con punto y coma

int main()
{
    //Funcion constructor en C++
    //La funcion constructor es una funcion que se ejecuta cada vez que declaramos un objeto nuevo
    Alumnos alumno1;
    alumno1.nombre = "juan";
    alumno1.edad = 25;
    alumno1.nota = 7.9;
    
    Alumnos alumno2;
    alumno2.nombre = "Pepe";
    alumno2.edad = 23;
    alumno2.nota = 8.5;

    /*Asi podemos usar la clase creada para asi con sus atributos crear otros objetos*/

    //Ahora que tenemos definidos los dos objetos podremos acceder a ellos

    cout<<alumno1.nombre<<endl;
    cout<<alumno2.nota<<endl;
    
    
    return 0;
}