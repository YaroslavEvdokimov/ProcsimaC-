#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

class FileGeneration {

public:
	FileGeneration() {
		pathOut = "";
	};
	 
	void CreateOutFile(std::string& path);
	std::string GetOutFile();
	void CopyDataInFile(std::string& path_text_file);
	void AddDataInFile();

private:
	std::ofstream File;
	std::string pathOut;
	std::vector<std::string> BufferStr;
};