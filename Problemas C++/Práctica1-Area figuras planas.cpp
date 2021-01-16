#include <iostream>
#include <math.h>
#define PI 3.1416
using namespace std;

void Menu(int &opc);
void AnalizarOpc(int opc,float& area);
float Rectangulo(float base1,float altura1);
float Triangulo(float base,float altura);
float Trapecio(float baseMayor,float baseMenor,float altura);
float Circulo(float radio);
float Rombo(float diagonalmenor,float diagonalMayor);
float Cuadrado(float lado);
void TipoTriangulo(float &area);
void datosTriangulo(float menor, float medio, float mayor, float &area);
bool existenciaTriangulo(float menor, float medio, float mayor);
float Triangulo2(float menor, float medio, float mayor);			

int main(){
	int opc, nuevaOpc;
	float area;
	
	Menu(opc);
	AnalizarOpc(opc,area);
	
	if(area>0.0000000005)
		cout<<"\nEl area es: "<<area;
		
	return 0;	
}

void Menu(int &opc){	
	cout<<"**********BIENVENIDO AL PROGRAMA PARA CALCULAR EL AREA DE FIGURAS PLANAS**********\n\n";
	cout<<"\t1=Rectangulo\t\t\t2=Triangulo\t\t\t3=Trapecio\n";
	cout<<"\t4=Circulo\t\t\t5=Rombo\t\t\t6=Cuadrado\n\n";
	
	do{
		cout<<"Por favor digite una opcion: ";
		cin>>opc;
		cout<<"\n";
	}while(opc<=0||opc>6);
}

void AnalizarOpc(int opc, float &area){
	float base, altura, radio, baseMayor, baseMenor, diagonalMenor, diagonalMayor, lado;
	switch(opc){
		case 1:
			area=Rectangulo(base,altura);
			break;
		case 2:
			TipoTriangulo(area);
			break;
		case 3:
			area=Trapecio(baseMayor,baseMenor,altura);
			break;
		case 4:
			area=Circulo(radio);
			break;
		case 5:
			area=Rombo(diagonalMenor,diagonalMayor);
			break;
		case 6:
			area=Cuadrado(lado);
			break;				
	}	
}

float Rectangulo(float base,float altura){
	float area;
	do{
		cout<<"Ingrese base: ";
		cin>>base;
	}while(base<=0);
	
	do{
		cout<<"Ingrese altura: ";
		cin>>altura;
	}while(altura<=0);
	
	area=base*altura;
	return area;
}

float Triangulo(float base, float altura){
	float area;
	do{
		cout<<"Ingrese base: ";
		cin>>base;
	}while(base<=0);
	
	do{
		cout<<"Ingrese altura: ";
		cin>>altura;
	}while(altura<=0);
	
	area=base*altura/2;
	return area;
}

float Trapecio(float baseMayor, float baseMenor, float altura){
	float area;
	do{
		cout<<"Ingrese base mayor: ";
		cin>>baseMayor;
	}while(baseMayor<=0);
	
	do{
		cout<<"Ingrese base menor: ";
		cin>>baseMenor;
	}while(baseMenor<=0);
	
	do{
		cout<<"Ingrese altura: ";
		cin>>altura;
	}while(altura<=0);
	
	area=(baseMenor+baseMayor)*altura/2;
	return area;
}

float Circulo(float radio){
	float area;
	do{
		cout<<"Ingrese el radio: ";
		cin>>radio;
	}while(radio<=0);
	
	area=PI*radio*radio;
	return area;
}

float Rombo(float diagonalMenor, float diagonalMayor){
	float area;
	do{
		cout<<"Ingrese diagonal menor: ";
		cin>>diagonalMenor;
	}while(diagonalMenor<=0);
	
	do{
		cout<<"Ingrese diagonal mayor: ";
		cin>>diagonalMayor;
	}while(diagonalMayor<=0);
	
	area=diagonalMenor*diagonalMayor/2;
	return area;
}

float Cuadrado(float lado){
	float area;
	do{
		cout<<"Ingrese el lado: ";
		cin>>lado;
	}while(lado<=0);
	
	area=lado*lado;
	return area;
}

void TipoTriangulo(float &area){
	int opc;
	float lado1,lado2,lado3,base,altura;
	do{
		cout<<"El triangulo es rectangulo?\n";
		cout<<"1=Si\t2=No:\n\n";
		cout<<"Responda: ";
		cin>>opc;
		cout<<"\n";
	}while(opc!=1 && opc!=2);
	
	if(opc==1)
		area=Triangulo(base,altura);
	else
		datosTriangulo(lado1,lado2,lado3,area);	
	
}

void datosTriangulo(float mayor, float medio, float menor, float &area){
	float aux;
	do{
		cout<<"Ingrese lado 1: ";
		cin>>mayor;
	}while(mayor<=0);
	
	do{
		cout<<"Ingrese lado 2: ";
		cin>>medio;
	}while(medio<=0);
	
	do{
		cout<<"Ingrese lado 3: ";
		cin>>menor;
	}while(menor<=0);
	
	if(menor>medio){
		aux=medio;
		medio=menor;
		menor=aux;
	}
	if(medio>mayor){
		aux=medio;
		medio=mayor;
		mayor=aux;
	}
	
	if(menor>medio){
		aux=menor;
		menor=medio;
		medio=aux;
	}
	
	if(existenciaTriangulo(menor,medio,mayor))
		area=Triangulo2(menor,medio,mayor);
	else
		cout<<"El triangulo no existe\n";						
}

bool existenciaTriangulo(float menor, float medio, float mayor){
	float suma, diferencia, total;
	total=mayor+menor+medio;
	suma=2*total;
	diferencia=2*(mayor-menor);
	
	if(total>diferencia && total<suma)
		return true;
	else
		return false;	
}

float Triangulo2(float menor, float medio, float mayor){
	float p, area;
	p=(menor+medio+mayor)/2;
	area=sqrt(p*(p-menor)*(p-medio)*(p-mayor));
	return area;
}
