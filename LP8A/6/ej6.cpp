//Calcular la suma de los cuadrados de los cien primeros números naturales.

#include <iostream>
using namespace std;
int main()
{
	int i;
	int x;

	for(i=1;i<=100;i++)
	{
		x=x+(i*i);
	}

cout<<"Suma N² es: "<<x<<endl;
return 0; 
}
