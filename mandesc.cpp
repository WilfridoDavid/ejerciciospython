#include <iostream>
using namespace std;

main(){
    int kilos=0;
    double prec_kilo=0;
    double compraTotal=0;
    cout<<"Escribe el total de kilos que compro el cliente "<<endl;
    cin>>kilos;
    cout<<"Escribe el precio del kilo de manzana: "<<endl;
    cin>>prec_kilo;
    double compra= kilos*prec_kilo;
    if (kilos>=1 && kilos<=2){
        cout<<"El total a pagar por el cliente "<<compra;
    }
    else if(kilos>2 && kilos<=5){
            double total= compra-(compra*0.10);
            cout<<"El total a pagar con el 10% de descuento es "<<total<<endl;
    }
    else if(kilos>5 && kilos<=10){
            double total= compra-(compra*0.15);
            cout<<"El total a pagar con el 15% de descuento es "<<total<<endl;

    }
    else{
            double total= compra-(compra*0.20);
            cout<<"El total a pagar con el 20% de descuento es "<<total<<endl;

    }
    return 0;
}
