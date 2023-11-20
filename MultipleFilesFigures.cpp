#include <iostream>
#include "windows.h"

#include "classes/figure.h"
#include "classes/triangle.h"
#include "classes/righttriangle.h"
#include "classes/isoscelestriangle.h"
#include "classes/equilaterialtriangle.h"
#include "classes/quadrangle.h"
#include "classes/frectangle.h"
#include "classes/square.h"
#include "classes/parallelogram.h"
#include "classes/rhombus.h"


void print_info(Figure* fig) {
	std::cout << fig->get_name() << std::endl;
	std::cout << fig->get_sides() << std::endl;
	std::cout << fig->get_angles() << "\n" << std::endl;
}



int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Triangle fig1(10, 20, 30, 50, 60, 70);
	RightTriangle fig2(10, 20, 30, 50, 60);
	IsoscelesTriangle fig3(10, 20, 50, 60, 70);
	EquilateralTriangle fig4(30);
	Quadrangle fig5(10, 20, 30, 40, 50, 60, 70, 80);
	FRectangle fig6(10, 20);
	Square fig7(10);
	Parallelogram fig8(10, 20, 30, 40);
	Rhombus fig9(30, 30, 40);

	print_info(&fig1);
	print_info(&fig2);
	print_info(&fig3);
	print_info(&fig4);
	print_info(&fig5);
	print_info(&fig6);
	print_info(&fig7);
	print_info(&fig8);
	print_info(&fig9);

}