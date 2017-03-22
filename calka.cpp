#include <iostream>

using namespace std;

void calka();

int main(){
	
	calka();
	
	system("PAUSE");
	return 0;
}

void calka(){
	int n;				//zmienna do ilosci punktow w przedziale
	double 	wynik=0, 	//zmienna do wyniku
			y1=0,		//zmienna do pierwszego punktu
			y2=0,		//zmienna do 2giego punktu
			h=0,		//zmienna do dlugosci przedzialu
			x=0;		//zmienna pomocnicza do przechowywania aktualnego x
			
	cout << "Podaj ilosc punktow w przedziale: ";
	cin >> n;			
	
	h=1./n;				//wyliczenie dlugosci przedzialu -> zakres{0,1}/ilosc punktow 
	
	for(int k=1; k<=n; k++){
		y1=x*x*x;		
		x=x+h;			//zwiekszenie x o dlugosc 1 przedzialu
		y2=x*x*x;
		wynik=wynik+(y1+y2)*h/2.;
	}
	cout << "Wynik to: "<< wynik <<endl;
	cout << "Blad bezwzgledny wynosi "<<(wynik-0.25)/0.25*100<<"%"<<endl;
}
