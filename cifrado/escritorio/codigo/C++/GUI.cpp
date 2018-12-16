#include "GUI.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing; 

[STAThread]
int main(array<String^>^ args){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Cifrar::GUI form;
	Application::Run(%form);
	return 0;
}