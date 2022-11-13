#include<iostream>

using namespace std;

int main()
{
    //Arrays en C++
    //Un array es una variable que puede almacenar varios elementos de un mismo tipo
    int edad[] = {25,26,67,22,34,};
    /*Puedo tambien modificar cualquiera de los elementos de mi array*/
    edad[3]= 107;
    /*Ahora que tengo mi array definido puedo acceder a cualquiera de sus elementos*/
    cout<<edad[3]<<endl;

    return 0;
}