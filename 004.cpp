//Ejercicio 1
#include <iostream>
using namespace std;
int main()
{
	int tiempo_experiencia;
	string nivel_educativo;
	string resultado; 
	cout<<"Ingrese su nivel de estudio (Primaria, Secundaria, Universitaria) : ";
	cin>>nivel_educativo;
	cout<<"Ingrese su tiempo de experiencia: ";
	cin>>tiempo_experiencia;
	//Implementamos los operadores ternarios para realizar la ejecucion del resultado.
	resultado=(tiempo_experiencia >=5) && (nivel_educativo=="Universitaria")?
	"¡Felicidades! Usted completa los requisitos para la oferta de trabajo. ":
	(tiempo_experiencia>=3) && (tiempo_experiencia <=5) && (nivel_educativo== "Secundaria")?//Necesario cumplir el tiempo de experiencia para que se cumpla el codigo.
	"¡Felicidades! Usted completa los requisitos para la oferta de trabajo. ":
	" No aprobado: No cumple con los requisitos.";
	cout<<resultado<<endl;
return 0;
}
