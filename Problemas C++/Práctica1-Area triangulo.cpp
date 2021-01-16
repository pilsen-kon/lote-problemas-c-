#include <iostream>
#include <cmath>
using namespace std;

int mayor(int val1,int val2,int val3);
int menor(int val1,int val2,int val3);
bool esTriangulo(int val1,int val2,int val3);
void tipoTriangulo(int val1, int val2, int val3);
float areaTriangulo(int val1, int val2, int val3);

int main(){
	
	int valor1, valor2, valor3;
	float area;
	
	do{
		cout<<"Ingrese el primer valor entero positivo: ";
		cin>>valor1;
	}while(valor1<1);	
	
	do{
		cout<<"Ingrese el segundo valor entero positivo: ";
		cin>>valor2;
	}while(valor2<1);	
		
	do{
		cout<<"Ingrese el tercer valor entero positivo: ";
		cin>>valor3;
	}while(valor3<1);
	
	if(esTriangulo(valor1,valor2,valor3)){
		cout<<"Existe el triangulo\n";		
	}else{
		cout<<"No existe el triangulo\n";
	}
	
	tipoTriangulo(valor1,valor2,valor3);
	
	if(esTriangulo(valor1,valor2,valor3))
		cout<<"El area del triangulo es: "<<areaTriangulo(valor1,valor2,valor3);		
}

int mayor(int val1,int val2,int val3){
	int mayor, medio, menor;
	
	if(val1>=val2){
		mayor=val1;
		menor=val2;
	}else{
		mayor=val2;
		menor=val1;
	}
	
	if(val3>=mayor){
		medio=mayor;
		mayor=val3;
	}else{
		if(val3<mayor && val3>menor){
			medio=val3;
		}else{
			if(val3<mayor && val3<menor){
				medio=menor;
				menor=val3;
			}
		}
	}
	return mayor;
}

int menor(int val1,int val2,int val3){
	int mayor, medio, menor;
	
	if(val1>=val2){
		mayor=val1;
		menor=val2;
	}else{
		mayor=val2;
		menor=val1;
	}
	
	if(val3>=mayor){
		medio=mayor;
		mayor=val3;
	}else{
		if(val3<mayor && val3>menor){
			medio=val3;
		}else{
			if(val3<mayor && val3<menor){
				medio=menor;
				menor=val3;
			}
		}
	}
	return menor;
}

bool esTriangulo(int val1,int val2,int val3){

	int suma, diferencia;
	diferencia=2*(mayor(val1,val2,val3)-menor(val1,val2,val3));
	suma=val1+val2+val3;
	if(diferencia<suma && 2*suma>suma){
		return true;
	}
	else{
		return false;
	}
}

void tipoTriangulo(int val1,int val2,int val3){
	if(esTriangulo(val1,val2,val3)){
		if(val1==val2 && val1==val3 && val2==val3){
			cout<<"El triangulo es equilatero\n";
		}else{
			if(val1==val2 || val1==val3 || val2==val3){
				cout<<"El triangulo es isosceles\n";
			}else{
				cout<<"El triangulo es escaleno\n";
			}
		}		
	}
}

float areaTriangulo(int val1, int val2, int val3){
	int p;
	float area,valor;
	
	p=(val1+val2+val3);
	area=sqrt(p*(p-val1)*(p-val2)*(p-val3));
	
	return area;
}
