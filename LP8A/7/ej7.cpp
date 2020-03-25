//Sumar los números pares del 2 al 100 e imprimir su valor.

#include <iostream>
using namespace std;
int main()
{
	int NP;
		for(int i=2;i<=100;i+=2)
		{
			NP+=i;
		}
cout<<"Suma Números Pares: "<<NP<<endl;
return 0;
}
