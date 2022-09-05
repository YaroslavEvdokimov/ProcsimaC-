#include "MyForm.h"
#include <Windows.h>

using namespace TestExcel;
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}