/*
 * Puntaje.h
 *
 *  Created on: 19/10/2023
 *      Author: algo2
 */

#ifndef PUNTUACION_H_
#define PUNTUACION_H_

#include "Usuario.h"
#include "Vector.h"

class Puntuacion {
private:
	Vector<Usuario *> * usuarios;
	double puntajeMinimo;
	double puntajeMaximo;
	unsigned int numeroUsuario;

public:

	Puntuacion(unsigned int cantidadDeUsuarios);

	virtual ~Puntuacion();

	unsigned int getPuntajeMinimo();

	unsigned int getPuntajeMaximoAdmitido();

	void puntuar(unsigned int puntuacion, string Nombre);

	unsigned int promedioDeLosPuntos();

	unsigned int UsuariosPuntados();

	unsigned int FrecuenciaDePuntaje();
};

#endif /* PUNTUACION_H_ */
