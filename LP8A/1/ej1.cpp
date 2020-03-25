//Se desea calcular independiente la suma de los números pares e impares comprendidos entre 1 y 200.

#include <iostream>
using namespace std;
int main()
{

	int P=0;
	int I=0;

	for(int i=1; i<=200; i++)
	{
		if(i%2==0)
		{
		P+=i;
		}
		else
		{
		I+=i;
		}
	}

	cout<<"Suma Par: "<<P<<endl;
	cout<<"Suma Impar: "<<I<<endl;

return 0;
}

