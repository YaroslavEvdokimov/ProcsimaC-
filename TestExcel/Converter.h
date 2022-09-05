#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>


class ConverterXLSX {
public:
	ConverterXLSX(std::string& path) : path(path) {}

	void StartConverter();

private:
	std::string path;
};