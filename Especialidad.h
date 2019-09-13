#pragma once
#ifndef ESPECIALIDAD_H
#define ESPECIALIDAD_H


#include <string>
#include <ostream>

class Especialidad {
	std::string nombre;

public:
	Especialidad();

	Especialidad(const std::string& nombre);

	virtual ~Especialidad();

	friend std::ostream& operator<<(std::ostream& os, Especialidad& especialidad);

	std::string& getNombre();

	void setNombre(const std::string& nombre);
};

#endif