#include "TourMain.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace tour;

[STAThreadAttribute]

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew TourApp);
}