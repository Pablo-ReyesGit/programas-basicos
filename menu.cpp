#include<iostream>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<windows.h>

using namespace std;
void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);}
      
int main()
{
	int opcion;
	cout<<"ingrese la opcion que desea usar"<<endl;
	cout<<"opcion 1 de operaciones basicas"<<endl;
	cout<<"opcion 2 de determinar si un numero es par o impar"<<endl;
	cout<<"opcion 3 de conversiones"<<endl;
	cout<<"opcion 4 de determinante de palindromo"<<endl;
	cout<<"opcion 5 de conversion de numeros romanos"<<endl;
	cout<<"opcion 6 de tabla de multiplicar"<<endl;
	cout<<"opcion 7 de todas las tablas de multiplicar"<<endl;
	cout<<"opcion 8 de conversion a decimales"<<endl;
	cout<<"opcion 9 de conversion a hexagesimales"<<endl;
	cout<<"opcion 10 de creacion de un triangulo"<<endl;
	cout<<"opcion 11 de mover un punto en toda la pantalla"<<endl;
	cout<<"opcion 12 de calculo de la hipotenusa"<<endl;
	cout<<"opcion 13 de dibujo de un cuadrado"<<endl;
	cout<<"opcion 14 de calculo del promedio"<<endl;
	cout<<"opcion 15 de suma de vectores"<<endl;
	cout<<"opcion 16 de calculo de angulos"<<endl;
	cin>>opcion;
	switch (opcion)
	{
		case 1:
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
		break;
	}
		case 2:
		int a;
		string b;
		cout<<"ingrese un numero"<<endl;
		cin>>a;
		b = a%2==0 ? "par" : "impar";
		cout<<b;
		break;	
		case 3:
		double num, resultado1, resultado2;
	int opciones;
	cout<<"este programa ingresara un numero, el cual puede hacer conversion \n";
	cout<<"entre un valor que desea, el programa le dara 2 resultados, y tomara\n";
	cout<<"el resultado que le sea util\n";
	cin>>num;
	cout<<"ahora para ejegir que opcion desea escriba:\n1 kilometros a millas\n2 metros a pulgadas\n3 libras a kilos\n";
	cin>>opciones;
	switch (opciones){
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
	}
		break;
		case 4:
	string palabra, rev;
	cout<<"ingrese la palabra"<<endl;
	cin>>palabra;
	for (int i = palabra.size() - 1; i >= 0; i--) {
		rev = rev.append(1, palabra[i]);
	}
	if (palabra == rev)
	{
		cout<<palabra<<" es un palindromo"<<endl;
	} 
	else if(palabra !=rev)
	{
		cout<<palabra<<" no es un palindromo"<<endl;	
	}
	return 0;
		break;
		case 5:
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
	//intente usar vectores, pero en unos casos no funcionaba
		break; 
		case 6:
		int n, i;
		cout<<"programa para hacer tablas de multimplicar"<<endl;
		cout<<"escriba el numero que quiera que se haga la tabla de multiplicar"<<endl;
		cin>>n;
		for(i=0; i<=10; i++)
		{
		cout<<n<<" * "<<i<<" = "<<n*i<<endl;
		}
		return 0;
		break;
		case 7:
		int i, j;
		cout<<"tablas de multiplicar"<<endl;
		for(i=0;i<=10;i++)
		{
		for(j=0;j<=10;j++)
		{
			cout<<i<<" * "<<j<<" = "<<i*j<<endl;
		}
		}
		return 0;
		break;
		case 8:
			int n;
		string r;
		cout<<"transformacion de numeros decimales a binarios,\nIngrese un numero"<<endl;
  		cin>>n;
    	while (n != 0){
        	r += ( n % 2 == 0 ? "0" : "1" );
        	n /= 2;
    	}
    	cout<<r;
		system("pause");
		break;
		case 9:
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
		break;
		case 10:
		int i, j, filas;
		cout<<"ingrese el numero de filas del triangulo"<<endl;
		cin>>filas;
		for (i=0; i<filas; i++)
		{
			for (j=0; j<filas-i; j++)
			{
			cout<<" ";
			}
			for (j=0; j<i*2+1; j++)
			{
			cout<<"^";
			}
			cout<<"\n";
		}
		system("pause");
		break;
		case 11:
		char opcion;
		int x1=10, y1=10;
		while (x1!='z')
		{
		system("cls");
		gotoxy(x1,y1);
		cout<<"O";
		opcion=getch();
		switch (opcion)
		{
			case 'w':
				y1--;
			break;
			case 's':
				y1++;
			break;
			case 'd':
				x1++;
			break;
			case 'a':
				x1--;
			break;	
			}	
		}  
		return 0; 
		break;
		case 11;
		float catetoOp, catetoAd;
		cout<<"calculo de la hipotenusa"<<endl;
		cout<<"ingrese el valor del cateto opuesto"<<endl;
		cin>>catetoOp;
		cout<<"ingrese el valor del cateto adyacente"<<endl;
		cin>>catetoAd;	
	
		cout<<sqrt((catetoOp*catetoOp)+(catetoAd*catetoAd));
		break;	
		case 12:
		int i, j, filas;
	cout<<"ingrese la cantidad de filas para el cuadrado"<<endl;
	cin>>filas;
	for(i=0; i<filas; i++)
	{
		for(j=0; j<filas; j++)
		{
			cout<<"* ";
		}
		cout<<"* "<<endl;
	}
	system("pause");
		break;	
		case 13:
		int i, num1, num2, promedio;
	cout<<"ingrese cuantos numeros se van a usar para el promedio"<<endl;
	cin>>num1;
	for(i=0; i<=num1; i++)
	{
		cout<<"ingrese un numero de la secuencia"<<endl;
		cin>>num2;
		promedio+=num2;
	}
	cout<<promedio/num1<<endl;
	system("pause");
		break;	
		case 14;
		int i, vec1[2], vec2[2];
	cout<<"ingrese los valores del primer vector"<<endl;
	for(i=0; i<2; i++)
	{
		cin>>vec1[i];
	}
	cout<<"ingrese los valores del primer vector"<<endl;
	for(i=0; i<2; i++)
	{
		cin>>vec2[i];
	}
	for(int j=0; j<2; j++)
	{
		cout<<"componente "<<j+1<<" "<<vec1[j]+vec2[j]<<" "<<endl;
	}
	system("pause");
		break;
		case 15:
		int a, b;
	cout<<"ingrese los 2 valores para saber cuanto vales los 3 angulos"<<endl;
	cin>>a;
	cin>>b;
	a=a+b;
	cout<<180-a;
	system("pause");	
		break;	
	}
	
}

