#include <iostream>
using namespace std;

void Mensaje();
void ingresarFecha1(int &anio1, int &mes1, int &dia1, int &diaJuliano1);
void ingresarFecha2(int &anio2, int &mes2, int &dia2, int &diaJuliano2);
int numDias(int mes, int anio);
bool esBisiesto(int anio);
int valorAp(int anio, int mes);
int valorMp(int mes);
int diasDiferencia(int diaJuliano1, int diaJuliano2);
void ultimoMensaje(int diferencia);

int main(){
	
	int diferencia,anio1,mes1,dia1,anio2,mes2,dia2,diaJuliano1,diaJuliano2;
	
	Mensaje();
	ingresarFecha1(anio1,mes1,dia1,diaJuliano1);
	ingresarFecha2(anio2,mes2,dia2,diaJuliano2);
		
	diferencia=diasDiferencia(diaJuliano1,diaJuliano2);
	
	ultimoMensaje(diferencia);
	
	return 0;
}

void Mensaje(){
	cout<<"***INGRESE DOS FECHAS***\n";
	cout<<"En el caso del mes, ingrese el numero correspondiente:\n";
	cout<<"1=Enero\t\t2=Febrero\t3=Marzo\t\t4=Abril\n";
	cout<<"5=Mayo\t\t6=Junio\t\t7=Julio\t\t8=agosto\n";
	cout<<"9=Septiembre\t10=Octubre\t11=Noviembre\t12=Diciembre\n\n";
}

void ingresarFecha1(int &anio, int &mes, int &dia, int &diaJuliano){
	do{
		cout<<"Ingrese la primera fecha:\n";
		cout<<"Anio: ";
		cin>>anio;		
	}while(anio<-4713);

	do{
		cout<<"Mes: ";
		cin>>mes;		
	}while(mes<1 || mes>12);

	do{
		cout<<"Dia: ";
		cin>>dia;		
	}while(dia>numDias(mes,anio));
	
	diaJuliano=int(365.25*valorAp(anio,mes))+int(30.6001*valorMp(mes))+dia+1720982;
	/*cout<<valorAp(anio,mes)<<"\n";
	cout<<valorMp(mes)<<"\n";
	cout<<diaJuliano<<"\n";*/

	cout<<"\n";

}

void ingresarFecha2(int &anio, int &mes, int &dia, int &diaJuliano){
	do{
		cout<<"Ingrese la segunda fecha:\n";
		cout<<"Anio: ";
		cin>>anio;		
	}while(anio<-4713);

	do{
		cout<<"Mes: ";
		cin>>mes;		
	}while(mes<1 || mes>12);

	do{
		cout<<"Dia: ";
		cin>>dia;		
	}while(dia>numDias(mes,anio));
	
	diaJuliano=int(365.25*valorAp(anio,mes))+int(30.6001*valorMp(mes))+dia+1720982;
	/*cout<<valorAp(anio,mes)<<"\n";
	cout<<valorMp(mes)<<"\n";
	cout<<diaJuliano<<"\n";*/
	
}

int numDias(int mes, int anio){
	int dias;
	if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)
		dias=31;
	else
		if(mes==4 || mes== 6 || mes==9 || mes==11)
			dias=30;
		else
			if(mes==2)
				if(esBisiesto(anio))
					dias=29;
				else
					dias=28;

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

int valorAp(int anio, int mes){
	int ap;
	if(mes==1 || mes==2)
		ap=anio-1;
	else
		ap=anio;
	
	return ap;
}

int valorMp(int mes){
	int mp;
	if(mes>2)
		mp=mes+1;
	else
		mp=mes+13;
	
	return mp;		
}

int diasDiferencia(int diaJuliano1, int diaJuliano2){
	int diferencia=diaJuliano2-diaJuliano1;
	if(diferencia<0)
		diferencia=diferencia*(-1);
	return diferencia;	
}

void ultimoMensaje(int diferencia){
	cout<<"\nLa cantidad de dias transcurridos entre ambas fechas es de: "<<diferencia;
}
