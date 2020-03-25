#include <iostream>

using namespace std;

int potencia(int m, int n)

{
	if(n==0)
		return 1;
	else
		return potencia(, n-1)*m;
}

int main()
{
    int n, m, pot;
    cin>>m;
    cin>>n;
    pot=potencia(m,n);
    cout<<pot<<endl;
    return 0;
}
