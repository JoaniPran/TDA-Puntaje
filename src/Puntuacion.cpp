/*
 * Puntaje.cpp
 *
 *  Created on: 19/10/2023
 *      Author: algo2
 */

#include "Puntuacion.h"

Puntuacion::Puntuacion(unsigned int cantidadDeUsuarios) {

		this->numeroUsuario = 1;
	    this->usuarios = new Vector<Usuario *>(cantidadDeUsuarios);

	            for (unsigned int i=1 ; i<=cantidadDeUsuarios ; i++){
	                this->usuarios->setDato(i , new Usuario());
	     		 }
		}


Puntuacion::~Puntuacion() {
	delete this->usuarios;
}

unsigned int Puntuacion::getPuntajeMinimo(){
	return (this->puntajeMinimo);
}

unsigned int Puntuacion::getPuntajeMaximoAdmitido(){
	return (this->puntajeMaximo);
}

//no se puede ingresar el mismo nombre/"usuario"

void Puntuacion::puntuar(unsigned int puntuacion, string Nombre){
	this->usuarios->getDato(this->numeroUsuario)->setpuntaje(puntuacion, Nombre);
	this->numeroUsuario++;
}

unsigned int Puntuacion::promedioDeLosPuntos(){

unsigned int promedio = 0;

	for (unsigned int i=1 ; i<=this->usuarios->getLongitud() ; i++){
                promedio +=this->usuarios->getDato(i)->getPuntaje();
     		 }
	return (promedio/this->usuarios->getLongitud());
	}


unsigned int Puntuacion::UsuariosPuntados(){

unsigned int cantidadPuntuado = 0;

	for (unsigned int i=1 ; i<=this->usuarios->getLongitud() ; i++){
                if(this->usuarios->getDato(i)->sePuntuado()){
			cantidadPuntuado++;
     		 }
	}
	return (cantidadPuntuado);
    }



unsigned int Puntuacion::FrecuenciaDePuntaje(){

int FrecenciaPuntaje = 0, contador = 0, otraVariable=0;


for (unsigned int i=1 ; i<=this->usuarios->getLongitud() ; i++){
	for (unsigned int j=i+1 ; j<this->usuarios->getLongitud() ; j++){
		if (this->usuarios->getDato(i)->getPuntaje() == this->usuarios->getDato(j)->getPuntaje()){
			otraVariable++;
				}
			}
			if (otraVariable > contador){
				contador = otraVariable;
				FrecenciaPuntaje = this->usuarios->getDato(i)->getPuntaje();
			}
		}
	return (FrecenciaPuntaje);
}






