#include <iostream>
#include <string>
using namespace std;
#include "VendedorSalBase.h"

VendedorSalBase::VendedorSalBase(double s, const string &n, double v, double c):VendedorComissionado(n, v, c){
	setSal(s);
}

VendedorSalBase::~VendedorSalBase() {}

void VendedorSalBase::setSal(double s) {
	sal = (s < 0.0) ? 0.0 : s;
}

double VendedorSalBase::getSal() const {
	return sal;
}


