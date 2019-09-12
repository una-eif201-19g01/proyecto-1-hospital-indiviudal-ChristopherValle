#include "Pabellon.h"
Pabellon::Pabellon() {}
 
Pabellon::Pabellon(std::string& letra, char genero, int cantidad) : letra(letra), genero(genero), cantidad(cantidad){
	setCapacidad(20);
}
Pabellon::~Pabellon() {}

void Pabellon::setLetra(std::string& letra) {
	Pabellon::letra = letra;
}
void Pabellon::setGenero(char genero) {
	Pabellon::genero = genero;
}
void Pabellon::setCantidad(int cantidad) {
	Pabellon::cantidad = cantidad;
}
void Pabellon::setCapacidad(int capacidad) {
	Pabellon::capacidad = capacidad;
}
void Pabellon::setCamas(std::vector<Cama*>& camas) {
	Pabellon::camas = camas;
}

std::vector<Cama*>& Pabellon::getCamas() {
	return camas;
}

std::string& Pabellon::getLetra() {
	return letra;
}

char Pabellon::getGenero() {
	return genero;
}
int Pabellon::getCantidad() {
	return cantidad;
}
int Pabellon::getCapacidad() {
	return capacidad;
}

void Pabellon::nuevaCama(Cama* _cama) {
	camas.push_back(_cama);
	_cama->setCodigo(Pabellon::getCantidad(), Pabellon::getLetra());
}