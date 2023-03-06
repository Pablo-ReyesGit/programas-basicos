#include<iostream>

using namespace std;
int main()
{
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
}
