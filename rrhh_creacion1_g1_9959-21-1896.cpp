#include <iostream>
using namespace std;

class Personas
{
    public:
        int Edad, Id, Direccion, telefono;
        string Nombre;
        Personas (int xEdad, int xId, int xDireccion, int xtelefono, string xNombre)

        {
            Edad= xEdad ;
            Id = xId;
            Direccion = xDireccion;
            telefono = xtelefono;
            Nombre = xNombre;
        }
private:


};
class empleado : public Personas
{
public:
    empleado (int xEdad, int xId,int xDireccion,int xtelefono, string xNombre) : Personas(xEdad,xId, xDireccion, xtelefono, xNombre)
    {
            Edad= xEdad;
            Id = xId;
            Direccion = xDireccion;
            telefono = xtelefono;
            Nombre = xNombre;
    }
    void Mostrar()
    {
        cout<<"usted a ingreso a: MOSTRAR..."<< endl;

        cout<<"Nombre: " <<Nombre<< endl;
        cout<<"edad: " <<Edad<< endl;
        cout<<"Numero de Identificación: " <<Id<< endl;
        cout<<"Direccion: " <<Direccion<< endl;
        cout<<"Numero telefonico: " <<telefono<< endl;
    }
    void Editar ()
    {
        cout<<"usted a ingreso a: EDITAR..."<< endl;

    }
     void Consultar ()
    {
        cout<<"usted a ingreso a: Consultar..."<< endl;

    }
private:

};

int main ()
{

    empleado Pepito(25, 3740101, 945, 57597141, "Pepito");
    Pepito.Mostrar();
    Pepito.Editar();
    Pepito.Consultar();
    return 0;
}


