#include "persona.h"
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
persona::persona()
{
    //ctor
}

void persona::menu()
{
    int choice;
	char x;
	do
    {
	system("cls");

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t |   SISTEMA GESTION PERSONAS  |"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingreso Personas"<<endl;
	cout<<"\t\t\t 2. Despliegue Personas"<<endl;
	cout<<"\t\t\t 3. Modifica Personas"<<endl;
	cout<<"\t\t\t 4. Busca Personas"<<endl;
	cout<<"\t\t\t 5. Borra Personas"<<endl;
	cout<<"\t\t\t 6. Exit"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5/6]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    	do
    	{
    		insertA();
    		cout<<"\n\t\t\t Agrega otra persona(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');
		break;
	case 2:
		display();
		break;
	case 3:
		//modify();
		break;
	case 4:
		//searchA();
		break;
	case 5:
		//delet();
		break;
	case 6:
		exit(0);
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	getch();
    }while(choice!= 6);
}
void persona::insertA()
{
	system("cls");
	fstream file;
	cout<<"\n------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------------------------Agregar detalles Persona ---------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa Id Persona         : ";
	cin>>id;
	cout<<"\t\t\tIngresa Nombre Persona     : ";
	cin>>name;
	cout<<"\t\t\tIngresa Telefono Persona   : ";
	cin>>phone;
	cout<<"\t\t\tIngresa Universidad Persona: ";
	cin>>college;
	cout<<"\t\t\tIngresa Direccion Persona  : ";
	cin>>address;
	file.open("ParticipantRecord.txt", ios::app | ios::out);
	file<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< name <<std::left<<std::setw(15)<< phone <<std::left<<std::setw(15)<< college <<std::left<<std::setw(15)<< address << "\n";
	file.close();
}
void persona::display()
{
	system("cls");
	fstream file;
	int total=0;
	cout<<"\n-------------------------Tabla de Detalles de Personas -------------------------"<<endl;
	file.open("ParticipantRecord.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> id >> name >> phone >> college >> address;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t Id Persona: "<<id<<endl;
			cout<<"\t\t\t Nombre Persona: "<<name<<endl;
			cout<<"\t\t\t Telefono Persona: "<<phone<<endl;
			cout<<"\t\t\t Universidad Persona: "<<college<<endl;
			cout<<"\t\t\t Direccion Persona: "<<address<<endl;
			file >> id >> name >> phone >> college >> address;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
}
