#include<iostream>

using namespace std;

int main()
{
    //Sentencia condicional IF en C++
    /*Una sentencia if nos va a permitir ejecutar un fragmento de codigo en caso de que una condicion se repita, u otra en caso de que no*/
    //Que numero es mayor
    int numero1 = 4;
    int numero2 = 45;
    int numero3 = 56;
    if(numero1 > numero2 && numero1 > numero3){
        cout<<"el numero "<<numero1<<" es mayor"<<endl;
    }else if(numero2 > numero1 && numero2 > numero3){
        cout<<"El numero "<<numero2<<" es el mayor"<<endl;
    }
    else if(numero3 > numero1 && numero3 > numero2){
        cout<<"El numero "<<numero3<<" es el mayor"<<endl;
    }
    else{
        cout<<"Los tres numero son iguales"<<endl;
    }


    return 0;
}