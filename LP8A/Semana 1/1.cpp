#include <iostream>
using namespace std;
void contador(int n)
{
	if(n>0)
	{
		while(n!=1)
		{
			if(n%2 == 0)
			{
				n=n/2;
			}
			else
			{
				n=n*3+1;
			}
			printf("%i ",n);
		}
	}
return;
}

int main (void)
{
	int n;
	printf("Entrada: ");
	cout<<endl;
	scanf("%i",& n);
	
	cout<<"Salida: "<<endl;
	contador(n);
	cout<<endl;
}


