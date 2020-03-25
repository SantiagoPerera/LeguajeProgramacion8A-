//Lee una serie de números distintos de cero (el último número de la serie es -99) y obtener el numero mayor. Como resultados se debe visualizar el número mayor y un mensaje de indicación de número negativo, caso de que se haya leido un numero negativo.

#include <iostream>
using namespace std;
int main(){

	for(int i=-1;i>=-99;i--)
	{
	cout<<i<<endl;
		if(i==-99)
		{
		cout<<"Num. Negativos"<<endl;
		}	
	}
return 0;
}

