#include "iostream"
#include <stdio.h>
using namespace std;
int main()
{
	int MAT;
	float PRO,CAL1,CAL2,CAL3,CAL4,CAL5;
	cout<<"hola! este programa 1.8 promedio calificaciones"<<"\n";
	cout<<"porfavor ingrese la matricula del alumno:"<<"\n";
	cin>>MAT;
	cout<<"por favor ingrese la primera calificacion:" << "\n";
	cin>>CAL1;
	cout<<"porfavor ingrese la segunda calificacion:"<<"\n";
	cin>>CAL3;
	cout<<"porfavor ingresa la cuarta calificacion:"<<"\n";
	cin>>CAL4;
	cout<<"porfavor ingresa la quinta calificacion:"<<"\n";
	cin>>CAL5;
	PRO=(CAL1+CAL2+CAL3+CAL4+CAL5)/5.0;
	printf("\n el promedio del alumno con matricula %d es %5.2f \n",MAT,PRO);
	cout<<"\n el promedio del alumno con matricula" <<MAT<< "es" <<PRO<<"\n";
}
