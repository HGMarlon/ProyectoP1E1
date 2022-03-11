#include <iostream>
using namespace std;

class Persona
{
public:
    int mEdad,mtelefono;
    string mNombre, mDireccion, mID, mcorreo;
    Persona(string Nombre, string Correo, string ID, string Direccion, int Edad, int Telefono)

    {
        mNombre=Nombre;
        mcorreo=Correo;
        mID=ID;
        mDireccion=Direccion;
        mEdad=Edad;
        mtelefono=Telefono;

    }
    void Registrar()
    {
        cout << mNombre << endl << "Has ingresado a la clase principal" << endl;
    }
};

class Empleado: public Persona
{
public:
    Empleado(string Nombre, string Correo, string ID, string Direccion, int Edad, int Telefono):Persona(Nombre,Correo,ID,Direccion,Edad,Telefono)
    {
        mNombre= Nombre;
        mcorreo=Correo;
        mID=ID;
        mDireccion=Direccion;
        mEdad=Edad;
        mtelefono=Telefono;

    }
    void Mostrar()
    {
        cout << endl<< "Has ingresado a la subclase"<< endl;
        cout<<endl<< "Ingreso al método Datos del Empleado"<< endl;
        cout<<"Nombre del Empleado:"<< mNombre<< endl;
        cout<<"Correo Electronico:"<< mcorreo<< endl;
        cout<<"No. de Identificacion:"<< mID<< endl;
        cout<<"Direccion:"<< mDireccion<< endl;
        cout<<"Edad:"<< mEdad<< endl;
        cout<<"Numero de telefono personal:"<< mtelefono<< endl;
    }

};
int main()
{
    Persona PersonaUno(" ", "innovatikc@gmail.com", "785DF4", "Edificio Central zona 1", 50, 47852146 );
    Empleado PersonaDos("Carlos", "scarlos@gmail.com", "8KLD8995", "av. Las Americas 10-01", 35, 58961574);


    PersonaUno.Registrar();
    PersonaDos.Mostrar();

    return 0;
}
