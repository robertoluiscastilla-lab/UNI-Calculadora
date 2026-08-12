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

    if(n2>=0) {

    for(int i{0}; i<n2 ; i++){
        resultado *= n1;
    } 

    } else {

    n2 *= -1;

    for(int i{0}; i<n2 ; i++){
        resultado *= n1;
    }

    return 1.0/resultado;

    }

    return resultado;
    
}

int main() {

    double n1{0},n2{0},resultado{0};

    char operacion, guardado='l';
    
    int sigues{1};
    
    cout<<"CALCULADORA"<<endl;
    
    while(sigues==1) {

    char codigoDeError='F';
    n2=0;

    /* 

    CODIGOS DE ERROR
    0 - DIVISION ENTRE CERO
    1 - CERO A LA CERO
    2 - CERO A LA EXPONENTE NEGATIVO
    3 - INGRESASTE UNA OPERACION INVALIDA

    */

    if(guardado != 'R' && guardado != 'r') {

    cout<<"INGRESA EL PRIMER NUMERO"<<endl;
    cin>>n1; 

    } else {

    n1 = resultado;

    }

    cout<<"SUMA (+) \nRESTA(-) \nMULTIPLICACION(*) \nDIVISION(/) \nPOTENCIA(P) - SOLO USAR ENTEROS EN EXPONENTES (SEGUNDO NUMERO), SI IGUAL PONE DECIMAL SOLO SE TENDRA EN CUENTA EL ENTERO"<<endl;
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

        case '/' : n2 !=0 ? resultado = division(n1,n2): codigoDeError='0';
        break;

        case 'P' : 

            n2 = static_cast<int>(n2);

            if(n1==0 && n2==0) {

                codigoDeError='1';

            }
            else if (n1==0 && n2 < 0) {

                codigoDeError='2';

            } else {

                resultado = potencia(n1,n2);

            }
        break;

        default: codigoDeError='3';
        break;

    }

    if(codigoDeError=='F'){

        cout<<"EL RESULTADO ES: "<<resultado<<endl;
    
     } else {

        switch (codigoDeError) {
        case '0' : cout<<"ERROR: LA DIVISION ENTRE CERO NO ESTA DEFINIDA EN LAS MATEMATICAS"<<endl;
                   
        break;
        case '1' : cout<<"ERROR: CERO ELEVADO A LA CERO ES UNA INDETERMINACION MATEMATICA"<<endl;
                    
        break;
        case '2' : cout<<"ERROR: CERO ELEVADO A UN EXPONENTE NEGATIVO ES UNA INDETERMINACION PORQUE EQUIVALE A UNA DIVISION ENTRE CERO"<<endl;          
        break;

        case '3' : cout<<"ERROR: NO INGRESASTE UNA OPERACION VALIDA EN EL PROGRAMA"<<endl;
        break;
  
        }

     }

    cout<<"INGRESA (1) SI QUIERES SEGUIR EN EL PROGRAMA, CUALQUIER OTRO NUMERO PARA SALIR"<<endl;
    cin>>sigues;

    if(sigues==1 && codigoDeError=='F'){
        cout<<"SI QUIERES CONTINUAR A PARTIR DEL RESULTADO ACTUAL INGRESA 'R', SINO, OTRA LETRA"<<endl;
        cin>>guardado;
    } else {
        guardado = 'l';
    }

    }

    cout<<"GRACIAS POR USAR EL PROGRAMA"<<endl;


    return 0;
}
