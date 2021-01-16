#include <iostream>
using namespace std;

void Mensaje();
void Datos(int &tipoInstitucion, char &instituto, float &importe);
float Descuento(int tipoInstitucion, char instituto, float importe);

int main(){
	int tipoInstitucion;
	char instituto;
	float importe, descuento;
	Mensaje();
	Datos(tipoInstitucion,instituto,importe);
	descuento=Descuento(tipoInstitucion,instituto,importe);
	cout<<"El importe a pagar es: "<<descuento;
}

void Mensaje(){
	cout<<"********Tabla de porcentajes de descuento********\n\n";
	cout<<"\t\t\t\t   INSTITUTOS\n";
	cout<<"\tCOLEGIO\t\t\tA\tB\tC\n";
	cout<<"\tNacional\t\t50\t40\t30\n";
	cout<<"\tParticular\t\t25\t29\t15\n\n";
}

void Datos(int &tipoInstitucion, char &instituto, float &importe){
	do{
		cout<<"Ingrese el importe: ";
		cin>>importe;
	}while(importe<0);
	
	do{
		cout<<"(1=Nacional\t2=Particular)\n";
		cout<<"Ingrese tipo de institucion: ";
		cin>>tipoInstitucion;
	}while(tipoInstitucion!=1 && tipoInstitucion!=2);
	
	do{
		cout<<"Ingrese el tipo de instituto: ";
		cin>>instituto;
	}while(instituto!='a' && instituto!='b' && instituto!='c' && instituto!='A' && instituto!='B' && instituto!='C');
	
	cout<<"\n";
}

float Descuento(int tipoInstitucion, char instituto, float importe){
	float descuento, monto;
	
	if(tipoInstitucion==1)
		switch(instituto){
			case 'a':
				descuento=0.5;
				break;
			case 'A':
				descuento=0.5;
				break;	
			case 'b':
				descuento=0.4;
				break;
			case 'B':
				descuento=0.4;
				break;
			case 'c':
				descuento=0.3;
				break;
			case 'C':
				descuento=0.3;
				break;			
		}
	else
		switch(instituto){
			case 'a':
				descuento=0.25;
				break;
			case 'A':
				descuento=0.25;
				break;	
			case 'b':
				descuento=0.29;
				break;
			case 'B':
				descuento=0.29;
				break;	
			case 'c':
				descuento=0.15;
				break;
			case 'C':
				descuento=0.15;
				break;			
		}
		
	descuento=importe*(1-descuento);	
	return descuento;		
}
