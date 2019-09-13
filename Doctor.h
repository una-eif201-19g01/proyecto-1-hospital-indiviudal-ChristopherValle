#pragma once
#ifndef DOCTOR_H
#define DOCTOR_H

#include <string>
#include <vector>
#include <ostream>
#include "Paciente.h"
#include "Especialidad.h"

class Paciente;

class Doctor {
	std::string nombre;
	Especialidad* especialidad;
	std::vector<Paciente*> pacientes;

public:
	Doctor();
	explicit Doctor(std::string& nombre, Especialidad* _especialidad);
	virtual ~Doctor();

	void setNombre(std::string& _nombre);
	void setPacientes(std::vector<Paciente*>& _pacientes);
	void setEspecialidad(Especialidad* _especialidad);

	std::vector<Paciente*>& getPacientes();
	std::string& getNombre();
	std::string& getEspecialidad();

	void nuevoPaciente(Paciente* _paciente);
};

#endif
