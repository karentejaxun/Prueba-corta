#include "Propietario.cpp"
#include <iostream>
using namespace std;
main(){
       string nombres,apellidos,direccion,fecha_nacimiento;
       int telefono,dpi,cui;
       
       /*cout<<"ingresar DPI"<<endl;
       cin>>dpi;
       cout<<"ingresar CUI"<<endl;
       cin>>cui;*/
       cout<<"ingresar Nombres"<<endl;
       cin>>nombres;
       cout<<"Ingresar Apellidos"<<endl;
       cin>>apellidos;
       cout<<"Ingresar su Direccion"<<endl;
       cin>>direccion;
       cout<<"Ingresar fecha de nacimiento"<<endl;
       cin>>fecha_nacimiento;
       cout<<"Ingresar Telefono"<<endl;
       cin>>telefono;
       cout<<"ingresar DPI"<<endl;
       cin>>dpi;
       cout<<"ingresar CUI"<<endl;
       cin>>cui;
       
       Propietario obj = Propietario(nombres,apellidos,direccion,fecha_nacimiento,telefono,dpi , cui);
       obj.mostrar();
       
	   system("pause");
}

