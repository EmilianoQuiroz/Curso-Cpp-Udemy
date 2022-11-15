#include<iostream>

using namespace std;
class animal{
public:
    void comer(){
        cout<<"El animal come"<<endl;
    }
    void dormir(){
        cout<<"El animal duerme"<<endl;
    }
};
//Creo una subclase que heredara las propiedades de la clase principal
class perro: public animal{

};
int main()
{
    animal animal1;
    animal1.dormir();
    animal1.comer();

    perro perro1;
    perro1.dormir();
    //Ahora puedo utilizar el los atributos de la primer clase en las clases siguientes


return 0;
}