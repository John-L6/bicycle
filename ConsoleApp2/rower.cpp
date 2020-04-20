#include "rower.hpp"

// plik rower.cpp
// https://www.p-programowanie.pl/cpp/klasy-c/

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;


//class	bicycle {

	void	bicycle::Set_frame(string x_name, double x_weight, int x_no) {	//definicja metody wewn¹trz klasy
		this->frame_name = x_name;
		this->frame_weight = x_weight;
		this->frame_no = x_no;
	}

	// ustaw dane roweru:	waga_czêœci,		waga_kó³,		iloœæ_kó³
	int	bicycle::Set_bicycle_inner(double x_p_weight, double x_w_weight, int x_wheel) {		//definicja metody wewn¹trz klasy
		this->bic_parts_weight = x_p_weight;
		this->bicycle_wheel = x_wheel;
		this->bic_wheel_weight = x_w_weight;
		return(1);
	}

	double	bicycle::Sum_bicycle_weight() {			//definicja metody wewn¹trz klasy
		double jd_sum;						//zmienna pomocnicza
		jd_sum = this->bic_parts_weight;	//sumuje wagi do wagi ca³ego roweru
		jd_sum += this->bic_wheel_weight;
		jd_sum += this->frame_weight;
		this->bic_weight = jd_sum;
		return(jd_sum);
	}

	void	bicycle::Set_bicycle_name(string x_name) { // cialo metody poza klas¹
		this->bic_name = x_name;
	}


int jj_proba_klasy1()
{	//Funkcja tworzy klasê Ciooc, wype³nia j¹, drukuje i usuwa
	//osoba *Karol = new osoba;
	double jd_sum;						//zmienna pomocnicza

	// Obiektem nazywamy egzemplarz klasy. Tworzymy go jak zmienn¹, poniewa¿, 
	// w istocie, to jest zmienna.
	bicycle	*Ciooc = new bicycle;	//utworzenie DYNAMICZNE obiektu- egzemparza klasy



	Ciooc->Set_frame("Raynolds", 3.34, 53);	//Parametry ramy
	Ciooc->Set_bicycle_name("Colnago-26");
	Ciooc->Set_bicycle_inner(3.66, 0.7, 2);

	jd_sum = Ciooc->Sum_bicycle_weight();

	// Mo¿emy utworzyæ obiekt statyczny lub dynamiczny alokuj¹c pamiêæ i u¿ywaj¹c 
	// wskaŸników. Obiekt tworzy siê za pomoc¹ operatora new i przypisuje do 
	// wskaŸnika tego samego typu co klasa. 
	// Do sk³adników klasy dynamicznej najlepiej odwo³ywaæ siê operatorem strza³ki ->.
	// Zosta³ on stworzony w celu uproszczenia czytelnoœci kodu.
	// Obiekty dynamiczne zawsze trzeba rêcznie usun¹æ z pamiêci (delete).


	cout << "Rower marka: " << Ciooc->bic_name;
	cout << ", waga roweru: " << jd_sum << endl;

	delete Ciooc;						//usuniêcie DYNAMICZNE egzemparza klasy

	return 0;
}
