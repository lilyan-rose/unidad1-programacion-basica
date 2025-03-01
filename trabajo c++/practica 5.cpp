#include "iostream"
#include <stdio.h>
using namespace std;
int main()
{
	float ALTURA,BASE;
	float SUPERFICIE,PERIMETRO;
	cout<<"hola! este programa 1.10 calcula la superficie y el perimetro de un rectangulo"<<"\n";
	cout<<"por favor ingrese el valor de la base:"<<"\n";
	cin>>BASE;
cout<<"por favor ingrese el valor de la altura:"<<"\n";
	cin>>ALTURA;
	SUPERFICIE=BASE*ALTURA;
	PERIMETRO=2*(BASE+ALTURA);
	printf("\n la superficie del rectangulo es %5.2f \n",SUPERFICIE);
		printf("\n el perimetro del rectangulo es %5.2f \n",PERIMETRO);
		return 0;
}
