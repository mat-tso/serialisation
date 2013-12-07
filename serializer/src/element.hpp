#pragma once

#include <string>
#include <attributes>
#include <memory>

template<char const * tag, class attributes, class builder,
	class children>
class element {
public:
	element (attributes_map attributes) {}
private:
	std::unique_ptr<trait::implClass> impl;	
}
