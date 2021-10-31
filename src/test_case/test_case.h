#ifndef TEST_CASE_H
#define TEST_CASE_H

#include <iostream>

class Human {
public:
	virtual void eat() = 0;
};

class Man : public Human {
public:
	virtual void eat() {
		std::cout << "Man eat apple" << std::endl;
	}
};

class Woman {
public:
	void eat() {
		std::cout << "Woman::eat" << std::endl;
	}
};


#endif 