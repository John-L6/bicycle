#pragma once
// plik nag³ówkowy rower.hpp
// https://www.p-programowanie.pl/cpp/klasy-c/

//#include <cstdlib>
//#include <iostream>
#include <string>

using namespace std;


class rower
{
public:
	int	bic_left;			//pole publiczne
};



class	bicycle {
private:
	string	frame_name;			//pole prywatne
	double	frame_weight;
	int		frame_no;			//pole prywatne

public:

	string	bic_name;			//pole publiczne
	double	bic_weight;
	double	bic_parts_weight;
	double	bic_wheel_weight;
	int		bicycle_wheel;		//pole publiczne ko³o rowerowe

	void	Set_frame(string x_name, double x_weight, int x_no);
	// ustaw dane roweru:	waga_czêœci,		waga_kó³,		iloœæ_kó³
	int		Set_bicycle_inner(double x_p_weight, double x_w_weight, int x_wheel);
	double	Sum_bicycle_weight();
	void	Set_bicycle_name(string x_name);	//tylko deklaracja metody

}; //end klasy bicycle


int jj_proba_klasy1();
