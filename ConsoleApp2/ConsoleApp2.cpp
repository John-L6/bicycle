// ConsoleApp2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się 
// i kończy wykonywanie programu.

#include <cstdlib>
#include <iostream>
#include <string>
// tak nie można zrobić: #include "jj_lib.cpp"
#include "rower.hpp"

using namespace std;

class osoba {
  public:
	int wiek;
	int wzrost;
};

//--- wyszczególnienie funkcji ---
int j_print_Karol();
int j_print_hello();

//==============START====================
int main()
{
	j_print_hello();
	j_print_Karol();

	jj_proba_klasy1();	//uruchamia klasę z rower.cpp

	cout << "Wykonano wszystko. " << endl;
	system("Pause");
	return 0;
}
//==============STOP=====================

int j_print_Karol()
{
	osoba Karol;

	Karol.wiek = 21;
	Karol.wzrost = 171;
	cout << "Karol ma lat: " << Karol.wiek;
	cout << ", i ma wzrostu: " << Karol.wzrost << endl;
	return 0;
}


int j_print_hello()
{
	std::cout << "Hello World!\n";
	//std::system("pause");
	return(0);

}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie
