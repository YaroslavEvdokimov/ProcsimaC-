#include "Data—ollectionFile.h"

void Data—ollection::AddData(std::string& str) {
	data.push_back(str);
}

std::vector<std::string> Data—ollection::GetData() {
	if (data.size() == 0 || data.size() == NULL) {
		///
	}
	return data;
}

void Data—ollection::OpenFile(std::string& path) {

	std::string data_str;

	std::ifstream File(path);
	if (File.is_open()) {
		int i = 0;
		while (getline(File, data_str))
		{
		
			AddData(data_str);
		}
	}
	File.close();
}

int Data—ollection::GetStrSize() {
	return data.size();
}