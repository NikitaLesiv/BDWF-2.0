#include "MainForm.h"
#include "generationBeam.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	BD::MainForm form;

	Application::Run(% form);

	return 0;
}
