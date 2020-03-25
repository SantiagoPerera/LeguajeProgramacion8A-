//Calcular la media de cincuenta números e imprimir su resultado.

#include <iostream>
using namespace std;
int main()
{
	int N, Media;

	for(int i=1;i<=50;i++)
	{
		N+=i;
	}

	Media=(N/50);

cout<<"Media: "<<Media<<endl;
return 0; 
} 
