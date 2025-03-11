#include <iostream>
using namespace std;

main(){
    int i=1;
    string op;
    do{
        cout<<"Este es el numero "<<i<<endl;
        cout<<"Desea continuar?: 1-Continuar    2-Salir"<<endl;
        cin>>op;
        i= i+1;
    }
    while (op=="1");
    return 0;
}
