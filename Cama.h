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
	explicit Cama(int numero, Pabellon  *pabellon);
	virtual ~Cama();

	void setCodigo(int numero, std::string& letra);
	void setEstadoCama(std::string estado);
	
	std::string& getCodigo();
	std::string& getEstadoCama();
};

#endif
