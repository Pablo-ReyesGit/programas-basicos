#include<iostream>
#include<math.h>

using namespace std;
int main()
{
	float catetoOp, catetoAd;
		cout<<"calculo de la hipotenusa"<<endl;
		cout<<"ingrese el valor del cateto opuesto"<<endl;
		cin>>catetoOp;
		cout<<"ingrese el valor del cateto adyacente"<<endl;
		cin>>catetoAd;	
	
		cout<<sqrt((catetoOp*catetoOp)+(catetoAd*catetoAd));
	system("pause");
}
