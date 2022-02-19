#include "Propietario.cpp"
#include <iostream>
using namespace std;
class Persona {

main(){
	string nit, nombres,apellidos,direccion,fecha_N;
	double cui;
	int telefono;
	
	cout<<"Ingresar Nit :";
	cin>>nit;	
	cout<<"Ingresar Cui :";
	cin>>nit;
	cout<<"Ingresar Nombres :";
	cin>>nombres;
	cout<<"Ingresar Apellidos :";
	cin>>apellidos;
	cout<<"Ingresar Direccion :";
	cin>>direccion;
	cout<<"Ingresar Telefono :";
	cin>>telefono;
	//instancia de un objeto
	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,fecha_N,nit,cui);
	obj.mostrar();
	cout<<"Ingresar Nit :";
	cin>>nit;
	obj.setNit(nit);
	
	cout<<"Ingresar Cui :";
	cin>>cui;
	obj.setNit(cui);
	//atributos
	protected : string nombres,apellidos, direccion,fecha_n;
		int telefono;
	
	//constructor
	protected : 
		Persona(){
			
		}	
		Persona(string nom,string ape, string dire, int tel,string fn){
			nombres=nom;
			apellidos=ape;
			direccion =dire;
			telefono=tel;
		}	fecha_N=fN
	//metodo

	void mostrar();
	
};
