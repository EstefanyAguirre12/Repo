/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: uca
 *
 * Created on 2 de septiembre de 2019, 11:59
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int suma=0, i=0, j=0;
    double promedio=0;
    int arreglo[10];
    
    while(i<10){
        
        cout<<"Ingrese un numero: ";
        cin>>arreglo[i];
        i++;
    }
    while(j<10){
        suma= suma + arreglo[j];
        j++;
    }
    promedio=double(suma)/10;
    cout<<"Suma: "<<suma<<endl;
    cout<<"Promedio: "<<promedio<<endl;
        
    return 0;
}

