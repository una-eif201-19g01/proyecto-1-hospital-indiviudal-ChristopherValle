#pragma once
#ifndef PACIENTE_H
#define PACIENTE_H

#include <string>
#include <vector>
#include <ostream>
#include "Doctor.h"
#include "Cama.h"

class Paciente {
	int cedula;
	std::string& nombre;
	std::string& direccion; 
	std::string& patologia;
	std::string& tipoDeCirugia;
	std::string& fechaDeCirugia;
	std::string& estado;
	std::string& prioridad;

	char genero;
	Cama* cama;
	Doctor* doctor;

public:
	Paciente();
	Paciente(int cedula, std::string& nombre, std::string& direccion, std::string& patologia, std::string& tipoDeCirugia, char genero, Cama* _cama, Doctor* _doctor);
	~Paciente();

	void agregarDoctor(Doctor* _doctor);

	friend std::ostream &operator<<(std::ostream &os, Paciente &paciente);

	std::string &getNombre();

	const std::string& getDoctor();

	void setCedula(double cedula);

	void setNombre(std::string& nombre);

	void setDireccion(std::string& direccion);
	void setPatologia(std::string& patologia);

	void setTpoDeCirugia(std::string& cirugia);
	void setEstado(std::string& estado);
	void setPrioridad(std::string& prioridad);
	void setFechaDeCirugia(std::string& fecha);

	void setGenero(char genero);

	void setDoctor(Doctor * _doctor);

	void setCama(Cama * cama);

	bool getCedula();
	std::string& getNombre();
	std::string& getDireccion();
	std::string& getPatologia();
	std::string& getTipoDeCirugia();
	std::string& getEstado();
	std::string& getPrioridad();
	std::string& getFechaDeCirugia();
	char getGenero();
	std::string reportePaciente(Paciente& paciente);
};
#endif