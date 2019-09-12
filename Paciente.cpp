#include "Paciente.h"
Paciente::Paciente() {}
Paciente::Paciente(std::string& nombre, std::string& direccion, std::string& patologia, std::string& tipoDeCirugia, char genero, Cama* _cama, Doctor* _doctor) : nombre(nombre), direccion(direccion), patologia(patologia), tipoDeCirugia(tipoCirugia), genero(genero), cama(_cama), doctor(_doctor) {}
Paciente::~Paciente() {}

void Paciente::agregarDoctor(Doctor * _doctor) {
	doctor(_doctor);
	_doctor->nuevoPaciente(this);
}

std::ostream& operator<<(std::ostream & os, Paciente & paciente) {
	os << " Nombre: " << paciente.nombre << "\n Cedula:" << paciente.cedula << "\n direccion:" << paciente.direccion << "\n patologia:" << paciente.patologia << "\n tipoDeCirugia:" << paciente.tipoDeCirugia << "\n genero:" << paciente.cama << "\n cama:" << paciente.cama->getCodigo() << "\n"<<paciente.doctor->getNombre();
	return os;
}

std::string& Paciente::getNombre() {
	return nombre
}

const std::string& Paciente::getDoctor() {
	return doctor->getNombre();
}

void Paciente::setCedula : (double cedula) {
	Paciente::cedula = cedula;
}

void Paciente::setNombre(std::string& nombre) {
	Paciente::nombre = nombre;
}

void Paciente::setDireccion : (std::string & direccion) {
	Paciente::direccion = direccion;
}

void Paciente::setPatologia : (std::string & patologia) {
	Paciente::patologia = patologia;
}

void Paciente::setTpoDeCirugia : (std::string & cirugia) {
	Paciente::tipoDeCirugia = cirugia;
}

void Paciente::setEstado : (std::string & estado) {
	Paciente::estado = estado;
}

void Paciente::setPrioridad : (std::string & prioridad) {
	Paciente::prioridad = prioridad;
}

void Paciente::setFechaDeCirugia : (std::string & fecha) {
	Paciente::fechaDeCirugia = fecha;
}

void Paciente::setGenero : (char genero) {
	Paciente::genero = genero;
}

void Paciente::setDoctor(Doctor & doctor) {
	Paciente::doctor = doctor;
}

void Paciente::setCama(Cama & cama) {
	Paciente::cama = cama;
}

bool Paciente::getCedula() {
	return cedula;
}
std::string& Paciente::getNombre() {
	return nombre;
}
std::string& Paciente::getDireccion() {
	return direccion;
}
std::string& Paciente::getPatologia() {
	return patologia;
}
std::string& Paciente::getTipoDeCirugia() {
	return tipoDeCirugia;
}
std::string& Paciente::getEstado() {
	return estado;
}
std::string& Paciente::getPrioridad() {
	return prioridad;
}
std::string& Paciente::getFechaDeCirugia() {
	return fechaDeCirugia;
}
char Paciente::getGenero() {
	return genero;
}
std::string Paciente::reportePaciente(Paciente& paciente) {
	std::string reporte;
	reporte = << " Nombre: " << paciente.nombre << "\n Cedula:" << paciente.cedula << "\n direccion:" << paciente.direccion << "\n patologia:" << paciente.patologia << "\n tipoDeCirugia:" << paciente.tipoDeCirugia << "\n genero:" << paciente.cama << "\n cama:" << paciente.cama->getCodigo() << "\n" << paciente.doctor->getNombre();
	return reporte;
}