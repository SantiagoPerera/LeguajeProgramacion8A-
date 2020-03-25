//Leer 500 numeros enteros y obtener cuantos son positivos.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand(time(NULL));
	int lim_inf =-250;
	int lim_sup =250;
	int P=0;
	
	for(int i=0;i<500;i++)
	{
        	int valor =lim_inf + rand()%(lim_sup + 1 - lim_inf);
        	cout<<valor<<endl;
			
		if(valor>0)
		{
			P+=1;
		}
	}
	int valor=rand()%100;

	cout<<"Cuantos Positivos: "<<P<<endl;

return 0;
}
