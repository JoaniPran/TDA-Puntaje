/*
 * Usuario.h
 *
 *  Created on: 19/10/2023
 *      Author: algo2
 */

#ifndef USUARIO_H_
#define USUARIO_H_

#include <string>


enum estadoPuntuado{
	PUNTUADO,
	NOPUNTUADO
}

class Usuario {

private :
	string nombreUsuario;
	unsigned int puntuacion;
	estadoPuntuado estado;
public:

Usuario();

virtual ~Usuario();

void setpuntaje(unsigned int puntuacion, string Nombre);

unsigned int getPuntaje();

bool sePuntuado();

};

#endif /* USUARIO_H_ */
