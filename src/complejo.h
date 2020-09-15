#ifndef COMPLEJO_H_
#define COMPLEJO_H_


class Complejo{
private:
	double real;
	double imaginario;

public:

	//PRE: -
	//POST: Construye un complejo nulo, es decir, parte real e imaginaria igual a 0
	Complejo();

	//PRE: Recibe la parte real primero e imaginaria como segundo parametro del complejo a crear
	//POST: Construye un complejo con los valores pasados por parametros
	Complejo(double real, double imaginario);

	//CONSTRUCTOR DE COPIA
	//PRE: Recibe un complejo
	//POST: Construye un complejo identico a c
	Complejo(const Complejo &c);

	//PRE: Recibe un complejo
	//POST: Devuelve un complejo como resultado de la suma de ambos complejos, es decir,
	//la suma entre el complejo por parametro y el complejo que llama a la suma.
	Complejo operator+(const Complejo &complejo);

	//PRE: Recibe un complejo
	//POST: Devuelve un complejo como resultado de la resta de ambos complejos, es decir,
	//la resta entre el complejo por parametro y el complejo que llama a la suma.
	Complejo operator-(Complejo complejo);

	//PRE: Recibe un complejo
	//POST: Devuelve al complejo que llama al operator= el complejo pasado por parametro
	Complejo& operator=(const Complejo &complejo);

	//PRE: -
	//POST: Devuelve el modulo (con coma - double) del complejo ingresado por parametro
	double modulo();

	//PRE: -
	//POST: Muestra por pantalla al numero complejo
	void mostrar();

	//PRE: -
	//POST: Muestra la parte real del complejo
	double getReal();

	//PRE: -
	//POST: Muestra la parte imaginaria del complejo
	double getImaginario();

	//PRE: Recibe la parte real a asignar en el complejo
	//POST: Asigna la parte real en el complejo que llama al metodo
	void setReal(double real);

	//PRE: Recibe la parte imaginaria a asignar en el complejo
	//POST: Asigna la parte imaginaria en el complejo que llama al metodo
	void setImaginario(double imaginario);


	//PRE: -
	//POST: Destruye al objeto
	~Complejo();



};


#endif /* COMPLEJO_H_ */
