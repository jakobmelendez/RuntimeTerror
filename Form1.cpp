#include "pch.h"
#include "Form1.h"
#include "AllClass.h"
using namespace System;

using namespace System::Windows::Forms;


[STAThread]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew CppCLRWinformsProjekt::Form1());
	return 0;
}
