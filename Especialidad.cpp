#include "Especialidad.h"

Especialidad::Especialidad() {}

Especialidad::Especialidad(const std::string& nombre) : nombre(nombre) {}

Especialidad::~Especialidad() {}

std::ostream &operator<<(std::ostream& os, Especialidad& especialidad) {
	os << "nombre: " << especialidad.nombre;
	return os;
}

std::string& Especialidad::getNombre() {
	return nombre;
}

void Especialidad::setNombre(const std::string &nombre) {
	Especialidad::nombre = nombre;
}