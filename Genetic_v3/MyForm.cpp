#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Genetic_v3::MyForm Form;
	Application::Run(%Form);
	Application::Exit();
	return(0);
	
}
