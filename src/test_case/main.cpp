#include <iostream>
#include <boost/version.hpp>
#include <boost/config.hpp>
#include <boost/timer.hpp>
#include "test_case.h"

using namespace std;
using namespace boost;

template <int a, int b>
int sum() {
	return a + b;
}

void test_case() {
	Human* hu = new Man;
	try {
		Woman* wo = dynamic_cast<Woman*>(hu);
		cout << wo << endl;
	}
	catch (...) {
		std::cout << "throw error" << std::endl;
	}
}

int main(int argc, char* argv[]) {
	//test_case();
	cout << typeid(23).name() << endl;
	return 0;
}