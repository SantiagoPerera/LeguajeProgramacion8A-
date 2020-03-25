//Escribir una algoritmo que lea los datos de entrada de un archivo que sólo contiene números y sume los números positivos.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand(time(NULL));
	int lim_inf =-10;
	int lim_sup =10;
	int s=0;

	for(int i=0;i<10;i++){
		int v =lim_inf + rand()%(lim_sup + 1 - lim_inf);
		cout<<v<<endl;

	if(v>0)
	{
		s+=v;
	}
		
}
	int v=rand()%100;	

cout<<"SUMA NÚMEROS POSITIVOS:"<<endl;
cout<<s<<endl;
return 0;
} 
