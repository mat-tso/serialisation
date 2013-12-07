#pragma once

#include <sstream>
#include <string>

namespace utility {

template<typename from_t,typename to_t>
to_t convert(from_t & toconvert) {
	std::stringstream converter;

	converter << toconvert;
	to_t converted;
	converter >> converted;

	return converted;
}

} //namespace utility
