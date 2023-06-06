#pragma once
#include "Cpaciente.h"
#include "Eestados.h"

class Creceptor: public Cpaciente
{
	time_t fecha_ingreso;
	unsigned int prioridad;
	estados estado;
public:
	Creceptor(time_t fecha_ingreso, estados estado, string nombre, string apellido, string telefono, string dni, char sexo, time_t fecha);
	~Creceptor();
	string to_string();
	void imprimir();
	bool verificar_trasfusion(char Rh, tipo_sangre tipo);
	estados get_estado();
	string get_dni();
	unsigned int get_prioridad();
	friend ostream& operator<<(ostream& out, Creceptor& C);
};

