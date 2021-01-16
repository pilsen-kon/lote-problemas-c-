#include <iostream>
using namespace std;

float yrecta(float m, float c, float x);
float ycircunferencia(float a, float b, float r, float x);
bool tipoRecta(float y1, float y2);
void mensajeTipoRecta(bool tipoRecta);

int main(){
	
	float m, c, a, b, r, x, y1, y2;
	bool tipoRect;
	
	cout<<"Dada la ecuación de la recta  y = mx + c\n";
	cout<<"Ingrese el valor del termino lineal m: ";
	cin>>m;
	cout<<"Ingrese el valor del termino independiente c: ";
	cin>>c;
	cout<<"\n";
	
	cout<<"Dada la ecuacion de la circunferencia  (x-a) + (y-b) = r\n";
	cout<<"Ingrese el valor de a: ";
	cin>>a;
	cout<<"Ingrese el valor de b: ";
	cin>>b;
	cout<<"Ingrese el valor de r: ";
	cin>>r;
	cout<<"\n";
	
	cout<<"Ingrese el valor que tendra la variable independiente x en ambas ecuaciones: ";
	cin>>x;
	
	y1=yrecta(m, c, x);
	y2=ycircunferencia(a, b , r, x);
	
	cout<<"Los puntos de interseccion son:\n";
	cout<<"("<<x<<";"<<y1<<")\n";
	cout<<"("<<x<<";"<<y2<<")\n";
	
	tipoRect=tipoRecta(y1,y2);
	mensajeTipoRecta(tipoRect);
	
}

float yrecta(float m, float c, float x){
	float y;
	y=m*x+c;
	return y;
}

float ycircunferencia(float a, float b, float r, float x){
	float y;
	y=r-(x-a)+b;
	return y;
}

bool tipoRecta(float y1, float y2){
	if(y1==y2){
		return true;
	}
	else{
		return false;
	}
}

void mensajeTipoRecta(bool tipoRect){
	if(tipoRect){
		cout<<"La recta es tangete a la circunferencia";
	}
	else{
		cout<<"La recta es secante a la circunferencua";
	}
}
