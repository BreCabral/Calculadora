#include "FormularioPrincipal.h"

#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:main")

using namespace System;
using namespace System::Windows::Forms;

int main()
{
	Calculadora::FormularioPrincipal form;
	Application::Run(% form);
}