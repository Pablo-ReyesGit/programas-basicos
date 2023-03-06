#include<iostream>
using namespace std;
int main()
{
	double num, resultado1, resultado2;
	int opcion;
	cout<<"este programa ingresara un numero, el cual puede hacer conversion \n";
	cout<<"entre un valor que desea, el programa le dara 2 resultados, y tomara\n";
	cout<<"el resultado que le sea util\n";
	cin>>num;
	cout<<"ahora para ejegir que opcion desea escriba:\n1 kilometros a millas\n2 metros a pulgadas\n3 libras a kilos\n";
	cin>>opcion;
	switch (opcion){
		case 1:
			resultado1=num*1.60934;
			resultado2=num/1.60934;
			cout<<num<<" millas "<<resultado1<<" kilometros"<<endl;
			cout<<num<<" kilometros "<<resultado2<<" millas"<<endl;
			break;
		case 2:
			resultado1=num*39.3701;
			resultado2=num/39.3701;
			cout<<num<<" metros "<<resultado1<<" pulgadas"<<endl;
			cout<<num<<" pulgadas "<<resultado2<<" metros"<<endl;
			break;
		case 3:
			resultado1=num*1.60934;
			resultado2=num/1.60934;
			cout<<num<<" libras "<<resultado1<<" kilos"<<endl;
			cout<<num<<" kilos "<<resultado2<<" libras"<<endl;
			break;
		default:
		cout<<"esta no es una opcion valida\n";
		system("pause");		
	}
}
