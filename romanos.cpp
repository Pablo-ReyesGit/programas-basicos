#include<iostream>

using namespace std;
int main()
{
	int a, b, c, d;
	cout<<"conversion de numeros arabicos a romanos"<<endl;
	cout<<"escriba  cada numero, si no hay millar, escriba 0 en su posicion"<<endl;
	cout<<"millar"<<endl;
	cin>>a;
	cout<<"centena"<<endl;
	cin>>b;
	cout<<"decena"<<endl;
	cin>>c;
	cout<<"unidad"<<endl;
	cin>>d;
	
		switch (a){
			case 1:
				cout<<"M";
				break;
			case 2:
				cout<<"MM";
				break;
			case 3:
				cout<<"MMM";
				break;
			case 4:
				cout<<"MV";
				break;
			case 5:
				cout<<"V";
				break;
			case 6:
				cout<<"VM";
				break;
			case 7:
				cout<<"VMM";
				break;
			case 8:
				cout<<"VMMM";
				break;
			case 9:
				cout<<"MX";
				break;
			case 0:
				cout<<"_";
				break;	
			default:
			cout<<"error"<<endl;									
		}	
	switch (b){
			case 1:
				cout<<"C";
				break;
			case 2:
				cout<<"CC";
				break;
			case 3:
				cout<<"CCC";
				break;
			case 4:
				cout<<"CD";
				break;
			case 5:
				cout<<"D";
				break;
			case 6:
				cout<<"DC";
				break;
			case 7:
				cout<<"DCC";
				break;
			case 8:
				cout<<"DCCC";
				break;
			case 9:
				cout<<"CM";
				break;
			case 0:
				cout<<"_";
				break;	
			default:
			cout<<"error"<<endl;	
	}
		switch (c){
			case 1:
				cout<<"X";
				break;
			case 2:
				cout<<"XX";
				break;
			case 3:
				cout<<"XXX";
				break;
			case 4:
				cout<<"XL";
				break;
			case 5:
				cout<<"L";
				break;
			case 6:
				cout<<"LX";
				break;
			case 7:
				cout<<"LXX";
				break;
			case 8:
				cout<<"LXXX";
				break;
			case 9:
				cout<<"XC";
				break;
			case 0:
				cout<<"_";
				break;	
			default:
			cout<<"error"<<endl;
	}
		switch (d){
			case 1:
				cout<<"I";
				break;
			case 2:
				cout<<"II";
				break;
			case 3:
				cout<<"III";
				break;
			case 4:
				cout<<"IV";
				break;
			case 5:
				cout<<"V";
				break;
			case 6:
				cout<<"VI";
				break;
			case 7:
				cout<<"VII";
				break;
			case 8:
				cout<<"VIII";
				break;
			case 9:
				cout<<"IX";
				break;
			case 0:
				cout<<"_";
				break;	
			default:
			cout<<"error"<<endl;	
	}
	}
	//intente usar vercores, pero en ciertos casos el programa funcionaba, y en otros no
