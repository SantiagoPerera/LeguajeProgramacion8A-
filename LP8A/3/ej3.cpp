//Calcular y visualizar la suma y el producto de los numeros pares comprendidos entre 20 y 400, ambos inclusive.

#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int SP;
	long double PP;

	for(int i=20;i<=400;i++)
	{
		SP+=i;
		PP*=i;
	}

cout<<"Suma Num. Pares: "<<SP<<endl;
cout<<"Producto Num. Pares: "<<PP<<endl;
return 0;
}
