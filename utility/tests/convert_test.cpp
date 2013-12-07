#include "convert.hpp"
#include <assert.h>
#include <string>

using namespace utility;

template <typename from_t, typename to_t>
void test(from_t to_convert, to_t expected)
{
	to_t converted = convert<from_t, to_t>(to_convert);
	assert(expected == converted);
}

int main() 
{
	using namespace std;
	test(string("23"), 23);
	test(34, string("34"));
	test(string("OK"), string("OK"));
}
