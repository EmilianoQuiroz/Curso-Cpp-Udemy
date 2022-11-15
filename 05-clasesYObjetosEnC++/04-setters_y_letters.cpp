#include<iostream>

using namespace std;

//Definimos la clase por fuera de la funcion principal
class Alumnos{
private:
    string carrera;
public:
    /*A los atributos publicos se pueden acceder desde cualquier parte del codigo*/
    string nombre;
    int edad;
    // string carrera;
    double nota;
    Alumnos(string nombre_alumno, int edad_alumno,string carrera_alumno, double nota_alumno){
        nombre = nombre_alumno;
        edad = edad_alumno;
        definir_carrera(carrera_alumno);
        nota = nota_alumno;
    }
    void definir_carrera(string carrera_alumno){
        if(carrera_alumno=="redes" || carrera_alumno=="sistemas" || carrera_alumno=="ingenieria"){
           carrera = carrera_alumno; 
        }
        else{
            cout<<"Carrera incorrecta"<<endl;
        }
    }

    //Definicion del getter
    string obtener_carrera(){
        return carrera;
    }
};//Terminamos la clse con punto y coma

int main()
{
    //Funcion objeto en C++
    //La funcion constructor es una funcion que se ejecuta cada vez que declaramos un objeto nuevo
    Alumnos alumno1{"Juan", 25,"sistemas", 6.5};
    Alumnos alumno2 {"Pepe", 23, "redes", 7.5};

    /*Asi podemos usar la clase creada para asi con sus atributos crear otros objetos*/

    //Ahora que tenemos definidos los dos objetos podremos acceder a ellos

    cout<<alumno1.obtener_carrera()<<endl;
    cout<<alumno2.obtener_carrera()<<endl;
    
    
    return 0;
}