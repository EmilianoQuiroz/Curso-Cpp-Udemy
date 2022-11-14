#include<iostream>

using namespace std;

int main()
{
    //Bucle for en C++
    /*Hace lo mismo que el bucle while pero con una estructura diferente, aunque for se utiliza cuando sabemos cuantas veces vamos a iterar el programa*/
    /*El bucle for es usado generalmente para recorrer arrays*/
    int numerosPrimos[]={2,3,5,7,11}; 
    int i;
    for (i = 0; i < 5; i++)
    {
        /* code */
        cout<<numerosPrimos[i]<<endl;
    }
    
    return 0;
}

