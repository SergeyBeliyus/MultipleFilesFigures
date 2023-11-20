#include "frectangle.h"

FRectangle::FRectangle(int a, int b) : Quadrangle(a, b, a, b, 90, 90, 90, 90) {
	this->name = "Прямоугольник";
};