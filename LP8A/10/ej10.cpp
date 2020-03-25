//Calcular los N primeros múltiplos de 4 (4 inclusive), donde N es un valor e introducido por teclado.

#include <iostream>
using namespace std;

int N = 0;
int M = 0;
int NM = 1;

void ingreso ()
{
	cin>>N;
return;
}

void ciclo ()
{
	ingreso();
	cout<<"Múltiplo de 4: "<<endl;
	for (int i = 0; i < N; i++)
	{
		M = 4 * NM++;
		cout<<M<<endl;
	}
return;
}

int main()
{
	cout<<"Cantidad de Múltiplos: "<<endl;
	ciclo();
return 0;
}

