//Ejercicio 2
#include <iostream>
using namespace std;
int main()
{
	double precio, impuesto, descuento, final;
	string categoria;
	cout<<"Ingrese el valor: ";
	cin>> precio;
	cout<<"Ingrese la categoria (Electronica, Ropa, Alimentos) : ";
	cin>> categoria; 
	descuento=(precio>1000)? precio*0.9: precio; //Aplica el descuento si el precio es mayor a 1000.
	impuesto=(categoria== "Electronica")? descuento*0.20: //Calcula los impuestos segun la categoria.
			 (categoria== "Ropa")? descuento*0.10:
			 (categoria== "Alimentos")? descuento*0.05: 0.0;
	final= descuento+impuesto;//Solo agrega el impuesto si aplica.	
	cout<<"Precio inicial: " <<precio<<endl;
	cout<<"Categoria: " <<categoria<<endl;
	cout<<"Descuento aplicado: "<<((precio>1000)? " Si (10%)":"No")<<endl;
	cout<<"Impuesto: " <<((categoria == "Electronica") ? "20%" :
                          (categoria == "Ropa") ? "10%" :
                          (categoria == "Alimentos") ? "5%" : "0%") << endl;
	cout<<"Impuesto calculado: "<<impuesto<<endl;
	cout<<"Total: "<<final<<endl;
	
 return 0;
	}
