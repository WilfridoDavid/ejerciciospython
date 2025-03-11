#include <iostream>
using namespace std;

main()
{
    double lu, mi, vi, ps=0;cout<<"CALCULA EL PROMEDIO DE TIEMPO DE UN CORREDOR EN TRES DIAS"<<endl;
    cout<<"Ingrese el tiempo que crometro el lunes "<<endl;
    cin>>lu;
    cout<<"Ingrese el tiempo que crometro el miercoles "<<endl;
    cin>>mi;
    cout<<"Ingrese el tiempo que crometro el viernes "<<endl;
    cin>>vi;
    ps = (lu+mi+vi)/3;
    cout<<"El promedio que corrio la semana "<<ps;
    return 0;
}
