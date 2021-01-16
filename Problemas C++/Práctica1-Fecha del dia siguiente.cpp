#include <iostream>
using namespace std;

int numDias(int mes, int anio);
bool esBisiesto(int anio);

int main(){
	
	int dia, year, mes, diasMes;
	
	cout<<"Ingrese la fecha\n";
	cout<<"En el caso del mes, ingrese el numero correspondiente:\n";
	cout<<"1=Enero\t\t2=Febrero\t3=Marzo\t\t4=Abril\n";
	cout<<"5=Mayo\t\t6=Junio\t\t7=Julio\t\t8=agosto\n";
	cout<<"9=Septiembre\t10=Octubre\t11=Noviembre\t12=Diciembre\n\n";
	
	do{
		cout<<"Year: ";
		cin>>year;
	}while(year<0);
	
	do{
		cout<<"Mes: ",
		cin>>mes;
	}while(mes<=0 || mes>12);
	
	do{
		cout<<"Dia: ";
		cin>>dia;
	}while(dia>numDias(mes,year));
	
	dia=dia+1;	
	if(dia>numDias(mes,year)){
		dia=1;
		mes=mes+1;
		if(mes>12){
			mes=1;
			year=year+1;
		}
	}
	
	cout<<"\n\nLa fecha de mañana sera:\n";
	cout<<"Year: "<<year<<"\n";
	cout<<"Mes: "<<mes<<"\n";
	cout<<"Dia: "<<dia<<"\n";
}

void analizarDia(int dia, int mes, int year){
	dia=dia+1;	
	if(dia>numDias(mes,year)){
		dia=1;
		mes=mes+1;
		if(mes>12){
			mes=1;
			year=year+1;
		}
	}
}

int numDias(int mes, int anio){
	int dias;
	switch(mes){
		case 1:
			dias=31;
			break;
		case 2:
			if(esBisiesto(anio))
				dias=29;
			else
				dias=28;
			break;
		case 3:
			dias=31;
			break;
		case 4:
			dias=30;
			break;
		case 5:
			dias=31;
			break;
		case 6:
			dias=30;
			break;
		case 7:
			dias=31;
			break;
		case 8:
			dias=31;
			break;
		case 9:
			 dias=30;
			 break;
		case 10:
			dias=31;
			break;
		case 11:
			dias=30;
			break;
		case 12:
			dias=31;
			break;			 									
	}
	return dias;
}

bool esBisiesto(int anio){
	if(anio%100==0 && anio%400==0)
		return true;
	else
		if(anio%4==0 && anio%100!=0)
			return true;
		else
			return false;		
}
