#include<iostream>

using namespace std;

int main()
{
    //Sentencia condicional SWITCH en C++
    //Calculadora con switch

    double num1= 5.0;
    double num2= 7.0;
    char operacion= '+';
    switch (operacion)
    {
    case '+': /* constant-expression */
        /* code */
        cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
        break;
    case '-': 
        cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
        break;
    
    case '*':
        cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
        break;
    case '/':
        cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
        break;
    default:
        cout<<"La operacion es incorrecta"<<endl;
    }
    return 0;
}