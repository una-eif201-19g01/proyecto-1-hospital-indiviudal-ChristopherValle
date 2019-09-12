#pragma once
#ifndef CAMA_H
#define CAMA_H

#include <string>
#include <vector>
#include <ostream>
#include "Pabellon.h"

class Pabellon;

class  Cama {
	std::string codigo;
	std::string estadoCama;
	Pabellon *pabellon;

public:
	Cama();
	explicit Cama(std::string& estadoCama);
	virtual ~Cama();

	void setCodigo(int numero, std::string& letra);
	void setEstadoCama(std::string& nombre);
	
	std::string& getCodigo();
	std::string& getEstadoCama();
};

#endif
