#include <iostream>
#include "figure.h"

Figure::Figure(){
	this->name = "������";
}

std::string Figure::get_name() {
	return name;
}

std::string Figure::get_sides() {
	return "��� ������";
}
std::string Figure::get_angles() {
	return "��� �����";
}

