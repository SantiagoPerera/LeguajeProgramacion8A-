#include <iostream>
using namespace std;
int main() 
{
	int elementos[1000],n,x;
		cout<<"Elementos: "<<endl;
		cin>>n;
		cout<<"Suma requerida: "<<endl;
		cin>>x;


		for(int i = 0; i<n; i++)
		{
			cout<<"Arreglo: "<<endl;
			cin>>elementos[i];
		}
	
		cout<<"Salida: "<<endl;
		for(int i = 0; i<n; i++)
		{
			cout<<elementos[i];
		}
		cout<<endl;
return 0;
}
