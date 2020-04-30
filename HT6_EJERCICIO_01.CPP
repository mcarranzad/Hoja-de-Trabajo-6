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
	
EJERCICIO#2
 Realice un programa que, dado el peso, la altura, la edad y el gÃ©nero (M/F) de un grupo de N personas que pertenecen a un departamento de la repÃºblica, obtenga un promedio de peso, altura y edad de esta poblaciÃ³n. Los datos deben guardarse de forma ordenada por edad en un archivo de datos. AsÃ­ mismo el programa debe ser capaz leer los datos del archivo y generar un reporte con la media del peso, altura y la edad.
#include <fstream>
#include <iostream>
#include <string>
#include <sstream> 
#include <regex>
#include <iomanip> 
using namespace std;

void menu();
void poblacion();
void reporte();

void menu(){
	int p;
	do {
	
		system("CLS");
		cout<<" ----------SELECCIONAR OPCIÃ“N----------"<<"\n";
		cout<<" 1 - Ingresar Datos "<<"\n";
		cout<<" 2 - Reporte de Datos "<<"\n";
		cout<<" 3 - Salir"<<"\n";
		cout<<"--------------------------"<<"\n";
		cin>> p;
		if (p==1){		
			system("CLS");
			poblacion();			
		}
		else if (p==2){		
			system("CLS");
			reporte();
		}			
		else if (p==3)
			exit (1);
		else
			break;
		
	} while(p>3);
		//cout<< "opcion incorrecta vuela a elegir una opcion valida" << endl;
		system("PAUSE");
		menu();		
}
void poblacion(){
	//Declaracion de variables
	float peso;
	float altura; 
	int edad;
	string genero;
	ofstream archivo;
	 	
	system("CLS");
	//Ingreso de datos
	cout<<"*** Ingreso de Datos de poblacion ***\n\n";
	
	
	cout<<"ingreser peso: "<<endl;
	cin>>peso;
	cin.ignore();
	
	cout<<"ingresar altura:"<<endl;
	cin>>altura;
	fflush(stdin);
	cin.ignore();
	
	cout<<"ingresar edad:"<<endl;
	cin>>edad;
	fflush(stdin);
	cin.ignore();
	
	cout<<"ingresar Genero F/M:"<<endl;
	cin>>genero;
	fflush(stdin);
	cin.ignore();
	
	//insertar datos a archivo
	try{
		archivo.open("estadistica.txt",ios::app);
		archivo<<peso<<"\t"<<altura<<"\t"<<edad<<"\t"<<genero<<endl;   //"|"
		archivo.close();
	}
	catch(exception X){
		cout<<"Error en la manipulacion del archivo"<<endl;
		system("Pause");
	}	
}

void reporte(){
	//declaracion de variables
	int i,edad;
	string genero;
	float peso,altura;	
	string linea;
	float suma= 0;
	
	ifstream archivo;	
	try{
		archivo.open("estadistica.txt",ios::in);	
		cout<<"Datos del archivo:"<<endl;
		cout<<"peso"<<" altura    |"<<"edad|"<<"genero"<<endl;		
		while (archivo>>peso>>altura>>edad>>genero){
			cout<<setw(5)<<peso<<"|"<<setw(5)<<altura<<setw(5)<<edad<<"|"<<setw(5)<<genero<<"|"<<endl;
			i++;					
			suma+=peso;
		}	
		archivo.close();	
		
		cout<<"\nPromedio Global: "<<suma/i<<endl;
		//cout<<"ID de Nota Mas Alta: "<<setw(3)<<mayorid<<" - Nota Mas alta: "<<setw(3)<<mayornota<<endl;
		system("Pause");
	}
	catch(exception& X){
		cout<<"Error en la manipulacion del archivo"<<endl;
		cout<<"Error: "<<X.what()<<endl;
		system("Pause");
	}
	

}
int main(){
	menu ();
	
}
