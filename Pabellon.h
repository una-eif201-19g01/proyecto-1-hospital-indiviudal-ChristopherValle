#pragma once
#ifndef PABELLON_H
#define PABELLON_H

#include <string>
#include <vector>
#include <ostream>
#include "Cama.h"


class Cama;

class Pabellon {
	std::string letra;
	char genero;
	int cantidad;
	int cantidad;
	int capacidad;
	std::vector<Cama*> camas;

public:
	Pabellon();
	explicit Pabellon(std::string& letra, char genero, int cantidad);
	virtual ~Pabellon();

	void setLetra(std::string& codigo);
	void setGenero(char genero);
	void setCantidad(int cantidad);
	void setCapacidad(int capacidad);
	void setCamas(std::vector<Cama*>& camas);

	std::vector<Cama*>& getCamas();
	std::string& getLetra();
	char getGenero();
	int getCantidad();
	int getCapacidad();

	void nuevaCama(Cama* _cama);
};

#endif
