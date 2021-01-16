#include <iostream>
#include <conio.h>
using namespace std;

struct Compra{
	int genero;
	char talla;
	int origen;
}prenda;

int numCompra;
Compra *compra=NULL;

void Mensaje();
void NumeroCompras();
void DatosCompra();
int PrecioxPrenda();


int main(){
	Compra* compra=NULL;
	int total;
	Mensaje();
	NumeroCompras();
	DatosCompra();
	total=PrecioxPrenda();
	cout<<"Total: "<<total;
	delete[] compra;
	compra=NULL;

	getch();
	return 0;
} 

void Mensaje(){
	cout<<"***************Tabla de porcentajes de descuentos***************\n";
	cout<<"\tGENERO\t\t      Hombres\t\t     Mujeres\n";
	cout<<"\tTALLAS\t\tS\tM\tL\tS\tM\tL\n";
	cout<<"\tORIGEN\n";
	cout<<"\tNacional\t10\t12\t15\t15\t17\t20\n";
	cout<<"\tImportado\t05\t07\t10\t07\t09\t12\n\n";
}

void NumeroCompras(){
	
	do{
		cout<<"Numero de compras: ";
		cin>>numCompra;
	}while(numCompra<=0);
	
}

void DatosCompra (){
	/*int genero, origen;
	char talla;*/
	
	//Compra* arregloDinamico=NULL;
	/*int n;
	cin>>n;*/
	compra=new Compra[numCompra];
	
	cout<<"\n\n***************TENER EN CUENTA***************\n";
	cout<<"Genero:\t(0=Hombre\t1=Mujer)\n";
	cout<<"Talla:\t(S=Small\t\tM=Medium\tL=Large)\n";
	cout<<"Origen:\t(0=Nacional\t1=Importado)\n\n";
	
	for(int i=0;i<numCompra;i++){
		cout<<"******************************************************************************\n\n";
		cout<<"Prenda "<<i+1<<"\n\n";
		do{
			cout<<"Ingrese el genero de ropa: ";
			cin>>prenda.genero;
		}while(prenda.genero!=0 && prenda.genero!=1);
		
		do{
			cout<<"Talla: ";
			cin>>prenda.talla;
		}while(prenda.talla!='s' && prenda.talla!='S' && prenda.talla!='m' && prenda.talla!='M' && prenda.talla!='l' && prenda.talla!='L');
		
		do{
			cout<<"Origen: ";
			cin>>prenda.origen;
		}while(prenda.origen!=0 && prenda.origen!=1);
		
		cout<<"\n******************************************************************************\n\n\n";
	}
	delete[] compra;
//	arregloDinamico=NULL;
}

int PrecioxPrenda(){
	int precio;

	for(int i=0;i<numCompra;i++){
		if(prenda.genero==0){
			if(prenda.talla=='s' || prenda.talla=='S')
				if(prenda.origen==0)
					precio=10;
				else
					precio=5;
			
			if(prenda.talla=='m' || prenda.talla=='M')
				if(prenda.origen==0)
					precio=12;
				else
					precio=7;
					
			if(prenda.talla=='l' || prenda.talla=='L')
				if(prenda.origen==0)
					precio=15;
				else
					precio=10;				
		}
		else{
			if(prenda.talla=='s' || prenda.talla=='S')
				if(prenda.origen==0)
					precio=15;
				else
					precio=7;
			
			if(prenda.talla=='m' || prenda.talla=='M')
				if(prenda.origen==0)
					precio=17;
				else
					precio=9;
					
			if(prenda.talla=='l' || prenda.talla=='L')
				if(prenda.origen==0)
					precio=20;
				else
					precio=12;
		}
	total=total+precio;
	}
return total	
}

