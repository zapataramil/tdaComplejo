#include "complejo.h"
#include <iostream>
#include <cmath>

using namespace std;

Complejo::Complejo(){
	real = 0;
	imaginario = 0;
}

Complejo::Complejo(double real, double imag){
	this->real = real;
	imaginario = imag;
}

Complejo::Complejo(const Complejo &c){
	real = c.real;
	imaginario = c.imaginario;
}

double Complejo::modulo(){
	return sqrt(real*real + imaginario*imaginario);
}

Complejo Complejo::operator +(const Complejo &c){
	return Complejo(c.real +real, c.imaginario + imaginario);
}


Complejo Complejo::operator -(Complejo c){
	return Complejo(real - c.real, imaginario - c.imaginario);
}

Complejo& Complejo::operator =(const Complejo &c){
    real = c.real;
	imaginario =c.imaginario;
	return *this;
}

double Complejo::getImaginario(){
	return imaginario;
}

double Complejo::getReal(){
	return real;
}

void Complejo::setImaginario(double imaginario){
	this->imaginario = imaginario;
}

void Complejo::setReal(double real){
	this->real = real;
}

Complejo::~Complejo(){

}

void Complejo::mostrar(){
		cout << this->real << " + " << this->imaginario << "i"<<endl;
	}


