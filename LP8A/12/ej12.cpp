//Dados 10 números enteros, visualizar la suma de los números pares de una lista, cuantos números pares existen y cuál es la media aritmetica de los números impare.

#include<iostream>
using namespace std;
int main()
{
	int NUMERO;
	int SUMA =0;
	int IMPAR =0;
	int MEDIA;
	int a=0;
	int n=0;
	int i;

	for(i=1;i<=10;i++)
	{
		cout<<"TECLEA LOS NÚMEROS: ";
		cin>>NUMERO;

		if(NUMERO%2 ==0)
		{
			SUMA=SUMA+NUMERO;
			n=n+1;
		}

		else
		{
			IMPAR=IMPAR+NUMERO;
			a=a+1;
			MEDIA=IMPAR/a;
		}
     	}
cout<<"SUMA DE NÚMEROS PAR: "<<SUMA<<endl;
cout<<"¿CUANTOS NÚMEROS PARES? "<<n<<endl;
cout<<"MEDIA NÚMEROS IMPAR: "<<MEDIA<<endl;
return 0;
}
