//Calcular la nota media de los alumnos de una clase considerando n-número de alumnos y c-número de notas de cada alumno.

#include<iostream>
using namespace std;
int main()
{

	int i;
	int SU=0;
	int NU;
	int CA;
	int ME;

	cout<<"¿ALUMNOS EN EL SALÓN?"<<endl;
	cin>>NU;

	for(i=1;i<=NU;i++)
	{

		cout<<"¿CALIFICACIÓN "<<i<<"?"<<endl;
		cin>>CA;
		SU=SU+CA;
	}

	ME=SU/NU;

cout<<"PROMEDIO DE LOS ALUMNOS EN EL SALÓN:"<<ME<<endl;
return 0;
}
