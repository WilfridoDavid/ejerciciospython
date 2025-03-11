#include <iostream>
using namespace std;

main(){
    int valor=0;
    cout<<"Escribe un numero entero del 1 al 5" <<endl;
    cin>>valor;
    switch (valor){
    case 1:
        cout<<"Color rojo";
        break;
    case 2:
        cout<<"Color amarillo";
        break;
    case 3:
        cout<<"Color verde";
        break;
    case 4:
        cout<<"Color azul";
        break;
    case 5:
        cout<<"Color negro";
        break;
    default:
        cout<<"Debe escribir un valor entre 1 y 5";
    }
    return 0;
}
