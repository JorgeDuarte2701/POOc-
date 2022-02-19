#include "Persona.cpp"
#include <iostream>
using namespace std;

class Propietario : Persona {
	//atributos
	private : string nit,double cui;
	
	//constructor
	public :
	Cliente (){
		}
		
		Propietario(string nom,string ape,string dire,int tel,string fn,string n,double c) : Persona(nom,ape,dire,tel,fn){
		nit =n;		
		}
		
	//metodos
	//set (modificar)
	void setNit(string n){nit=n;}
	void setCui(double cui){cui=c;}
	void setNombres(string nom){nombres=nom;}
	void setApellidos(string ape){apellidos=ape;}
	void setDireccion(string dire){direccion=dire;}
	void setTelefono(int tel){telefono=tel;}
		void setTelefono(string fn){fecha_N=fn;}
	//get (mostrar)
	string getNit(){return nit;}
	double getCui(){return cui;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	int getTelefono(){return telefono;}
	string getfecha_N(){return fecha_N;}

	
	void mostrar(){
		cout<<"---------------------------"<<endl;
		cout<<nit<<","<<cui<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<fecha_N<<endl;
	}
};
