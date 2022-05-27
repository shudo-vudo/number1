#ifndef COMPLEX_H
#define COMPLEX_H

#include <string>
#include <iostream>

using namespace std;


class Complex {
public:
	double re;
	double im;
	void print();
	Complex();
	~Complex();
	Complex sum(Complex cmp1);
	Complex mult(Complex cmp1);
	Complex del(Complex cmp1);
	double mod();
};

#endif