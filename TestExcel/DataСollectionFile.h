#pragma once
#pragma once

#include <iostream>
#include <vector>
#include <fstream>
#include <string>

class Data—ollection {
public:
	Data—ollection() {}

	void AddData(std::string& str);
	std::vector<std::string> GetData();

	void OpenFile(std::string& path);
	int GetStrSize();

	~Data—ollection() {

	}
private:
	std::string path;
	std::vector<std::string> data;
};