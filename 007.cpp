//Ejercicio 4
#include <iostream>
using namespace std;
int main()
{
	int secreto=7;
	int numero;
	int contador=0;
	const int minimo=5;
	bool adivinado=false;
	string nombre;
	cout<<"Desea participar? Ingrese su usuario:  ";
	cin>>nombre;//Se puede ingresar cualquier palabra.
	cout << "Se usara el numero secreto fijo. "<< endl;
	while(contador<minimo && !adivinado)//Buble del participante que nos explica el numero de intentos.
	{
		contador++;//Incrementa el numero de intentos.
		cout<<" Intento "<<contador<<" de "<<minimo<<" : Ingrese su numero: ";
		 cin>>numero;
		 if(numero==secreto)
		 {
		 	adivinado=true;
		 	cout<<" ¡Correcto! Felicidades, lo lograste en "<<contador<<"  intento (s). "<<endl;
		 }
		 else
		 {
		 	string mensaje=(numero>secreto)?" Demasiado alto ":" Demasiado bajo ";
		 	cout<<mensaje<<endl;
		 }
	}
	if (!adivinado)
	{
		cout<<"Lo sentimos, se agotaron sus intentos. El numero era "<<secreto<<"."<<" Gracias por participara."<<endl;
	}
	return 0;
}
