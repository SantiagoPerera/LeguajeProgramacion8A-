#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int numero, suma=0;
	
	do
	{
		cout<<"Ingrese un Número: "<<endl;
		cin>>numero;

		if(numero>0)
		{
			suma += numero;
		}
	}

	while(((numero<20) || (numero>30)) && (numero != 0));

	cout<<"Suma es:"<<endl;
	cout<<suma<<endl;

	system("pause");

return 0;
}

