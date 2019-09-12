#include "Doctor.h"

Doctor::Doctor() {}
Doctor::Doctor(std::string& nombre, Especialidad* _especialidad) : nombre(nombre), especialidad(_especialidad) {}
Doctor::~Doctor() {}

void Doctor::setNombre(std::string& _nombre) {
	Doctor::nombre = _nombre;
}
void Doctor::setPacientes(std::vector<Paciente*>& _pacientes) {
	Doctor::pacientes = _pacientes;
}
void Doctor::setEspecialidad(Especialidad* _especialidad) {
	Doctor::especialidad = _especialidad;
}

std::vector<Paciente*>& Doctor::getPacientes() {
	return pacientes;
}
std::string& Doctor::getNombre() {
	return nombre;
}
std::string& Doctor::getEspecialidad() { 
	return especialidad->getNombre();
}

void Doctor::nuevoPaciente(Paciente *_paciente) {
	pacientes.push_back(_paciente);
	_paciente->setDoctor(this);
}