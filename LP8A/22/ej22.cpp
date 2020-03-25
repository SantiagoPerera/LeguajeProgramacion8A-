#include <iostream>
using namespace std;
int main()
{
	int x, y , aux;
	cout<<"Ingrese el Valor de X: "<<endl;
	cin>>x;

	cout<<"Ingrese el Valor de Y:"<<endl;
	cin>>y;

	aux = x;
	x = y;
	y = aux;

	cout<<"\nEl Nuevo Valor de X: "<<endl;
	cout<<x<<endl;
	cout<<"El Nuevo Valor de Y: "<<endl;
	cout<<y<<endl;
return 0;
}
