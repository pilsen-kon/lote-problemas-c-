#include <iostream>
using namespace std;

void leerDatos(int &nota1, int &nota2, int &nota3, int &nota4, int &nota5, int &nota6);
int Menor(int nota1, int nota2, int nota3, int nota4, int nota5, int nota6);
int Promedio(int nota1, int nota2, int nota3, int nota4, int nota5, int nota6, int notaMenor);
int main(){
	
	int nota1, nota2, nota3, nota4, nota5, nota6, notaMenor;
	float promedio;
	
	leerDatos(nota1,nota2,nota3,nota4,nota5,nota6);
	notaMenor=Menor(nota1,nota2,nota3,nota4,nota5,nota6);
	promedio=Promedio(nota1,nota2,nota3,nota4,nota5,nota6,notaMenor);
	cout<<"El promedio del alumno considerando las 5 mejores notas es de: "<<promedio;
}

void leerDatos(int &nota1, int &nota2, int &nota3, int &nota4, int &nota5, int &nota6){
	cout<<"***POR FAVOR INGRESE LAS NOTAS DEL ALUMNO***\n";
	do{
		cout<<"Nota 1: ";
		cin>>nota1;
	}while(nota1<0 || nota1>20);
	
	do{
		cout<<"Nota 2: ";
		cin>>nota2;
	}while(nota2<0 || nota2>20);
	
	do{
		cout<<"Nota 3: ";
		cin>>nota3;
	}while(nota3<0 || nota3>20);
	
	do{
		cout<<"Nota 4: ";
		cin>>nota4;
	}while(nota4<0 || nota4>20);
	
	do{
		cout<<"Nota 5: ";
		cin>>nota5;
	}while(nota5<0 || nota5>20);
	
	do{
		cout<<"Nota 6: ";
		cin>>nota6;
	}while(nota6<0 || nota6>20);
}

int Menor(int nota1, int nota2, int nota3, int nota4, int nota5, int nota6){
	int menor;
	menor=nota1;
	if(menor>nota2)
		menor=nota2;
	if(menor>nota3)
		menor=nota3;
	if(menor>nota4)
		menor=nota4;
	if(menor>nota5)
		menor=nota5;
	if(menor>nota6)
		menor=nota6;
	return menor;				
}

int Promedio(int nota1, int nota2, int nota3, int nota4, int nota5, int nota6, int notaMenor){
	float notaPromedio1;
	int notaPromedio2;
	notaPromedio1=(nota1+nota2+nota3+nota4+nota5+nota6-notaMenor)*1.0/5;
	notaPromedio2=(nota1+nota2+nota3+nota4+nota5+nota6-notaMenor)/5;
	if((notaPromedio1-notaPromedio2)>=0.5)
		notaPromedio2=notaPromedio2+1;

	return notaPromedio2;	
}
