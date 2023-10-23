/*
 * Usuario.cpp
 *
 *  Created on: 19/10/2023
 *      Author: algo2
 */

#include "Usuario.h"

Usuario::Usuario() {
	this->nombreUsuario = NULL;
	this->puntuacion = 0;
	this->estado = NOPUNTUADO;
}


Usuario::~Usuario() {
	// TODO Auto-generated destructor stub
}

void Usuario::setpuntaje(unsigned int puntuacion, string Nombre){
	if (this->sePuntuado() == false){
	this->puntuacion = puntuacion;
	this->nombreUsuario = Nombre;
	this->estado = PUNTUADO;
	}
}

unsigned int Usuario::getPuntaje(){
	return (this->puntuacion);
}

bool Usuario ::sePuntuado(){
	return (this->estado==PUNTUADO);
}
