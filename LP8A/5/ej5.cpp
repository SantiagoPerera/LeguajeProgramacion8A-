//Se trata de escribir el algoritmo que permita emitir la factura correspondiente a una compra de un articulo determinado, del que se adquiere una o varias unidades. El IVA a aplicar es del 15% y si el precio bruto (precio venta mas IVA) es mayor de 50000 pesetas, se debe realizar un descuento del 5%.

#include<iostream>
using namespace std;
int main()
{

	int X;
	int IVA;
	//Precio Neto
	int PN;
	//Descuento
	int D;
	//Precio "NUEVO"
	int PNV;

	cout<<"¿VALOR DEL PRODUCTO? ";
	cin>>X;
	IVA=X*.15;
	PN=X+IVA;
	
	if(PN>50000)
	{
		D=PN*.05;
		cout<<"DESCUENTO"<<D<<"$"<<endl;
		PNV=PN-D;
		cout<<"APLICANDO DESCUENTO AL PRECIO"<<PNV<<endl;
	}

	cout<<"PRECIO NETO: "<<PN<<endl;

return 0;
}
