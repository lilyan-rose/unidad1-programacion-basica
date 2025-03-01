#include "iostream"
#include "string"

using namespace std;

int main()
{
	int a,b;
	float RES;
	cout<<"hola! este programa 1.7 escribe el resultado de la expresion"<<"\n";
	cout<<"por favor ingresa el valor de a:"<<"\n";
	cin >>a;
		cout<<"por favor ingresa el valor de b:"<<"\n";
	cin >>b;
	RES=((a+b)*(a+b))/3.0;
	printf("\n el resultado de la expresion es %5.4f \n",RES);
	cout<<"el resultado de la expresion es"<<RES<<"\n";
	return 0;
}
