//Sumar diez números introducidos por teclado.

#include <iostream>
using namespace std;
int main()
{
	int SU=0, NU;
	cout<<"Ingrese 10 Números:"<<endl;
	for (int i=1;i<=10;i++)
	{
		cin>>NU;
		SU=SU+NU;
	}
cout<<"Resultado: "<<SU<<endl;
return 0;
}
