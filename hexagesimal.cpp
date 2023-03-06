#include<iostream>

using namespace std;
int main()
{
	int num, residuo;
	string resultado, rev;
	cout<<"ingrese un numero"<<endl;
	cin>>num;
	
	do
	{
		residuo = num%16;
		num/=16;
		switch (residuo)
		{
			case 15:
			resultado +="F";
			break;
			
			case 14:
			resultado +="E";
			break;
			 
			case 13:
			resultado +="D";
			break; 
			
			case 12:
			resultado +="C";
			break; 
			
			case 11:
			resultado +="B";
			break; 
			
			case 10:
			resultado +="A";
			break; 
			
			case 9:
			resultado +="9";
			break; 
			
			case 8:
			resultado +="8";
			break; 
			
			case 7:
			resultado +="7";
			break; 
			
			case 6:
			resultado +="6";
			break; 
			
			case 5:
			resultado +="5";
			break; 
			
			case 4:
			resultado +="4";
			break; 
			
			case 3:
			resultado +="3";
			break; 
			
			case 2:
			resultado +="2";
			break; 
			
			case 1:
			resultado +="1";
			break; 
			
			case 0:
			resultado +="0";
			break; 
		} 
	}while(num>0);
	
		for (int i = resultado.size() - 1; i >= 0; i--) {
		rev = rev.append(1, resultado[i]);
	}
	cout<<rev<<endl;
	system("pause");
}
