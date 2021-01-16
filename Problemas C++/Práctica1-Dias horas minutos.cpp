#include <iostream>
using namespace std;
int main(){
	
	int minutosIng, dias, horas, minutos;
	
	cout<<"Ingrese la cantidad de minutos: ";
	cin>>minutosIng;
	
	dias=minutosIng/(60*24);
	horas=minutosIng%(60*24)/60;
	minutos=minutosIng%(60*24)%60;
	
	cout<<"Dias: "<<dias<<"\n";
	cout<<"Horas: "<<horas<<"\n";
	cout<<"Minutos: "<<minutos<<"\n";
}
