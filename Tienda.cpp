#include <iostream>
using namespace std;

main()
{
    double vp, tp=0;
    cout<<"CALCULA EL DESCUENTO DEL 15% DE UN PRODUCTO"<<endl;
    cout<<"Introduzca el valor del producto a comprar "<<endl;
    cin>>vp;
    tp= vp-(vp*0.15);
    cout<<"El cliente pagara en total con descuento "<<tp;
    return 0;
}
