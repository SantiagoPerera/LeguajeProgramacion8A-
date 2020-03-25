//SUMAR UNA SECUENCIA DE ENTEROS DETECTANDO SI ESTÁN ORDENADOS.

#include <iostream>

using namespace std;

int N1 = 0;
int N2 = 0;
int OP = 0;

void registro ()
{
	cin>>N1;
return;
}

void ciclo ()
{
	for (int i = 0; i < 10; i++)
	{
		registro();
		if (N1 > N2)
		{
			N2 = N1;
			OP = N2 + OP;
		}

		else
		{
		cout<<"¡ORDENAR LOS NÚMEROS!"<<endl;
		return;
		}        
	}
return; 
}




int main()
{
	cout<<"TECLEE #10 ENTEROS:"<<endl;
	ciclo();
	cout<<"SUMA: "<<endl;
	cout<<OP<<endl;

return 0;
}
