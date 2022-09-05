#include "Converter.h"

void ConverterXLSX::StartConverter() {

	std::string new_path = path + ".csv";

	const char* old_name = path.c_str();
	const char* new_name = new_path.c_str();

	if (std::rename(old_name, new_name)) {
	}
}