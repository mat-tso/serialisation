#include "convert.hpp"
#include <string>

template<char const * name,typename T>
class attribute
{
public:
	attribute(std::string value) :
		_value(convert<T>(value))
	{}

	T get() {
		return _value;
	}
private:
	T _value;
};
