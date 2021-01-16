#include <iostream>
using namespace std;

void leerDatos(int &numCreditos, int &matricula, char &categoria);
int CostoCredito(char categoria);
int PagoCiclo(int pagoCredito, int numCreditos, int matricula);

int main(){
	
	int numCreditos, matricula, pagoCredito, montoTotal;
	char categoria;
	
	leerDatos(numCreditos,matricula,categoria);
	pagoCredito=CostoCredito(categoria);
	montoTotal=PagoCiclo(pagoCredito,numCreditos,matricula);
	cout<<"El monto a pagar es de: "<<montoTotal;
	return 0;
}

void leerDatos(int &numCreditos, int &matricula, char &categoria){
	cout<<"***************************POR FAVOR INGRESE LOS DATOS SOLICITADOS***************************\n\n";
	cout<<"\t\tCATEGORIA\t\t\t\t\tPAGO CREDITO\n";
	cout<<"\t\t   A\t\t\t\t\t\t     "<<125.00<<"\n\t\t   B\t\t\t\t\t\t     "<<150.00<<"\n\t\t   C\t\t\t\t\t\t     "<<180.00<<"\n\n";
	cout<<"	          			 TIPO MATRICULA\n";
	cout<<"\t\t\t\t1=Normal\t\t2=Extemporanea\n\n";
	
	do{
		cout<<"Creditos Inscritos: ";
		cin>>numCreditos;
	}while(numCreditos<0);
	
	do{
		cout<<"Categoria: ";
		cin>>categoria;
	}while(categoria!='a' && categoria!='A' && categoria!='b' && categoria!='B' && categoria!='c' && categoria!='C');
	
	do{
		cout<<"Tipo de Matricula: ";
		cin>>matricula;
	}while(matricula!=1 && matricula!=2);
}

int CostoCredito(char categoria){
	int costo;
	switch(categoria){
		case 'a':
			costo=125;
			break;
		case 'A':
			costo=125;
			break;	
		case 'b':
			costo=150;
			break;
		case 'B':
			costo=150;
			break;	
		case 'c':
			costo=180;
			break;
		case 'C':
			costo=180;
			break;			
	}
	return costo;
}

int PagoCiclo(int pagoCredito, int numCreditos, int matricula){
	int monto;
	if(matricula==1)
		monto=pagoCredito*numCreditos;
	else
		if(matricula==2)
			monto=(pagoCredito+40)*numCreditos;
	return monto;		
}
