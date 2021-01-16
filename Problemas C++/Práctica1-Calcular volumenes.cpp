#include <iostream>
#define PI 3.1416
using namespace std;

void Mensajes(int &opcion);
void Opciones(int opcion, float &volumen);
float Cubo(float arista);
float Potencia(float base, float potencia);
float Cilindro(float radio, float altura);
float Esfera(float radio);
float Cono(float radio, float altura);

int main(){
	int opcion;
	float volumen;
	Mensajes(opcion);
	Opciones(opcion, volumen);
	cout<<"\nEl volumen es de: "<<volumen;	
}

void Mensajes(int &opcion){
	cout<<"*****BIENVENIDO AL PROGRAMA PARA CALCULAR VOLUMENES*****\n\n";
	cout<<"1.Cubo\t\t2.Cilindro\n";
	cout<<"3.Esfera\t4.Cono\n\n";
	do{
		cout<<"Por favor ingrese alguna opcion: ";
		cin>>opcion;
	}while(opcion<=0 || opcion>4);	
}

void Opciones(int opcion, float &volumen){
	float arista, radio, altura;
	switch(opcion){
		case 1:
			volumen=Cubo(arista);
			break;
		case 2:
			volumen=Cilindro(radio, altura);
			break;
		case 3:
			volumen=Esfera(radio);
			break;
		case 4:
			volumen=Cono(radio, altura);
			break;			
	}
}

float Cubo(float arista){
	float volumen;
	do{
		cout<<"Arista: ";
		cin>>arista;
	}while(arista<=0);
	volumen=Potencia(arista,3);
	return volumen;
}

float Potencia(float base, float potencia){
	float resultado;
	int i;
	i=1;
	resultado=1;
	while(i<=potencia){
		resultado=resultado*base;
		i++;
	}
	return resultado;
}

float Cilindro(float radio, float altura){
	float volumen;
	do{
		cout<<"Radio: ";
		cin>>radio;
	}while(radio<=0);
	
	do{
		cout<<"Altura: ";
		cin>>altura;
	}while(altura<=0);
	volumen=PI*Potencia(radio,2)*altura;
	return volumen;
}

float Esfera(float radio){
	float volumen;
	do{
		cout<<"Radio: ";
		cin>>radio;
	}while(radio<=0);
	volumen=(4*PI*Potencia(radio,3))/3;
	return volumen;
}

float Cono(float radio, float altura){
	float volumen;
	do{
		cout<<"Radio: ";
		cin>>radio;
	}while(radio<=0);
	
	do{
		cout<<"Altura: ";
		cin>>altura;
	}while(altura<=0);
	volumen=(PI*Potencia(radio,2)*altura)/3;
	return volumen;
}
