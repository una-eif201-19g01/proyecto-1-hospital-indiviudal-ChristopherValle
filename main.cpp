#include <iostream>
#include "Pabellon.h"
#include "Especialidad.h"
#include "Doctor.h"
#include "Cama.h"
#include "Paciente.h"

void runHospital(Paciente pat, Pabellon row[10], Doctor doc[20], Especialidad spec[10], Cama* bed);
int main() {
	Paciente paciente1;
	Cama* cama;

	Doctor doctores[20];
	Pabellon pabellones[10];
	Especialidad especialidades[10];

	runHospital(paciente1, pabellones, doctores, especialidades, cama);

	return 0;
}
void runHospital(Paciente pat, Pabellon row[10], Doctor doc[20], Especialidad spec[10], Cama* bed) {
	int cedula, opcion, doc1, bed1, spec1, spec2, spec3;
	char genero, genero1;
	std::string nombre, apellido, direccion, patologia, tipoDeCirugia, prioridad, fechaDeCirugia, sector1, doc2, specn;
		do {
		std::cout << "\t\tHospital Esperanza" << std::endl << std::endl;
		std::cout << "Bienvenido:" << std::endl;
		std::cout << "\t1. Nuevo paciente " << std::endl;
		std::cout << "\t2. Nuevos pabellones " << std::endl;
		std::cout << "\t3. Nuevos Doctores " << std::endl;
		std::cout << "\t4. Cambiar Doctores " << std::endl;
		std::cout << "\t5. Especialidades" << std::endl;
		std::cout << "\t6. Mostrar pabellones" << std::endl;
		std::cout << "\t7. Mostrar doctores " << std::endl;
		std::cout << "\t8. Mostrar especialidades " << std::endl;
		std::cout << "\t9. Salir del sistema\n" << std::endl;
		std::cout << "\tDigite una opcion:\t" << std::endl;
		std::cin >> opcion;
		std::cout << std::endl;

	switch (opcion) {
	case 1: {

			std::cout << "\n\nIngrese los datos del paciente:  ";
			std::cout << "\nCedula:\t";
			std::cin >> cedula;
			std::cout << "\nNombre:\t";
			std::cin >> nombre;
			std::cout << "\nApellido:\t";
			std::cin >> apellido;
			std::cout << "\nGenero:\t";
			std::cin >> genero;
			std::cout << "\nDireccion:\t";
			std::cin >> direccion;
			std::cout << "\nPatologia:\t";
			std::cin >> patologia;
			std::cout << "\nTipo de cirugia:\t";
			std::cin >> tipoDeCirugia;
			std::cout << "\nPrioridad:\t";
			std::cin >> prioridad;
			std::cout << "\nFecha de la cirugia:\t";
			std::cin >> fechaDeCirugia;
			std::cout << "\nEscoja un # de Doctor:\t";
			std::cin >> doc1;
			for (int pab = 0; pab < 10; pab++) {
				if (row[pab].getGenero() == genero) {
					for (int cam = 0; cam < 20; cam++) {
						if (bed[cam].getEstadoCama() == "libre") {
							bed1 = cam;
							cam = 20; 
							pab = 10;
							bed[cam].setEstadoCama("ocupada");
						}
					}
				}
			}
			Paciente pat(cedula, nombre, direccion, patologia, tipoDeCirugia, genero, &bed[bed1], &doc[doc1 - 1]);
		break; 
	}
	case 2:
		std::cout << "\tNuevo Pabellon:\n ";
			for (int pab1 = 0; pab1 < 10; pab1++) {
				std::cout << "\tIngrese el sector del pabellon(Letra):\n";
				std::cin >> sector1;
				std::cout << "\tIngrese el genero:\n";
				std::cin >> genero1;
				row[pab1] = Pabellon(sector1, genero1, 10);
			}
			break;
		case 3:
			std::cout << "\tingresar doctores\n";
		for (int docs = 1; docs < 20; docs++) {
			std::cout << "\tIngrese el nombre del doctor:  ";
			std::cin >> doc2;
			std::cout << "\tEspecialidades:  \n";
			int cont = 1;
			for (int es1 = 0; es1 < 10; es1++) {
				std::cout << cont << ". " << spec[es1].getNombre() << "\n";
				cont++;
			}
			std::cout << "\tIngrese el numero de la especialidad:  ";
			std::cin >> spec1;
			doc[docs].setNombre(doc2);
			doc[docs].setEspecialidad(&spec[spec1 - 1]);
		}
		break;
		case 4:
			std::cout << "\tLos doctores actuales son:\n";
		int cont = 1;
		for (int do1 = 0; do1 < 20; do1++) {
			std::cout << cont << ". " << doc[do1].getNombre() << "\n";
			cont++;
		}
		std::cout << "\t Ingrese el numero del doctor que quiere eliminar:  \n";
		std::cin >> doc1;
		std::cout << "\tIngrese el nombre del nuevo doctor:  ";
		std::cin >> doc2;
		std::cout << "\tEspecialidades:  \n";
		int cont = 1;
		for (int es1 = 0; es1 < 10; es1++) {
			std::cout << cont << ". " << spec[es1].getNombre() << "\n";
			cont++;
		}
		std::cout << "\tIngrese el numero de la especialidad:  ";
		std::cin >> spec2;
		doc[doc1 - 1].setNombre(doc2);
		doc[doc1 - 1].setEspecialidad(&spec[spec2]);
		break;
		case 5:
			std::cout << "\tIngresar Especialidades \n";
		for (int es1 = 0; es1 < 10; es1++) {
			std::cout << "\tIngrese el nombre de la especialidad " << es1 + 1 <<": \n";
			std::cin >> specn;
			spec[es1].setNombre(specn);
		}
		break;
		case 6:
			std::cout << "\tLos pabellones son: \n";
		for (int pab3 = 0; pab3 < 10; pab3++) {
			row[pab3].getLetra();
		}
		break;
		case 7:
			std::cout << "\tLos Doctores son: \n";
		for (int doc4 = 0; doc4 < 20; doc4++) {
			doc[doc4].getNombre();
		}
		break;
		case 8:
			std::cout << "\tLas especialidades son: \n";
		for (int esp3 = 0; esp3 < 10; esp3++) {
			spec[esp3].getNombre();
		}
		break;
	default:
		std::cout << "\t Entrada invalida \n \tVuelva a intentarlo\n\n";
		
	}
} while (opcion != 9);

}