#include <iostream>
using namespace std;
class Persona{
    private: //Atributos
        string Nombre;
        string Email;
        int ID;
        int Edad;
        int Telefono;
    public: //Metodos
        Persona(int,int,int,string,string); //Constructor
        void Obtener_Edad();
        void Registrar();
        void Modificar();
        void Eliminar();
        void Consultar();
};
//Definiendo el contructor para Persona
Persona::Persona(int iID,int iEdad,int iTelefono,string iNombre,string iEmail){
Nombre=iNombre;
Email=iEmail;
ID=iID;
Edad=iEdad;
Telefono=iTelefono;
}
class Empleadocajero : public Persona{
private: //Atributos subclase, además de los heredados
    int CodigoCajero;
public:
    Empleadocajero(int,int,int,string,string,int);//Constructor de la subclase
    void Mostrarcajero();
};
//Definiendo el constructor para Empleadocajero y definiendo lo heredado por Empleado
Empleadocajero::Empleadocajero(int iID,int iEdad,int iTelefono,string iNombre,string iEmail,int iCodigoCajero) : Persona(iID,iEdad,iTelefono,iNombre,iEmail){
CodigoCajero=iCodigoCajero;
}
//Metodos de Persona
void Persona::Obtener_Edad(){
cout<<"Soy "<<Nombre<<" y tengo "<<Edad<<" anios"<<endl;
}
void Persona::Registrar(){
cout<<"Soy "<<Nombre<<" y estoy en el metodo Registrar"<<endl;
}
void Persona::Modificar(){
cout<<"Soy "<<Nombre<<" y estoy en el metodo Modificar"<<endl;
}
void Persona::Eliminar(){
cout<<"Soy "<<Nombre<<" y estoy en el metodo Eliminar"<<endl;
}
void Persona::Consultar(){
cout<<"Soy "<<Nombre<<" y estoy en el metodo Consultar"<<endl;
}
//Metodo de EmpleadoCajero
void Empleadocajero::Mostrarcajero(){
Obtener_Edad();
Registrar();
Modificar();
Eliminar();
Consultar();
cout<<"Mi codigo de cajero es: "<<CodigoCajero<<endl;
}
int main(){
Persona p1 = Persona(123,21,12345678,"Marlon","marlonh@gmail.com");//Datos de la persona 1
p1.Obtener_Edad();
p1.Registrar();
p1.Modificar();
p1.Eliminar();
p1.Consultar();
cout<<""<<endl;
cout<<""<<endl;
Empleadocajero p2 = Empleadocajero(321,18,33221233,"Maria","mariag@gmail.com",322);//Datos de la persona 2
p2.Mostrarcajero();
cout<<""<<endl;
cout<<""<<endl;
cout<<"MARLON ESTUARDO HERNANDEZ GIRON CARNET:9491-21-7312"<<endl;


}
