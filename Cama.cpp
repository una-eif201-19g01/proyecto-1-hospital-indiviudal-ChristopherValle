#include "Cama.h"
Cama::Cama() {}
Cama::Cama(int numero, Pabellon *pabellon) : estadoCama(estadoCama) {
		setCodigo(numero, pabellon->getLetra);
		setEstadoCama("libre");
	}
Cama::~Cama() {}

void Cama::setCodigo(int numero, std::string& letra) {
	codigo = letra + std::to_string(numero);
}
void Cama::setEstadoCama(std::string estado) {
	estadoCama = estado;
}

std::string& Cama::getCodigo() {
	return codigo;
}
std::string& Cama::getEstadoCama() {
	return estadoCama;
}