#include "MyForm.h" // Inclui o cabe�alho do seu formul�rio

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute] // Necess�rio para aplica��es Windows Forms
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Substitua "CalculadoraCplusplus" pelo nome do seu namespace
    Calculadora::MyForm form;
    Application::Run(% form);

    return 0;
}
