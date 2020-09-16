/*
 * czy_parzysta.cpp
 * 
 * Copyright 2020  <>

 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int liczba = 0;  //deklaracja i inincjacja zmiennej
	cout <<"Podaj liczbę: ";
	cin >> liczba;
	if (liczba % 2==0) {
		cout << "Liczba parzysta";
	} else {
		cout <<"Liczba nieparzysta";
	}  
	
	return 0;
}

