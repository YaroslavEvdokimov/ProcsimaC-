#include "CSVFileGen.h"

void FileGeneration::CreateOutFile(std::string& path) {

	std::string temp_path = path + ".csv";

	std::ifstream iff(temp_path);
	if (iff.bad() == true) {

		File.open(temp_path);
		if (File.is_open()) {
			pathOut = temp_path;
		}
		File.close();
	}else{
		pathOut = temp_path;
	    return;
	}
}

void FileGeneration::CopyDataInFile(std::string& path_text_file) {

	std::ifstream TextFile(path_text_file);
	std::string data_str;

	if (TextFile.is_open()) {
		while (getline(TextFile, data_str)){
			BufferStr.push_back(data_str);
		}
	}
	TextFile.close();
}

void FileGeneration::AddDataInFile() {

	std::ofstream EndFile(pathOut, std::ios::binary | std::ios::app);
	if (EndFile.is_open()) {
		if (EndFile.eof()){
			for (int i = 1; i < BufferStr.size(); i++) {
			    EndFile << BufferStr[i] << std::endl;
	        }
		}else{
			for (int i = 0; i < BufferStr.size(); i++) {
				EndFile << BufferStr[i] << std::endl;
			}
		}
	}
	EndFile.close();
}

std::string FileGeneration::GetOutFile() {
	return pathOut;
}