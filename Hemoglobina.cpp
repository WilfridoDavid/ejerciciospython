#include <iostream>
using namespace std;

main(){
    int opc=0;
    do{
        double prom=0;
        cout<<"Escribe el promedio"<<endl;
        cin>>prom;
        cout<<"Desea continuar capturando los promedios?"<<endl;
        cout<<"1.- Para continuar"<<endl;
        cout<<"Cualquier numero para salir"<<endl;
        cin>>opc;
    }while(opc==1);
    return 0;
}
