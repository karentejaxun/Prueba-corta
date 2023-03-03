#include "Persona.cpp"
#include <iostream>
using namespace std;
class Propietario : Persona {
	   
	   private : int dpi,cui;
	   
	   public : 
	   
	   Propietario(){
	   }
	   
	   Propietario(string nom,string ape,string dir,string fecna,int tel,int dpi, int cui) : Persona(nom,ape,dir,fecna,tel) {
	   	 dpi = dpi;
	   	 cui = cui;
	   }
	   
	   void setDPI(int dpi){dpi = dpi;}
	   void setCUI(int cui){cui = cui;}
	   void setNOMBRES(string nom){nombres = nom;}
	   void setAPELLIDOS(string ape){apellidos = ape;}
	   void setDIRECCION(string dir){direccion = dir;}
	   void setFECHA_NACIMIENTO(string fecna){fecha_nacimiento = fecna;}
	   void setTELEFONO(int tel){telefono = tel;}
	   
	   int getDPI(){return dpi;}
	   int getCUI(){return cui;}
	   string getNombres(){return nombres;}
	   string getApellidos(){return apellidos;}
	   string getDireccion(){return direccion;}
	   string getFecha_Nacimiento(){return fecha_nacimiento;}
	   int getTelefono(){return telefono;}
	   
	  void mostrar(){
	        
	        cout<<"_____________"<<endl;
	        cout<<nombres<<","<<apellidos<<","<<direccion<<","<<fecha_nacimiento<<","<<telefono<<","<<dpi<<","<<cui<<endl;
		
	  } 
	  
	
	void agregar(){
		cout<<"Metodo Agregar"<<endl;
	}
	
	/*
	void mostrar(){
		cout<<"Metodo Mostrar"<<endl;
	}*/
	  
};
