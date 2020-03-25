//¿N es primo?

#include <iostream>
using namespace std;
int main() 
{
	int divisor = 1, divisores = 0, num = 0;
	cout<<"Ingrese numero: "<<endl;
	cin>>num;

	do
	{
		if(num % divisor == 0)
		{
			divisores++;
		}
	divisor++;
	}

	while(divisor <= num);

	if(divisores == 2)
	{
		cout<<"El numero es PRIMO:"<<endl;
		cout<<num<<endl;
	}
	else
	{
		cout<<"El numero NO es PRIMO:"<<endl;
		cout<<num<<endl;
	}
return 0;
}
