#include<iostream>
#include<conio.h>
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
}
	  
      
