#include "iostream"
#include <stdio.h>
using namespace std;
int main()
{
	int NUM,CUA,CUB;
	cout<<"hola! este programa 1.9 calcular el cuadrado y el cubo de un numero entero positivo"<<"\n";
	cout<<"por favor ingrese el valor de numero:"<<"\n";
	cin>>NUM;
	CUA=NUM*NUM;
	CUB=NUM*CUA;
	cout<<"el cuadrado de "<<NUM<<"es:"<<CUA<<"y el cubo es:"<<CUB<<endl;
		return 0;
}
