/*EJERCICIO # 1: En una librería se venden 4 modelos diferentes de cuadernos, con los siguientes precios:
â€¢ Modelo#1 â€“ Q10.00 â€¢ Modelo#2 â€“ Q15.00 â€¢ Modelo#3 â€“ Q18.50 â€¢ Modelo#4 â€“ Q25.00
Por otra parte, se tiene información sobre las ventas realizadas durante los últimos 30 días, estos movimientos se deben de
guardar en un archivo de la siguiente forma: 
DIA1,MOD,CANT DIA2,MOD,CANT . . . DIA30,MODELO,CANTIDAD DIAi = Variable que representa el día que se efectua 
la venta i (1 - 30) MOD= Variable que representa codigo de Modelo que se vendia. (1 â€“ 4) CANT= Variable que representa
la cantidad de unidades vendidas. El programa debe ser capaz de: â€¢ Modificar el numero de unidades vendidas, solicitando al 
usuario el día y código de articulo (modificación del archivo) â€¢ Eliminación de un día especifico de venta
(modificación del archivo) â€¢ Calcular el total recaudado por modelo en los 30 días. â€¢ Calcular cual fue el modelo que 
se vendia mas en los 30 días.*/
	
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
struct cuaderno{
	string 	modelo;
	float dias30;
	float cantidad;
	float precio mod1=10.00,mod2=15.00,mod3=18,mod4=25:

};
void mp(); //definicion de la funcion 
void inventario();
void leer_archivo();
int main(){	
	mp();	
	//return 0;
}
void mp(){ // cuadernos 
	
	int resp;
	string nombrearchivo;
	cout<<"Indique nombre de archivo: ";
	getline(cin,nombrearchivo);
	
	do{
		system("CLS");
		cout<<"--------------------------"<<"\n";
		cout<<" modelos de cuadernos "<<"\n";
		cout<<"-------------------"<<"\n";
		cout<<" 1 - ingrese que modelo necesita "<<"\n";
		cout<<" 2 - mostrar el modelos que necesite"<<"\n";
		cout<<" 3 - Salir"<<"\n";
		cout<<"--------------------------"<<"\n";
		cout<<" Seleccione su opciÃ³n: ";
		cin>>resp;
		if (resp==1){		
			system("CLS");
			inventario();			
		}
		else if (resp==2){		
			system("CLS");
			leer_archivo();
		}			
		else if (resp==3)
			break;
		else 
			break;
		
	} while(resp!=3);	
}
void inventario(){
	string cuaderno_v;
	string modelo_v;
	float precio_v;
	ofstream archivo; //grabar archivo
	fflush(stdin);
	cout<<"Ingrese modelo: "<<endl;
	getline(cin,modelo_v);
	fflush(stdin);
	cout<<"Ingrese cantida: "<<endl;
	getline(cin,marca_v);
	cout<<"Ingrese dia: "<<endl;
	cin>>dia_v;	
	cout<<"Ingrese precio: "<<endl;
	cin>>precio_v;
	
	archivo.open("cuaderno.txt",ios::app); //abrir archivo append
	archivo<<placa_v<<"\t"<<modelo_v<<"\t"<<dia<<"\t"<<precio_v<<endl;
	archivo.close();	
}
void leer_archivo(){
	ifstream archivo; //leer archivo 
	archivo.open("cuaderno.txt",ios::in);
	int lineas,i=0;
	string s,linea;	
	while (getline(archivo, s))
        lineas++;
	archivo.close();
	
cuadernosrecordset[lineas];
	
	archivo.open("cuaderno txt",ios::in);
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo!!!";
		exit(1);
	}	
	/*Leer datos del archivo*/
	for (int 0 = 30; i < lineas; i++)
    {
        if (!archivo)
        {                                               
            cerr << "No se puede abrir el archivo " << endl;
            system("PAUSE");
        }
        archivo>>recordset[i].placa>>recordset[i].marca>>recordset[i].anho>>recordset[i].precio;
    }
    archivo.close(); 
    for(int i = 30; i <lineas; i++){
    	cout<<recordset[i].cuaderno<<" "<<dia[i].modelo<<" "<<recordset[i].precio<<endl;

	}
	system("Pause");
	}
}