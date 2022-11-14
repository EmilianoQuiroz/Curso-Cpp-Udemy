#include<iostream>

using namespace std;

int main()
{
    //Arrays de dos dimenciones
    int num[3][4]={{1,2,3,4},
                 {5,6,7,8},
                 {9,10,11,12}};

    //Ahora podemos acceder a cada elemento indicando cada una de sus posiciones
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            cout<<num[i][j]<<endl;
        //Esto me va a mostrar todos los elementos de mi array
        }
    }
    return 0;
}