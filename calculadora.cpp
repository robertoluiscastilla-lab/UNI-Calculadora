#include <iostream>
#include <cctype>

using namespace std;

double suma(double n1, double n2){

    return n1+n2;
    
}

double resta(double n1, double n2){

    return n1-n2;
    
}

double multiplicacion(double n1, double n2){

    return n1*n2;
    
}

double division(double n1, double n2){

    return n1/n2;
    
}

double potencia(double n1, int n2){

    double resultado{1};

    for(int i{0}; i<n2 ; i++){
        resultado *= n1;
    }

    return resultado;
    

}

int main() {

    double n1{0},n2{0},resultado{0};
    char operacion, otra;
    int sigues{1};
    
    cout<<"CALCULADORA"<<endl;
    
    while(sigues==1) {

    cout<<"INGRESA EL PRIMER NUMERO"<<endl;
    cin>>n1;
    cout<<"SUMA (+), RESTA(-), MULTIPLICACION(*), DIVISION(/), POTENCIA(P)"<<endl;
    cin>>operacion;
    cout<<"INGRESA EL SEGUNDO NUMERO"<<endl;
    cin>>n2;

    operacion = toupper(operacion);

    switch (operacion){

        case '+' : resultado = suma(n1,n2);
        break;

        case '-' : resultado = resta(n1,n2);
        break;

        case '*' : resultado = multiplicacion(n1,n2);
        break;

        case '/' : resultado = division(n1,n2);
        break;

        case 'P' : resultado = potencia(n1,n1);

    }

    cout<<"INGRESA (1) SI QUIERES SEGUIR EN EL PROGRAMA, CUALQUIER OTRO NUMERO PARA SALIR"<<endl;
    cin>>sigues;

    if(sigues==1){
        cout<<"SI QUIERES CONTINUAR HABIENDO GURDADO EL RESULTADO ACTUAL INGRESA 'S', SINO, OTRA LETRA"<<endl;
        cin>>otra;
        
        if(toupper(otra)=='S'){

        }
    }

    }


    return 0;
}
