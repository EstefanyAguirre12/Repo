/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: uca
 *
 * Created on 2 de septiembre de 2019, 12:32
 */

#include <iostream>

using namespace std;

/*
 * 
 */


int main(int argc, char** argv) {
        int num, num_inv=0; // En C/C++ no existe el valor cero por defecto
     
        cout<< "Introduce un numero:"; 
        cin>> num; // num=1234 
     
        while(num > 0){ // Cuando ya no queden digitos en el numero acaba el bucle
            num_inv = num_inv *10 + (num % 10); // Multiplicamos por diez el resultado y sumamos el ultimo digito del numero
            num = num/10; // Reducimos en un digito el numero, quitando siempre el ultimo de atras
        }
     
        // num_inv = 0 + 4 = 4
        // num = 123
     
        // num_inv = 40 + 3 = 43
        // num = 12
     
        // num_inv = 430 + 2 = 432
        // num = 1
     
        // num_inv = 4320 + 1 = 4321
        // num = 0
     
        cout<<"El resultado es:" << num_inv; //num_inv=4123 
    return 0;
}

