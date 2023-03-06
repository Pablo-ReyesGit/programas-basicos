#include<iostream>
using namespace std;
int main()
{
	int n1, n2, opcion, total;
	cout<<"ingrese un numero"<<endl;
	cin>>n1;
	cout<<"ingrese otro numero"<<endl;
	cin>>n2;
	cout<<"que desea hacer, 1 suma, 2 resta, 3 multiplicacion, 4 division"<<endl;
	cin>>opcion;
	  switch (opcion) {
        case 1:
            cout << n1 << " + " << n2 << " = " << n1 + n2;
            break;
        case 2:
            cout << n1 << " - " << n2 << " = " << n1 - n2;
            break;
        case 3:
            cout << n1 << " * " << n2 << " = " << n1 * n2;
            break;
        case 4:
            cout << n1 << " / " << n2 << " = " << n1 / n2;
            break;
        default:
        	cout<<"escriba una opcion valida\n";
	system("pause");
}
}
