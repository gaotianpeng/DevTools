#include <gtest/gtest.h>
#include <string>
#include <assert.h>
#include <boost/archive/text_oarchive.hpp>
using namespace boost::archive;

using namespace std;

TEST(boost_test, hello_boost) {
	//cout << "boost_test -------------------" << endl;
	text_oarchive oa(cout);
	assert(!text_oarchive::is_loading::value);
	assert(text_oarchive::is_saving::value);
	int i = 1;
	oa << i;
}
