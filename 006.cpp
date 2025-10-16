//Ejercicio 3
#include <iostream>
#include <cmath>//Este codigo se usa con fmod y fabs. Funciona en codigos enteros, decimales y varias formulas avanzadas.
using namespace std;
int main()
{
	double celsius, fahrenheit, umbral;
	cout<<"Ingrese la temperatura en grados Celsius: ";
	cin>>celsius;
	if(celsius<-100||celsius>100)//este es rango que debe de tener para funcionar.
	{
		cout<<"Error: La termperatura debe estar entre -100 y 100 grados Celsius. "<<endl;
		return 1;//Nuevamente regresa al menu inicial.
	}
	fahrenheit=celsius*9.0/5.0+32.0;//El ternario para transformar a Fahrenheit.
	string clasificacion=(celsius<0)? "Muy Frio"://Estamos clasificando con los operadores ternarios en un estilo anidado.
						(celsius>=0 && celsius<=15)? "Frio" :
						(celsius>15 && celsius<=30)? "Templado":"Caliente";
	cout<<"Temperatura en Fahrenheit: "<<fahrenheit<<" F "<<endl;
	cout<<"Clasificacion de la temperatura: "<<clasificacion<<endl;//nos mostrara los resultados de esta conversión y su clasificación.
	cout<<"Ingrese una termperatura umbral para comparacion: ";
	cin>>umbral;
	bool Mayor=(celsius>umbral);
	//bool Multiplo=(fmod(celsius,5.0)==0); => verifica si es multiplo. Se divide celsius y 5 dando como resultado 0, llamos a la solucion
	bool Multiplo = (static_cast<int>(celsius) % 5 == 0);//Comprobamos si celsius es multiplo y comvierte a entero ysando %5, si el resultado es 0. Llegamos a la solucion. 


	cout<<" Es la temperatura mayor que el umbral? "<<(Mayor?" Si ":" No ")<<endl;
	cout<<" Es la temperatura un multiplo de 5? "<<(Multiplo?" Si ": " No ")<<endl;
	
return 0;
}